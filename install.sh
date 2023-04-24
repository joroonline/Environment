#!/bin/bash

echo "Start the Download for the DWM (Dynamic Window Manager)..."

sudo pacman -S xorg-server xorg-xinit xorg-xrandr xorg-setroot firefox alacritty

## ALACRITTY ##
mkdir /.config/alacritty/
touch alacritty.yml

## XORG ##
cp /etc/X11/xinit/xinitrc $HOME/.xinitrc
echo setxkbmap -layout de -option nedeadkeys >> $HOME/.xinitrc
echo exec dwm >> $HOME/.xinitrc

## ICONS/FONTS ##
if [-d"/usr/share/fonts/"]; then
	mv Terminus.zip /usr/share/fonts/
	if ![pacman -Ql | grep unzip] then
		echo "installing unzip..."
		sudo pacman -S unzip
	fi
fi
