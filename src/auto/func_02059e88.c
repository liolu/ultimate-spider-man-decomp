/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fbc(s32);                             /* extern */

void *func_02059e88(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s32 *, 8)    = arg3;
    temp_r4                      = arg3 * 2;
    M2C_FIELD(arg0, s32 *, 0xC)  = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = func_02064fbc(temp_r4);
    M2C_FIELD(arg0, s32 *, 0x18) = func_02064fbc(temp_r4);
    return arg0;
}
