/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffbcb8(void *);                          /* extern */
M2C_UNK func_02028c6c(void *, M2C_UNK *, M2C_UNK);  /* extern */
s32 func_02034028();                                /* extern */
M2C_UNK func_0203403c(M2C_UNK *, void *, M2C_UNK);  /* extern */
s32 *func_02085700(s32, M2C_UNK);                   /* extern */

void func_0203ca88(void *arg0) {
    M2C_UNK sp0;
    M2C_UNK var_r2;

    if (func_02034028() == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1A8) = func_01ffbcb8(arg0);
    if ((s32) *func_02085700(M2C_FIELD(arg0, s32 *, 0xBC), 7) <= 0) {
        return;
    }
    func_0203403c(&sp0, arg0, 7);
    if (M2C_FIELD(arg0, u8 *, 0x15E) == 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    func_02028c6c(arg0 + 0x1C8, &sp0, var_r2);
}
