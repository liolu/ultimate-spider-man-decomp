/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02015400(s32, M2C_UNK);                    /* extern */
s32 func_02021e50(s32, M2C_UNK);                    /* extern */
s32 func_02064fc8(M2C_UNK);                         /* extern */

void *func_02021bb8(void *arg0) {
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_11;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;

    var_r0 = func_02064fc8(0x10);
    if (var_r0 != 0) {
        var_r0 = func_02015400(var_r0, 0x80);
    }
    M2C_FIELD(arg0, s32 *, 0) = var_r0;
    var_r0_2                  = func_02064fc8(0x14);
    if (var_r0_2 != 0) {
        var_r0_2 = func_02021e50(var_r0_2, 2);
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0_2;
    var_r0_3                  = func_02064fc8(0x14);
    if (var_r0_3 != 0) {
        var_r0_3 = func_02021e50(var_r0_3, 0x40);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_3;
    var_r0_4                  = func_02064fc8(0x14);
    if (var_r0_4 != 0) {
        var_r0_4 = func_02021e50(var_r0_4, 0x60);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0_4;
    var_r0_5                    = func_02064fc8(0x14);
    if (var_r0_5 != 0) {
        var_r0_5 = func_02021e50(var_r0_5, 0x20);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0_5;
    var_r0_6                     = func_02064fc8(0x14);
    if (var_r0_6 != 0) {
        var_r0_6 = func_02021e50(var_r0_6, 0x30);
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_r0_6;
    var_r0_7                     = func_02064fc8(0x14);
    if (var_r0_7 != 0) {
        var_r0_7 = func_02021e50(var_r0_7, 0x80);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r0_7;
    var_r0_8                     = func_02064fc8(0x14);
    if (var_r0_8 != 0) {
        var_r0_8 = func_02021e50(var_r0_8, 0x80);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r0_8;
    var_r0_9                     = func_02064fc8(0x14);
    if (var_r0_9 != 0) {
        var_r0_9 = func_02021e50(var_r0_9, 0x40);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_r0_9;
    var_r0_10                    = func_02064fc8(0x14);
    if (var_r0_10 != 0) {
        var_r0_10 = func_02021e50(var_r0_10, 0x40);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0_10;
    var_r0_11                    = func_02064fc8(0x14);
    if (var_r0_11 != 0) {
        var_r0_11 = func_02021e50(var_r0_11, 0x80);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r0_11;
    return arg0;
}
