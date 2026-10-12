#include "m2c.h"

s32 func_0207ee84(void *arg0, void *arg1) {
    s32 var_ip;
    s32 var_r0;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;

    var_ip = 1;
    if (M2C_FIELD(arg1, u16 *, 0x1C) != M2C_FIELD(arg0, u16 *, 0x630)) {
        var_ip = 0;
    } else {
        var_r2 = M2C_FIELD(arg1, s32 *, 8) - M2C_FIELD(arg0, s32 *, 0x61C);
        if (var_r2 < 0) {
            var_r2 = 0 - var_r2;
        }
        if (var_r2 > 0x3E8) {
            var_ip = 0;
        } else {
            var_r2_2 = M2C_FIELD(arg1, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 0x620);
            if (var_r2_2 < 0) {
                var_r2_2 = 0 - var_r2_2;
            }
            if (var_r2_2 > 0x3E8) {
                var_ip = 0;
            } else {
                var_r2_3 = M2C_FIELD(arg1, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x628);
                if (var_r2_3 < 0) {
                    var_r2_3 = 0 - var_r2_3;
                }
                if (var_r2_3 > 0x3E8) {
                    var_ip = 0;
                } else {
                    var_r0 = M2C_FIELD(arg1, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0x62C);
                    if (var_r0 < 0) {
                        var_r0 = 0 - var_r0;
                    }
                    if (var_r0 > 0x3E8) {
                        var_ip = 0;
                    }
                }
            }
        }
    }
    return var_ip;
}
