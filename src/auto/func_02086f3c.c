/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020870d0();                              /* extern */
M2C_UNK func_02087114(void *, M2C_UNK);             /* extern */

void func_02086f3c(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    void **temp_r0_2;
    void **temp_r0_3;
    void *temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        return;
    }
    temp_r0 = func_020870d0(arg0);
    if (M2C_FIELD(temp_r0, u8 *, 0xB) != 0) {
        temp_r0_2 = M2C_FIELD(arg0, void ***, 0x14);
        M2C_FIELD(arg0, s32 *, 0x1C) = M2C_FIELD(*temp_r0_2, s32 (**)(void **, void *), 8)(temp_r0_2, temp_r0);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        temp_r0_3 = M2C_FIELD(arg0, void ***, 0x14);
        if (M2C_FIELD(*temp_r0_3, s32 (**)(void **, void *), 8)(temp_r0_3, temp_r0) != 0) {
            var_r1 = M2C_FIELD(temp_r0, s32 *, 0) - M2C_FIELD(arg0, s32 *, 0x28);
            if (var_r1 < 0) {
                var_r1 = 0 - var_r1;
            }
            if (var_r1 < (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
                var_r1_2 = M2C_FIELD(temp_r0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x2C);
                if (var_r1_2 < 0) {
                    var_r1_2 = 0 - var_r1_2;
                }
                if (var_r1_2 >= (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
                    goto block_12;
                }
            } else {
block_12:
                func_02087114(arg0, 0);
                M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
            }
        }
    }
    if (M2C_FIELD(temp_r0, u8 *, 0xA) != 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
