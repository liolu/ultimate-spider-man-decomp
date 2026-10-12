/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d6e8(M2C_UNK, M2C_UNK *, s32);         /* extern */
M2C_UNK func_0202de3c(s32, M2C_UNK);                /* extern */
s32 func_0206570c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_021015b0;
extern M2C_UNK data_021015c0;
extern M2C_UNK data_021015d0;
extern M2C_UNK data_021015e4;
extern M2C_UNK data_021015fc;
extern M2C_UNK data_02101610;
extern M2C_UNK data_0210165c;
extern M2C_UNK data_02101664;

void func_0202dc68(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;

    temp_r0 = func_0200d6e8(0, &data_0210165c, func_0206570c(&data_0210165c));
    if (arg0 <= 1) {
        func_0202de3c(temp_r0, 0);
    } else {
        func_0202de3c(temp_r0, 2);
    }
    temp_r0_2 = func_0200d6e8(0, &data_021015b0, func_0206570c(&data_021015b0));
    if (arg0 <= 5) {
        func_0202de3c(temp_r0_2, 0);
    } else {
        func_0202de3c(temp_r0_2, 2);
    }
    temp_r0_3 = func_0200d6e8(0, &data_021015c0, func_0206570c(&data_021015c0));
    if (arg0 <= 5) {
        func_0202de3c(temp_r0_3, 0);
    } else {
        func_0202de3c(temp_r0_3, 2);
    }
    temp_r0_4 = func_0200d6e8(0, &data_021015d0, func_0206570c(&data_021015d0));
    if (arg0 <= 0xA) {
        func_0202de3c(temp_r0_4, 0);
    } else {
        func_0202de3c(temp_r0_4, 3);
    }
    temp_r0_5 = func_0200d6e8(0, &data_021015e4, func_0206570c(&data_021015e4));
    if (arg0 <= 0xA) {
        func_0202de3c(temp_r0_5, 0);
    } else {
        func_0202de3c(temp_r0_5, 3);
    }
    temp_r0_6 = func_0200d6e8(0, &data_02101664, func_0206570c(&data_02101664));
    if (arg0 <= 0x11) {
        func_0202de3c(temp_r0_6, 0);
    } else {
        func_0202de3c(temp_r0_6, 7);
    }
    temp_r0_7 = func_0200d6e8(0, &data_021015fc, func_0206570c(&data_021015fc));
    if (arg0 <= 0x16) {
        func_0202de3c(temp_r0_7, 0);
    } else {
        func_0202de3c(temp_r0_7, 1);
    }
    temp_r0_8 = func_0200d6e8(0, &data_02101610, func_0206570c(&data_02101610));
    if (arg0 <= 0x16) {
        func_0202de3c(temp_r0_8, 0);
        return;
    }
    func_0202de3c(temp_r0_8, 1);
}
