/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom */
static int center = 0;                      /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width = 500;                 /* minimum width when centered */
static const int vertpad = 42;              /* vertical padding of bar */
static const int sidepad = 400;              /* horizontal padding of bar */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] =
{
	"TerminessTTF Nerd Font:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */


static
const
char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#3db0a8", "#0f1e24" }, // #cba6f7 #11111b
	[SchemeSel]  = { "#3db0a8", "#0f1e24" }, // #cba6f7 #11111b
	[SchemeOut]  = { "#0f1e24", "#0f1e24" }, // #000000 #11111b
	[SchemeBorder] = { "#0f1e24", "#0f1e24" }, // #000000 #11111b
	[SchemeMid]  = { "#3db0a8", "#0f1e24" }, // #cba6f7 #11111b
	[SchemeHp]   = { "#0f1e24", "#0f1e24" }, // #000000 #11111b
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
/* -g option; if nonzero, dmenu uses a grid comprised of columns and lines */
static unsigned int columns    = 6;
static unsigned int lineheight = 6;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;

