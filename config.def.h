/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Victor Mono Nerd Font:style=Medium:size=10",
                              "monospace:size=10", "JoyPixels:size=11"};
static const char *prompt; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#ECEFF4", "#2E3440"},
    [SchemeSel] = {"#D8DEE9", "#434C5E"},
    [SchemeSelHighlight] = {"#8FBCBB", "#434C5E"},
    [SchemeNormHighlight] = {"#81A1C1", "#2E3440"},
    [SchemeOut] = {"#000000", "#00ffff"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 10;
static unsigned int lineheight = 30;
static unsigned int columns = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* window border */
static const unsigned int border_width = 3;
