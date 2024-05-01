/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "JetBrainsMonoNerdFont-Medium:pixelsize=14:antialias=true:autohint=true",
    "NotoColorEmoji:pixelsize=8:antialias=true:autohint=true"};
static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#cdd6f4", "#1f1d2e"},
    [SchemeSel] = {"#191724", "#31748f"},
    [SchemeOut] = {"#000000", "#31748f"},
};
static const unsigned int alphas[SchemeLast][2] = {
    /*		fgalpha		bgalphga	*/
    [SchemeNorm] = {fgalpha, bgalpha},
    [SchemeSel] = {fgalpha, bgalpha},
    [SchemeOut] = {fgalpha, bgalpha},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
