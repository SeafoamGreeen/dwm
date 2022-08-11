/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx       = 3;   /* border pixel of windows */
static const unsigned int snap           = 32;  /* snap pixel */
static const int swallowfloating         = 0;   /* 1 means swallow floating windows by default */
static const unsigned int gappih         = 5;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 5;  /* vert inner gap between windows */
static const unsigned int gappoh         = 5;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 5;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;   /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */
static const int showbar                 = 1;   /* 0 means no bar */
static const int topbar                  = 1;   /* 0 means bottom bar */
static const int bar_height              = 0;   /* 0 means derive from font, >= 1 explicit height */
static const int vertpad                 = 10;  /* vertical padding of bar */
static const int sidepad                 = 6;  /* horizontal padding of bar */
static int floatposgrid_x                = 5;  /* float grid columns */
static int floatposgrid_y                = 5;  /* float grid rows */
/* Status is to be shown on: -1 (all monitors), 0 (a specific monitor by index), 'A' (active monitor) */
static const int statusmon               = -1;
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int showsystray             = 1;   /* 0 means no systray */

/* Indicators: see patch/bar_indicators.h for options */
static int tagindicatortype              = INDICATOR_BOTTOM_BAR;
static int tiledindicatortype            = INDICATOR_NONE;
static int floatindicatortype            = INDICATOR_TOP_LEFT_SQUARE;
static int fakefsindicatortype           = INDICATOR_PLUS;
static int floatfakefsindicatortype      = INDICATOR_PLUS_AND_LARGER_SQUARE;
/* static const char *fonts[]               = { "terminus:size=8" }; */
/* static const char *fonts[]               = { "Fira Code Nerd Font:size=10" }; */
static const char *fonts[]               = { "monospace:size=10" };
static const char dmenufont[]            = "monospace:size=10";

static char c000000[]                    = "#000000"; // placeholder value

/* static char normfgcolor[]                = "#bbbbbb"; */
/* static char normbgcolor[]                = "#222222"; */
/* static char normbordercolor[]            = "#000000"; */
/* static char normfloatcolor[]             = "#db8fd9"; */

/* static char selfgcolor[]                 = "#eeeeee"; */
/* static char selbgcolor[]                 = "#005577"; */
/* static char selbordercolor[]             = "#005577"; */
/* static char selfloatcolor[]              = "#005577"; */

/* static char titlenormfgcolor[]           = "#bbbbbb"; */
/* static char titlenormbgcolor[]           = "#222222"; */
/* static char titlenormbordercolor[]       = "#444444"; */
/* static char titlenormfloatcolor[]        = "#db8fd9"; */

/* static char titleselfgcolor[]            = "#eeeeee"; */
/* static char titleselbgcolor[]            = "#005577"; */
/* static char titleselbordercolor[]        = "#005577"; */
/* static char titleselfloatcolor[]         = "#005577"; */

/* static char tagsnormfgcolor[]            = "#bbbbbb"; */
/* static char tagsnormbgcolor[]            = "#222222"; */
/* static char tagsnormbordercolor[]        = "#444444"; */
/* static char tagsnormfloatcolor[]         = "#db8fd9"; */

/* static char tagsselfgcolor[]             = "#eeeeee"; */
/* static char tagsselbgcolor[]             = "#005577"; */
/* static char tagsselbordercolor[]         = "#005577"; */
/* static char tagsselfloatcolor[]          = "#005577"; */

/* static char hidnormfgcolor[]             = "#005577"; */
/* static char hidselfgcolor[]              = "#227799"; */
/* static char hidnormbgcolor[]             = "#222222"; */
/* static char hidselbgcolor[]              = "#222222"; */

/* static char urgfgcolor[]                 = "#bbbbbb"; */
/* static char urgbgcolor[]                 = "#222222"; */
/* static char urgbordercolor[]             = "#ff0000"; */
/* static char urgfloatcolor[]              = "#db8fd9"; */

/* static char scratchselfgcolor[]          = "#FFF7D4"; */
/* static char scratchselbgcolor[]          = "#77547E"; */
/* static char scratchselbordercolor[]      = "#894B9F"; */
/* static char scratchselfloatcolor[]       = "#894B9F"; */

/* static char scratchnormfgcolor[]         = "#FFF7D4"; */
/* static char scratchnormbgcolor[]         = "#664C67"; */
/* static char scratchnormbordercolor[]     = "#77547E"; */
/* static char scratchnormfloatcolor[]      = "#77547E"; */

static char normfgcolor[]                = "#bbbbbb";
static char normbgcolor[]                = "#000000";
static char normbordercolor[]            = "#222222";
static char normfloatcolor[]             = "#222222";

