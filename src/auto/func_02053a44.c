/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9b28(void *);                      /* extern */
M2C_UNK func_02053ce4(void *);                      /* extern */
s32 func_0208c03c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02150c78;

void func_02053a44(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x188) <= 0x3E8) || ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) <= 0x3E8)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1D0);
        if ((temp_r0 != 3) && (temp_r0 != 7)) {
            func_02053ce4(arg0);
        }
        func_01ff9b28(arg0);
    }
    temp_r2 = func_0208c03c(&data_02150c78) - 0x3E8;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x188) < temp_r2) && ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) < temp_r2)) {
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x1D0);
    if ((temp_r0_2 != 3) && (temp_r0_2 != 7)) {
        func_02053ce4(arg0);
    }
    func_01ff9b28(arg0);
}
