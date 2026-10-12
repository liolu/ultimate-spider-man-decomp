/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02085620(void *, M2C_UNK);             /* extern */

void func_020855ec(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0xDC) = (s32) M2C_FIELD(arg0, s32 *, 0xE4);
    M2C_FIELD(arg0, s32 *, 0xE0) = arg1;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = arg2;
    func_02085620(arg0, 1);
}