static char selfgcolor[]                 = "#eeeeee";
static char selbgcolor[]                 = "#999999";
static char selbordercolor[]             = "#999999";
static char selfloatcolor[]              = "#999999";

static char titlenormfgcolor[]           = "#bbbbbb";
static char titlenormbgcolor[]           = "#000000";
static char titlenormbordercolor[]       = "#444444";
static char titlenormfloatcolor[]        = "#bbbbbb";

static char titleselbgcolor[]            = "#cccccc";
static char titleselfgcolor[]            = "#000000";
static char titleselbordercolor[]        = "#283f85";
static char titleselfloatcolor[]         = "#283f85";

static char tagsnormfgcolor[]            = "#bbbbbb";
static char tagsnormbgcolor[]            = "#000000";
static char tagsnormbordercolor[]        = "#444444";
static char tagsnormfloatcolor[]         = "#db8fd9";

static char tagsselbgcolor[]             = "#cccccc";
static char tagsselfgcolor[]             = "#000000";
static char tagsselbordercolor[]         = "#283f85";
static char tagsselfloatcolor[]          = "#283f85";

static char hidnormfgcolor[]             = "#283f85";
static char hidselfgcolor[]              = "#22aa99";
static char hidnormbgcolor[]             = "#000000";
static char hidselbgcolor[]              = "#000000";

static char urgfgcolor[]                 = "#bbbbbb";
static char urgbgcolor[]                 = "#000000";
static char urgbordercolor[]             = "#ff0000";
static char urgfloatcolor[]              = "#db8fd9";

static char scratchselfgcolor[]          = "#FFF7D4";
static char scratchselbgcolor[]          = "#77547E";
static char scratchselbordercolor[]      = "#aaaaaa";
static char scratchselfloatcolor[]       = "#aaaaaa";

static char scratchnormfgcolor[]         = "#FFF7D4";
static char scratchnormbgcolor[]         = "#664C67";
static char scratchnormbordercolor[]     = "#000000";
static char scratchnormfloatcolor[]      = "#000000";



static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { hidnormfgcolor,   hidnormbgcolor,   c000000,              c000000 },
	[SchemeHidSel]       = { hidselfgcolor,    hidselbgcolor,    c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
	[SchemeScratchSel]  = { scratchselfgcolor, scratchselbgcolor, scratchselbordercolor, scratchselfloatcolor },
	[SchemeScratchNorm] = { scratchnormfgcolor, scratchnormbgcolor, scratchnormbordercolor, scratchnormfloatcolor },
};




static const char *scratchpadcmd[] = {"s", "kitty", "--name=spterm", NULL};
static const char *scratchpad2cmd[] = {"a", "kitty", "--name=spterm2", NULL};
static const char *scratchpad3cmd[] = {"b", "kitty", "--name=spterm3", NULL};
static const char *scratchpad4cmd[] = {"c", "kitty", "--name=spterm4", NULL};
static const char *scratchpadvcmd[] = {"v", "kitty", "--name=sptermv","pulsemixer","--color","2", NULL};
static const char *scratchpadecmd[] = {"e", "kitty", "--name=spterme","nvim", NULL};

/* Tags
 * In a traditional dwm the number of tags in use can be changed simply by changing the number
 * of strings in the tags array. This build does things a bit different which has some added
 * benefits. If you need to change the number of tags here then change the NUMTAGS macro in dwm.c.
 *
 * Examples:
 *
 *  1) static char *tagicons[][NUMTAGS*2] = {
 *         [DEFAULT_TAGS] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I" },
 *     }
 *
 *  2) static char *tagicons[][1] = {
 *         [DEFAULT_TAGS] = { "•" },
 *     }
 *
 * The first example would result in the tags on the first monitor to be 1 through 9, while the
 * tags for the second monitor would be named A through I. A third monitor would start again at
 * 1 through 9 while the tags on a fourth monitor would also be named A through I. Note the tags
 * count of NUMTAGS*2 in the array initialiser which defines how many tag text / icon exists in
 * the array. This can be changed to *3 to add separate icons for a third monitor.
 *
 * For the second example each tag would be represented as a bullet point. Both cases work the
 * same from a technical standpoint - the icon index is derived from the tag index and the monitor
 * index. If the icon index is is greater than the number of tag icons then it will wrap around
 * until it an icon matches. Similarly if there are two tag icons then it would alternate between
 * them. This works seamlessly with alternative tags and alttagsdecoration patches.
 */
