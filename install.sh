#!/bin/bash

echo "Start the Download for the DWM (Dynamic Window Manager)..."

sudo pacman -S base-devel

sudo pacman -S xorg-server xorg-xinit xorg-xrandr xorg-setroot firefox alacritty

## ALACRITTY ##
mkdir /.config/alacritty/
touch alacritty.yml

## .XINITRC FILE ##
cp /etc/X11/xinit/xinitrc ~/.xinitrc
echo setxkbmap -layout de -option nedeadkeys >> ~/.xinitrc
echo feh --bg-scale ~/Environment/ttednp43o5c51.jpg >> ~/.xinitrc
echo exec dwm >> $HOME/.xinitrc

## ICONS/FONTS ##
if [-d"/usr/share/fonts/"]; then
	mv Terminus.zip /usr/share/fonts/
	if ![pacman -Ql | grep unzip]; then
		echo "installing unzip..."
		sudo pacman -S unzip
	fi
fi

## INSTALL THE WM ##
cd dwm/
sudo make install
cd ..
cd dmenu/
sudo make install

