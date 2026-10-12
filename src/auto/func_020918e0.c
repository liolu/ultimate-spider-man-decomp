/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020918e0(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 & 1) {
        var_r2 += 0x20000;
    }
    if (arg0 & 2) {
        var_r2 += 0x20000;
    }
    if (arg0 & 4) {
        var_r2 += 0x20000;
    }
    if (arg0 & 8) {
        var_r2 += 0x20000;
    }
    if (arg0 & 0x10) {
        var_r2 += 0x10000;
    }
    if (arg0 & 0x20) {
        var_r2 += 0x4000;
    }
    if (arg0 & 0x40) {
        var_r2 += 0x4000;
    }
    if (arg0 & 0x80) {
        var_r2 += 0x8000;
    }
    if (arg0 & 0x100) {
        var_r2 += 0x4000;
    }
    return var_r2;
}
