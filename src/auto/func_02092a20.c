#include "m2c.h"

s32 func_02092a20(void) {
    return (((s32) (*(u16 *)0x04001008 & 0x1F00) >> 8) << 0xB) + 0x06200000;
}
