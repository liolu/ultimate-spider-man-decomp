/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_01fff300();                              /* extern */
s32 func_0207c85c(M2C_UNK, s32, s32);               /* extern */
M2C_UNK func_0207c880(s32);                         /* extern */
s32 func_0207c88c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0207c8b4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK (*data_02150a9c)(s32);

s32 func_0207c7a0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = func_0207c8b4(arg0, arg3);
    if (temp_r0 == -1) {
        return 0;
    }
    if (arg2 < temp_r0) {
        return 0;
    }
    do {

    } while (M2C_FIELD(func_01fff300(), u8 *, 0xC) != 0);
    temp_r0_2 = func_0207c88c(arg0, arg3);
    if (temp_r0_2 == -1) {
        return 0;
    }
    temp_r4 = func_0207c85c(arg1, temp_r0, temp_r0_2);
    func_0207c880(temp_r0_2);
    if (data_02150a9c != NULL) {
        data_02150a9c(temp_r4);
    }
    return 1;
}
