/**
 * Utility Commands for dwm
 * */

#ifndef __U_CMDS_H__
#define __U_CMDS_H__

/* Volume Contorl */
static const char* ucmds_volumeUp[] = { "amixer", "sset", "Master", "5%+", "unmute", NULL };
static const char* ucmds_volumeDown[] = { "amixer", "sset", "Master", "5%-", "unmute", NULL };

#endif
