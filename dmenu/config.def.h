/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int centered = 1;                    /* -c option; centers dmenu on screen */
/* theme management */
# include "theme_beg.h" /* this is a compile-time generated header file */
# include "theme.h"
static int topbar = DMENU_TOPBAR;                      /* -b  option; if 0, dmenu appears at bottom     */
static int min_width = 500;                    /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bh = 0;               /* add an defined amount of pixels to the bar height */
static const char *fonts[] = DMENU_FONTS;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
        [SchemeNorm] = { DMENU_FOREGROUND, DMENU_BACKGROUND },
	[SchemeSel] = { DMENU_SELFOREGROUND, DMENU_SELBACKGROUND },
	[SchemeOut] = { DMENU_OUTFOREGROUND, DMENU_OUTBACKGROUND },	
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* theme management */
# include "theme_end.h" /* this is a compile-time generated header file */