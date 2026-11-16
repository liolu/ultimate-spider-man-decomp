/* compiler: 2.0/sp1p5 -proc arm7tdmi */
#include "m2c.h"

M2C_UNK func_02063338(s32);                         /* extern */
M2C_UNK func_02063350(s32);                         /* extern */
M2C_UNK func_02063360(s32);                         /* extern */
M2C_UNK func_0206337c(s32);                         /* extern */

void func_020632d0(s32 arg0) {
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r5_2;

    var_r4 = arg0;
    var_r5 = 0;
    do {
        func_0206337c(var_r4);
        var_r5 += 1;
        var_r4 += 0x14;
    } while (var_r5 < 0xB);
    func_02063360(arg0 + 0xDC);
    func_02063360(arg0 + 0xE8);
    func_02063350(arg0 + 0xF4);
    var_r4_2 = arg0 + 0x104;
    var_r5_2 = 0;
    do {
        func_02063338(var_r4_2);
        var_r5_2 += 1;
        var_r4_2 += 0xC;
    } while (var_r5_2 < 3);
}
