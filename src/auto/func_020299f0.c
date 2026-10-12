/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fbc(s32);                             /* extern */
s32 func_0206621c(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_02100ef8;

void func_020299f0(void *arg0, void *arg1) {
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0x18) = func_0206621c(M2C_FIELD(arg1, s32 *, 0xC), &data_02100ef8);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r1 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = func_02064fbc(temp_r1 * 0x1C);
}
