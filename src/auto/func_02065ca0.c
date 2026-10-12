/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02065c18(void *);                      /* extern */
M2C_UNK func_02065d60(s32);                         /* extern */
M2C_UNK func_02065de8(s32);                         /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */

void func_02065ca0(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    func_0209ab0c(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s32 *, 0) = 0;
    func_0209ab0c(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r4 != 0) {
        func_02065de8(temp_r4);
        func_0209ab0c(temp_r4);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r4_2 != 0) {
        func_02065d60(temp_r4_2);
        func_0209ab0c(temp_r4_2);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    func_02065c18(arg0);
}
