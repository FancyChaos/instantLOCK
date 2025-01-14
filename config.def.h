/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] = "black",	 /* after initialization */
	[INPUT] = "#5294e2",  /* during input */
	[FAILED] = "#cc575d", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* default message */
static const char * message = "enter password";
static const char * breakmessage = "someone tried and failed to unlock your computer";
static int breakin = 0;
static int onebutton = 0;

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "10x20";
