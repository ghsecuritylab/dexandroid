#include "configargs.h"

static char basever[] = "4.4.0";
static char datestamp[] = "20090421";
static char devphase[] = "";
static char revision[] = "";

/* FIXME plugins: We should make the version information more precise.
   One way to do is to add a checksum. */

static struct plugin_gcc_version gcc_version = {basever, datestamp,
						devphase, revision,
						configuration_arguments};
