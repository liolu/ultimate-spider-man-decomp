/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f358(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_020566d0(M2C_UNK, s32);                    /* extern */
s32 func_0205683c(M2C_UNK, s32);                    /* extern */
s32 func_02056878(M2C_UNK, s32);                    /* extern */
void *func_02056ab0(void *);                        /* extern */
s32 func_02056ac8(void *);                          /* extern */
s32 func_020572e8(s32, s32, s32);                   /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

void func_020568b0(M2C_UNK arg0, void *arg1) {
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 var_r1;
    void *temp_r0_2;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x20) {
        return;
    }
    temp_r0 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 1:
            temp_r0_2 = func_02056ab0(arg1);
            if (func_02056878(arg0, M2C_FIELD(temp_r0_2, s32 *, 0)) != 0) {
                return;
            }
            if (func_0205683c(arg0, M2C_FIELD(temp_r0_2, s32 *, 0)) != 0) {
                return;
            }
            temp_r0_3 = func_02064fc8(0x68);
            var_r1    = temp_r0_3;
            if (var_r1 != 0) {
                var_r1 = func_020572e8(temp_r0_3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4));
            }
            func_0202f358(arg0, var_r1, 1);
            return;
        case 17:
            temp_r0_4 = func_02056ac8(arg1);
            if (func_02056878(arg0, temp_r0_4) != 0) {
                return;
            }
            if (func_0205683c(arg0, temp_r0_4) != 0) {
                return;
            }
            func_0202f358(arg0, func_020566d0(arg0, temp_r0_4), 1);
            return;
    }
}
