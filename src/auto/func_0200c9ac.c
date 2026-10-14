/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb540();                            /* extern */
M2C_UNK func_01ffb558(M2C_UNK);                     /* extern */
s32 func_02024c20(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_020553b0(s32, s32);                    /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */
extern M2C_UNK data_0213af70;
extern M2C_UNK data_0213af80;
extern M2C_UNK data_0213af90;
extern M2C_UNK data_0213af98;
extern M2C_UNK data_0213afc0;

void func_0200c9ac(s32 arg0, u32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;

    func_01ffb558(0);
    switch (arg1) {
        default:
            break;
        case 0:
            temp_r0 = func_02064fc8(0x40);
            var_r1  = temp_r0;
            if (var_r1 != 0) {
                var_r1 = func_02024c20(temp_r0, &data_0213af80, 1);
            }
            func_020553b0(arg0 + 0x84, var_r1);
            break;
        case 1:
            temp_r0_2 = func_02064fc8(0x40);
            var_r1_2  = temp_r0_2;
            if (var_r1_2 != 0) {
                var_r1_2 = func_02024c20(temp_r0_2, &data_0213af98, 1);
            }
            func_020553b0(arg0 + 0x84, var_r1_2);
            break;
        case 2:
            temp_r0_3 = func_02064fc8(0x40);
            var_r1_3  = temp_r0_3;
            if (var_r1_3 != 0) {
                var_r1_3 = func_02024c20(temp_r0_3, &data_0213af90, 1);
            }
            func_020553b0(arg0 + 0x84, var_r1_3);
            break;
        case 3:
            temp_r0_4 = func_02064fc8(0x40);
            var_r1_4  = temp_r0_4;
            if (var_r1_4 != 0) {
                var_r1_4 = func_02024c20(temp_r0_4, &data_0213afc0, 1);
            }
            func_020553b0(arg0 + 0x84, var_r1_4);
            break;
        case 4:
            temp_r0_5 = func_02064fc8(0x40);
            var_r1_5  = temp_r0_5;
            if (var_r1_5 != 0) {
                var_r1_5 = func_02024c20(temp_r0_5, &data_0213af70, 1);
            }
            func_020553b0(arg0 + 0x84, var_r1_5);
            break;
    }
    func_01ffb540();
}
