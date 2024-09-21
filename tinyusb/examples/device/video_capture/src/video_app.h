#ifndef _VIDEO_APP_H_
#define _VIDEO_APP_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "bsp/board_api.h"
#include "tusb.h"


void video_task(void* param);
void usb_dc_low_level_init(void);

#endif

