/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fbc(s32);                             /* extern */

void *func_020836d0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = func_02064fbc(M2C_FIELD(arg0, s32 *, 0x10) * 4);
    return arg0;
}