static char *tagicons[][NUMTAGS] = {
	[DEFAULT_TAGS]        = { "1", "2", "3", "4", "5", "6", "7", "8", "9" },
	[ALTERNATIVE_TAGS]    = { "A", "B", "C", "D", "E", "F", "G", "H", "I" },
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
};


/* There are two options when it comes to per-client rules:
 *  - a typical struct table or
 *  - using the RULE macro
 *
 * A traditional struct table looks like this:
 *    // class      instance  title  wintype  tags mask  isfloating  monitor
 *    { "Gimp",     NULL,     NULL,  NULL,    1 << 4,    0,          -1 },
 *    { "Firefox",  NULL,     NULL,  NULL,    1 << 7,    0,          -1 },
 *
 * The RULE macro has the default values set for each field allowing you to only
 * specify the values that are relevant for your rule, e.g.
 *
 *    RULE(.class = "Gimp", .tags = 1 << 4)
 *    RULE(.class = "Firefox", .tags = 1 << 7)
 *
 * Refer to the Rule struct definition for the list of available fields depending on
 * the patches you enable.
 */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *	WM_WINDOW_ROLE(STRING) = role
	 *	_NET_WM_WINDOW_TYPE(ATOM) = wintype
	 */
	RULE(.wintype = WTYPE "DIALOG", .isfloating = 1)
	RULE(.wintype = WTYPE "UTILITY", .isfloating = 1)
	RULE(.wintype = WTYPE "TOOLBAR", .isfloating = 1)
	RULE(.wintype = WTYPE "SPLASH", .isfloating = 1)
	RULE(.class = "Gimp", .tags = 1 << 4)
	RULE(.class = "kitty", .isterminal = 1)
	/* RULE(.title = "ranger", .isterminal = 1) */
	/* RULE(.title = "r", .isterminal = 1) */
	/* RULE(.class = "Firefox", .tags = 1 << 7) */
	RULE(.instance = "spterm", .scratchkey = 's', .isfloating = 1, .floatpos = "50% 50% 1600W 900H", .isterminal = 1)
	RULE(.instance = "spterm2", .scratchkey = 'a', .isfloating = 1, .floatpos = "50% 50% 1600W 900H", .isterminal = 1)
	RULE(.instance = "spterm3", .scratchkey = 'b', .isfloating = 1, .floatpos = "50% 50% 1600W 900H", .isterminal = 1)
	RULE(.instance = "spterm4", .scratchkey = 'c', .isfloating = 1, .floatpos = "50% 50% 1600W 900H", .isterminal = 1)
	RULE(.instance = "sptermv", .scratchkey = 'v', .isfloating = 1, .floatpos = "50% 50% 1600W 900H", .isterminal = 1)
	RULE(.instance = "spterme", .scratchkey = 'e', .isfloating = 1, .floatpos = "50% 50% 1600W 900H", .isterminal = 1)
};



/* Bar rules allow you to configure what is shown where on the bar, as well as
 * introducing your own bar modules.
 *
 *    monitor:
 *      -1  show on all monitors
 *       0  show on monitor 0
 *      'A' show on active monitor (i.e. focused / selected) (or just -1 for active?)
 *    bar - bar index, 0 is default, 1 is extrabar
 *    alignment - how the module is aligned compared to other modules
 *    widthfunc, drawfunc, clickfunc - providing bar module width, draw and click functions
 *    name - does nothing, intended for visual clue and for logging / debugging
 */
static const BarRule barrules[] = {
	/* monitor   bar    alignment         widthfunc                 drawfunc                clickfunc                hoverfunc                name */
	{ -1,        0,     BAR_ALIGN_LEFT,   width_tags,               draw_tags,              click_tags,              hover_tags,              "tags" },
	{  0,        0,     BAR_ALIGN_RIGHT,  width_systray,            draw_systray,           click_systray,           NULL,                    "systray" },
	{ -1,        0,     BAR_ALIGN_LEFT,   width_ltsymbol,           draw_ltsymbol,          click_ltsymbol,          NULL,                    "layout" },
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status2d,           draw_status2d,          click_status2d,          NULL,                    "status2d" },
	{ -1,        0,     BAR_ALIGN_NONE,   width_awesomebar,         draw_awesomebar,        click_awesomebar,        NULL,                    "awesomebar" },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */
static const int decorhints  = 0;    /* 1 means respect decoration hints */

#define FORCE_VSPLIT 1

/* mouse scroll resize */
static const int scrollsensetivity = 30; /* 1 means resize window by 1 pixel for each scroll event */
/* resizemousescroll direction argument list */
static const int scrollargs[][2] = {
	/* width change         height change */
	{ +scrollsensetivity,	0 },
	{ -scrollsensetivity,	0 },
	{ 0, 				  	+scrollsensetivity },
	{ 0, 					-scrollsensetivity },
};

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
   /* no layout function means floating behavior */
	/* { "><>",      NULL },    */
	{ "[M]",      monocle },
	{ NULL,       NULL },
};


