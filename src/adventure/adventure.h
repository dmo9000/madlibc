#ifndef __ADVENTURE_H__
#define __ADVENTURE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libvt.h"
#include "verbs.h"
#include "objects.h"

#define ULONG_MAX       18446744073709551615

uint16_t get_new_roomid(uint16_t, uint8_t);
int load_current_room(uint16_t);

#endif /* __ADVENTURE_H__ */
