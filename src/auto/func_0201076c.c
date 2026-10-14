/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e4c(void *, s32);                 /* extern */
M2C_UNK func_02000e5c(void *, s32);                 /* extern */
extern s32 data_020f7548;
extern s32 data_020f7564;
extern s32 data_0213b6e0;

void func_0201076c(void *arg0) {
    s32 temp_r1;
    s32 var_r1;
    s32 var_r1_2;
    void *temp_r0;
    void *temp_r0_2;

    if ((s32) data_0213b6e0 < (s32) M2C_FIELD(arg0, s32 *, 0x788)) {
        return;
    }
    temp_r1 = data_020f7548 - data_020f7564;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) <= temp_r1) {
        return;
    }
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x6F4), s32 *, 0x50) <= temp_r1) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0xA4);
    var_r1  = M2C_FIELD(temp_r0, s32 *, 0x28);
    if (var_r1 >= 0) {
        var_r1 = 0;
    }
    func_02000e5c(temp_r0 + 0x1C, var_r1);
    temp_r0_2 = M2C_FIELD(arg0, void **, 0xA4);
    var_r1_2  = M2C_FIELD(temp_r0_2, s32 *, 0x30);
    if (var_r1_2 >= 0) {
        var_r1_2 = 0;
    }
    func_02000e4c(temp_r0_2 + 0x1C, var_r1_2);
}