/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },



/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = {
	"dmenu_run",
	"-m", dmenumon,
	"-fn", dmenufont,
	"-nb", normbgcolor,
	"-nf", normfgcolor,
	"-sb", selbgcolor,
	"-sf", selfgcolor,
	NULL
};
static const char *termcmd[]  = { "kitty", NULL };
/* static const char *yomichancmd[]  = { "librewolf  --new-window moz-extension://703018d4-db7f-4695-a3d5-ceca7caacfad/search.html", NULL }; */



static const char *roficmd[] = { "rofi", "-show", "combi", NULL };

static Key keys[] = {
	/* modifier                     key            function                argument */
	/* { MODKEY,                       XK_Escape,     setkeymode,             {.ui = COMMANDMODE} }, */
	{ MODKEY,                       XK_p,          spawn,                  {.v = roficmd} },
	{ MODKEY,                       XK_Return,     spawn,                  {.v = termcmd } },
	{ MODKEY,                       XK_b,          togglebar,              {0} },
	/* { MODKEY,                       XK_j,          focusstack,             {.i = +1 } }, */
	/* { MODKEY,                       XK_k,          focusstack,             {.i = -1 } }, */
    /* move hjkl */
	{ MODKEY,                       XK_h,          focusdir,               {.i = 0 } }, // left
	{ MODKEY,                       XK_l,          focusdir,               {.i = 1 } }, // right
	{ MODKEY,                       XK_k,          focusdir,               {.i = 2 } }, // up
	{ MODKEY,                       XK_j,          focusdir,               {.i = 3 } }, // down
/* inc dec master */
	{ MODKEY,                       XK_plus,       incnmaster,             {.i = +1 } },
	{ MODKEY,                       XK_minus,      incnmaster,             {.i = -1 } },
/* rezise */
	{ MODKEY|ControlMask,                       XK_h,          setmfact,               {.f = -0.01} },
	{ MODKEY|ControlMask,                       XK_l,          setmfact,               {.f = +0.01} },
	{ MODKEY|ControlMask,                       XK_k,          setcfact,               {.f = +0.05} },
	{ MODKEY|ControlMask,                       XK_j,          setcfact,               {.f = -0.05} },
	{ MODKEY,                       XK_o,          setcfact,               {0} },
	/* { MODKEY|Mod4Mask,              XK_Down,       moveresize,             {.v = "0x 25y 0w 0h" } }, */
	/* { MODKEY|Mod4Mask,              XK_Up,         moveresize,             {.v = "0x -25y 0w 0h" } }, */
	/* { MODKEY|Mod4Mask,              XK_Right,      moveresize,             {.v = "25x 0y 0w 0h" } }, */
	/* { MODKEY|Mod4Mask,              XK_Left,       moveresize,             {.v = "-25x 0y 0w 0h" } }, */
	/* { MODKEY|Mod4Mask|ShiftMask,    XK_Down,       moveresize,             {.v = "0x 0y 0w 25h" } }, */
	/* { MODKEY|Mod4Mask|ShiftMask,    XK_Up,         moveresize,             {.v = "0x 0y 0w -25h" } }, */
	/* { MODKEY|Mod4Mask|ShiftMask,    XK_Right,      moveresize,             {.v = "0x 0y 25w 0h" } }, */
	/* { MODKEY|Mod4Mask|ShiftMask,    XK_Left,       moveresize,             {.v = "0x 0y -25w 0h" } }, */
  /* move stack */
	{ MODKEY|ShiftMask,             XK_j,          movestack,              {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,          movestack,              {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_Return,     zoom,                   {0} },
/* gaps */
	{ MODKEY|Mod1Mask,              XK_plus,       incrgaps,               {.i = +5 } },
	{ MODKEY|Mod1Mask,              XK_minus,      incrgaps,               {.i = -5 } },
	/* { MODKEY|Mod1Mask,              XK_i,          incrigaps,              {.i = +1 } }, */
	/* { MODKEY|Mod1Mask|ShiftMask,    XK_i,          incrigaps,              {.i = -1 } }, */
	/* { MODKEY|Mod1Mask,              XK_o,          incrogaps,              {.i = +1 } }, */
	/* { MODKEY|Mod1Mask|ShiftMask,    XK_o,          incrogaps,              {.i = -1 } }, */
	/* { MODKEY|Mod1Mask,              XK_6,          incrihgaps,             {.i = +1 } }, */
	/* { MODKEY|Mod1Mask|ShiftMask,    XK_6,          incrihgaps,             {.i = -1 } }, */
	/* { MODKEY|Mod1Mask,              XK_7,          incrivgaps,             {.i = +1 } }, */
	/* { MODKEY|Mod1Mask|ShiftMask,    XK_7,          incrivgaps,             {.i = -1 } }, */
	/* { MODKEY|Mod1Mask,              XK_8,          incrohgaps,             {.i = +1 } }, */
	/* { MODKEY|Mod1Mask|ShiftMask,    XK_8,          incrohgaps,             {.i = -1 } }, */
	/* { MODKEY|Mod1Mask,              XK_9,          incrovgaps,             {.i = +1 } }, */
	/* { MODKEY|Mod1Mask|ShiftMask,    XK_9,          incrovgaps,             {.i = -1 } }, */
	{ MODKEY|Mod1Mask,              XK_0,          togglegaps,             {0} },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_0,          defaultgaps,            {0} },

	{ MODKEY,                       XK_Tab,        view,                   {0} },
	{ MODKEY|Mod1Mask,              XK_Tab,        shiftviewclients,       { .i = -1 } },
	{ MODKEY|Mod1Mask,              XK_backslash,  shiftviewclients,       { .i = +1 } },

	{ MODKEY,           XK_m,          showhideclient,         {0} },
	{ MODKEY,                       XK_q,          killclient,             {0} },
	{ MODKEY,                       XK_BackSpace,          killclient,             {0} },

	{ MODKEY|ShiftMask,             XK_q,          quit,                   {0} },
	{ MODKEY|ShiftMask,             XK_r,          quit,                   {1} },

	{ MODKEY,                       XK_t,          setlayout,              {.v = &layouts[0]} },
	{ MODKEY,                       XK_y,          setlayout,              {.v = &layouts[1]} },
	/* { MODKEY|ShiftMask,             XK_f,          setlayout,              {.v = &layouts[1]} }, */
	/* { MODKEY,                       XK_m,          setlayout,              {.v = &layouts[2]} }, */
	/* { MODKEY,                       XK_c,          setlayout,              {.v = &layouts[3]} }, */
	/* { MODKEY,                       XK_space,      setlayout,              {0} }, */
	{ MODKEY,                       XK_space,      togglefloating,         {0} },
/* scratchpads */
	{ MODKEY,                       XK_Home,          togglescratch,          {.v = scratchpadcmd } },
	{ MODKEY|ControlMask,           XK_Home,          setscratch,             {.v = scratchpadcmd } },
	{ MODKEY|ShiftMask,             XK_Home,          removescratch,          {.v = scratchpadcmd } },

	{ MODKEY,                       XK_End,          togglescratch,          {.v = scratchpad2cmd } },
	{ MODKEY|ControlMask,           XK_End,          setscratch,             {.v = scratchpad2cmd } },
	{ MODKEY|ShiftMask,             XK_End,          removescratch,          {.v = scratchpad2cmd } },

	{ MODKEY,                       XK_Page_Up,          togglescratch,          {.v = scratchpad3cmd } },
	{ MODKEY|ControlMask,           XK_Page_Up,          setscratch,             {.v = scratchpad3cmd } },
	{ MODKEY|ShiftMask,             XK_Page_Up,          removescratch,          {.v = scratchpad3cmd } },

	{ MODKEY,                       XK_Page_Down,          togglescratch,          {.v = scratchpad4cmd } },
	{ MODKEY|ControlMask,           XK_Page_Down,          setscratch,             {.v = scratchpad4cmd } },
	{ MODKEY|ShiftMask,             XK_Page_Down,          removescratch,          {.v = scratchpad4cmd } },

	{ MODKEY,                       XK_v,          togglescratch,          {.v = scratchpadvcmd } },
	{ MODKEY|ControlMask,           XK_v,          setscratch,             {.v = scratchpadvcmd } },
	{ MODKEY|ShiftMask,             XK_v,          removescratch,          {.v = scratchpadvcmd } },

	{ MODKEY,                       XK_e,          togglescratch,          {.v = scratchpadecmd } },
	{ MODKEY|ControlMask,           XK_e,          setscratch,             {.v = scratchpadecmd } },
	{ MODKEY|ShiftMask,             XK_e,          removescratch,          {.v = scratchpadecmd } },

	{ MODKEY,                       XK_f,          togglefullscreen,       {0} },
	{ MODKEY|ShiftMask,             XK_f,          togglefakefullscreen,   {0} },
	{ MODKEY,                       XK_s,          togglesticky,           {0} },
  { MODKEY,                       XK_n,      togglecanfocusfloating,   {0} },

	{ MODKEY,                       XK_0,          view,                   {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,          tag,                    {.ui = ~0 } },

	/* { MODKEY,                       XK_comma,      focusmon,               {.i = -1 } }, */
	/* { MODKEY,                       XK_period,     focusmon,               {.i = +1 } }, */
	/* { MODKEY|ShiftMask,             XK_comma,      tagmon,                 {.i = -1 } }, */
	/* { MODKEY|ShiftMask,             XK_period,     tagmon,                 {.i = +1 } }, */

	/* { MODKEY|ShiftMask,             XK_F1,         tagall,                 {.v = "F1"} }, */
	/* { MODKEY|ShiftMask,             XK_F2,         tagall,                 {.v = "F2"} }, */
	/* { MODKEY|ShiftMask,             XK_F3,         tagall,                 {.v = "F3"} }, */
	/* { MODKEY|ShiftMask,             XK_F4,         tagall,                 {.v = "F4"} }, */
	/* { MODKEY|ShiftMask,             XK_F5,         tagall,                 {.v = "F5"} }, */
	/* { MODKEY|ShiftMask,             XK_F6,         tagall,                 {.v = "F6"} }, */
	/* { MODKEY|ShiftMask,             XK_F7,         tagall,                 {.v = "F7"} }, */
	/* { MODKEY|ShiftMask,             XK_F8,         tagall,                 {.v = "F8"} }, */
	/* { MODKEY|ShiftMask,             XK_F9,         tagall,                 {.v = "F9"} }, */
	/* { MODKEY|ControlMask,           XK_F1,         tagall,                 {.v = "1"} }, */
	/* { MODKEY|ControlMask,           XK_F2,         tagall,                 {.v = "2"} }, */
	/* { MODKEY|ControlMask,           XK_F3,         tagall,                 {.v = "3"} }, */
	/* { MODKEY|ControlMask,           XK_F4,         tagall,                 {.v = "4"} }, */
	/* { MODKEY|ControlMask,           XK_F5,         tagall,                 {.v = "5"} }, */
	/* { MODKEY|ControlMask,           XK_F6,         tagall,                 {.v = "6"} }, */
	/* { MODKEY|ControlMask,           XK_F7,         tagall,                 {.v = "7"} }, */
	/* { MODKEY|ControlMask,           XK_F8,         tagall,                 {.v = "8"} }, */
	/* { MODKEY|ControlMask,           XK_F9,         tagall,                 {.v = "9"} }, */

	/* { MODKEY|Mod4Mask|ShiftMask,    XK_comma,      tagallmon,              {.i = +1 } }, */
	/* { MODKEY|Mod4Mask|ShiftMask,    XK_period,     tagallmon,              {.i = -1 } }, */
	{ MODKEY|Mod1Mask,                       XK_7,       moveplace,              {.ui = WIN_NW }},   /* XK_KP_Home,  */
	{ MODKEY|Mod1Mask,                       XK_8,       moveplace,              {.ui = WIN_N  }},   /* XK_KP_Up,    */
	{ MODKEY|Mod1Mask,                       XK_9,       moveplace,              {.ui = WIN_NE }},   /* XK_KP_Prior, */
	{ MODKEY|Mod1Mask,                       XK_u,       moveplace,              {.ui = WIN_W  }},   /* XK_KP_Left,  */
	{ MODKEY|Mod1Mask,                       XK_i,       moveplace,              {.ui = WIN_C  }},   /* XK_KP_Begin, */
	{ MODKEY|Mod1Mask,                       XK_o,       moveplace,              {.ui = WIN_E  }},   /* XK_KP_Right, */
	{ MODKEY|Mod1Mask,                       XK_j,       moveplace,              {.ui = WIN_SW }},   /* XK_KP_End,   */
	{ MODKEY|Mod1Mask,                       XK_k,       moveplace,              {.ui = WIN_S  }},   /* XK_KP_Down,  */
	{ MODKEY|Mod1Mask,                       XK_l,       moveplace,              {.ui = WIN_SE }},   /* XK_KP_Next,  */
	/* Note that due to key limitations the below example kybindings are defined with a Mod3Mask,
	 * which is not always readily available. Refer to the patch wiki for more details. */

  /* center window and make diferent sizes */
	{ MODKEY,           XK_c,            floatpos,               {.v = "50% 50% 1600W 900H" } }, // ·
	{ MODKEY|ShiftMask,           XK_c,            floatpos,               {.v = "50% 50% 1280W 720H" } }, // ·
	{ MODKEY|ControlMask,           XK_c,            floatpos,               {.v = "50% 50% 425W 240H" } }, // ·
	{ MODKEY|Mod1Mask,           XK_c,            floatpos,               {.v = "50% 50%" } }, // ·

	/* Client position is limited to monitor window area */
	/* { Mod3Mask,                     XK_u,            floatpos,               {.v = "-26x -26y" } }, // ↖ */
	/* { Mod3Mask,                     XK_i,            floatpos,               {.v = "  0x -26y" } }, // ↑ */
	/* { Mod3Mask,                     XK_o,            floatpos,               {.v = " 26x -26y" } }, // ↗ */
	/* { Mod3Mask,                     XK_j,            floatpos,               {.v = "-26x   0y" } }, // ← */
	/* { Mod3Mask,                     XK_l,            floatpos,               {.v = " 26x   0y" } }, // → */
	/* { Mod3Mask,                     XK_m,            floatpos,               {.v = "-26x  26y" } }, // ↙ */
	/* { Mod3Mask,                     XK_comma,        floatpos,               {.v = "  0x  26y" } }, // ↓ */
	/* { Mod3Mask,                     XK_period,       floatpos,               {.v = " 26x  26y" } }, // ↘ */
	/* Absolute positioning (allows moving windows between monitors) */
	/* { Mod3Mask|ControlMask,         XK_u,            floatpos,               {.v = "-26a -26a" } }, // ↖ */
	/* { Mod3Mask|ControlMask,         XK_i,            floatpos,               {.v = "  0a -26a" } }, // ↑ */
	/* { Mod3Mask|ControlMask,         XK_o,            floatpos,               {.v = " 26a -26a" } }, // ↗ */
	/* { Mod3Mask|ControlMask,         XK_j,            floatpos,               {.v = "-26a   0a" } }, // ← */
	/* { Mod3Mask|ControlMask,         XK_l,            floatpos,               {.v = " 26a   0a" } }, // → */
	/* { Mod3Mask|ControlMask,         XK_m,            floatpos,               {.v = "-26a  26a" } }, // ↙ */
	/* { Mod3Mask|ControlMask,         XK_comma,        floatpos,               {.v = "  0a  26a" } }, // ↓ */
	/* { Mod3Mask|ControlMask,         XK_period,       floatpos,               {.v = " 26a  26a" } }, // ↘ */
	/* Resize client, client center position is fixed which means that client expands in all directions */
	/* { Mod3Mask|ShiftMask,           XK_u,            floatpos,               {.v = "-26w -26h" } }, // ↖ */
	/* { Mod3Mask|ShiftMask,           XK_i,            floatpos,               {.v = "  0w -26h" } }, // ↑ */
	/* { Mod3Mask|ShiftMask,           XK_o,            floatpos,               {.v = " 26w -26h" } }, // ↗ */
	/* { Mod3Mask|ShiftMask,           XK_j,            floatpos,               {.v = "-26w   0h" } }, // ← */
	/* { Mod3Mask|ShiftMask,           XK_l,            floatpos,               {.v = " 26w   0h" } }, // → */
	/* { Mod3Mask|ShiftMask,           XK_m,            floatpos,               {.v = "-26w  26h" } }, // ↙ */
	/* { Mod3Mask|ShiftMask,           XK_comma,        floatpos,               {.v = "  0w  26h" } }, // ↓ */
	/* { Mod3Mask|ShiftMask,           XK_period,       floatpos,               {.v = " 26w  26h" } }, // ↘ */
	/* Client is positioned in a floating grid, movement is relative to client's current position */
	/* { Mod3Mask|Mod1Mask,            XK_u,            floatpos,               {.v = "-1p -1p" } }, // ↖ */
	/* { Mod3Mask|Mod1Mask,            XK_i,            floatpos,               {.v = " 0p -1p" } }, // ↑ */
	/* { Mod3Mask|Mod1Mask,            XK_o,            floatpos,               {.v = " 1p -1p" } }, // ↗ */
	/* { Mod3Mask|Mod1Mask,            XK_j,            floatpos,               {.v = "-1p  0p" } }, // ← */
	/* { MODKEY|ShiftMask,            XK_x,            floatpos,               {.v = " 50%x  50%y" } }, // · */
	/* { Mod3Mask|Mod1Mask,            XK_l,            floatpos,               {.v = " 1p  0p" } }, // → */
	/* { Mod3Mask|Mod1Mask,            XK_m,            floatpos,               {.v = "-1p  1p" } }, // ↙ */
	/* { Mod3Mask|Mod1Mask,            XK_comma,        floatpos,               {.v = " 0p  1p" } }, // ↓ */
	/* { Mod3Mask|Mod1Mask,            XK_period,       floatpos,               {.v = " 1p  1p" } }, // ↘ */
	{ MODKEY|ControlMask,           XK_comma,      cyclelayout,            {.i = -1 } },
	{ MODKEY|ControlMask,           XK_period,     cyclelayout,            {.i = +1 } },
	TAGKEYS(                        XK_1,                                  0)
	TAGKEYS(                        XK_2,                                  1)
	TAGKEYS(                        XK_3,                                  2)
	TAGKEYS(                        XK_4,                                  3)
	TAGKEYS(                        XK_5,                                  4)
	TAGKEYS(                        XK_6,                                  5)
	TAGKEYS(                        XK_7,                                  6)
	TAGKEYS(                        XK_8,                                  7)
	TAGKEYS(                        XK_9,                                  8)
};

static Key cmdkeys[] = {
	/* modifier                    keys                     function         argument */
	{ 0,                           XK_Escape,               clearcmd,        {0} },
	{ ControlMask,                 XK_c,                    clearcmd,        {0} },
	{ 0,                           XK_i,                    setkeymode,      {.ui = INSERTMODE} },
};

static Command commands[] = {
	/* modifier (4 keys)                          keysyms (4 keys)                                function         argument */
	{ {ControlMask, ShiftMask,  0,         0},    {XK_w,      XK_h,     0,         0},            setlayout,       {.v = &layouts[0]} },
	{ {ControlMask, 0,          0,         0},    {XK_w,      XK_o,     0,         0},            setlayout,       {.v = &layouts[2]} },
	{ {ControlMask, ShiftMask,  0,         0},    {XK_w,      XK_o,     0,         0},            onlyclient,      {0} },
	{ {ControlMask, 0,          0,         0},    {XK_w,      XK_v,     0,         0},            setlayout,       {.v = &layouts[0]} },
	{ {ControlMask, 0,          0,         0},    {XK_w,      XK_less,  0,         0},            setmfact,        {.f = -0.05} },
	{ {ControlMask, ShiftMask,  0,         0},    {XK_w,      XK_less,  0,         0},            setmfact,        {.f = +0.05} },
	{ {ControlMask, ShiftMask,  0,         0},    {XK_w,      XK_0,     0,         0},            setmfact,        {.f = +1.50} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_e,     0,         0},            spawn,           {.v = dmenucmd} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_o,     0,         0},            spawn,           {.v = dmenucmd} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_q,     XK_Return, 0},            quit,            {0} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_b,     XK_d,      XK_Return},    killclient,      {0} },
	{ {ShiftMask,   0,          0,         0},    {XK_period, XK_b,     XK_n,      XK_Return},    focusstack,      {.i = +1} },
	{ {ShiftMask,   0,          ShiftMask, 0},    {XK_period, XK_b,     XK_n,      XK_Return},    focusstack,      {.i = -1} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask           button          function        argument */
	{ ClkLtSymbol,          0,                   Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,                   Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,                   Button1,        togglewin,      {0} },
	{ ClkWinTitle,          0,                   Button3,        showhideclient, {0} },
	{ ClkWinTitle,          0,                   Button2,        zoom,           {0} },
	{ ClkStatusText,        0,                   Button2,        spawn,          {.v = termcmd } },
	/* placemouse options, choose which feels more natural:
	 *    0 - tiled position is relative to mouse cursor
	 *    1 - tiled postiion is relative to window center
	 *    2 - mouse pointer warps to window center
	 *
	 * The moveorplace uses movemouse or placemouse depending on the floating state
	 * of the selected client. Set up individual keybindings for the two if you want
	 * to control these separately (i.e. to retain the feature to move a tiled window
	 * into a floating position).
	 */
	{ ClkClientWin,         MODKEY,              Button1,        moveorplace,    {.i = 1} },
	{ ClkClientWin,         MODKEY,              Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,              Button3,        resizemouse,    {0} },
	{ ClkClientWin,         MODKEY,              Button4,        resizemousescroll, {.v = &scrollargs[0]} },
	{ ClkClientWin,         MODKEY,              Button5,        resizemousescroll, {.v = &scrollargs[1]} },
	{ ClkClientWin,         MODKEY,              Button6,        resizemousescroll, {.v = &scrollargs[2]} },
	{ ClkClientWin,         MODKEY,              Button7,        resizemousescroll, {.v = &scrollargs[3]} },
	{ ClkClientWin,         MODKEY|ShiftMask,    Button3,        dragcfact,      {0} },
	{ ClkClientWin,         MODKEY|ShiftMask,    Button1,        dragmfact,      {0} },
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,              Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,              Button3,        toggletag,      {0} },
};


