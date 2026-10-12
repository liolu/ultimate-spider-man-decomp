/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02026d20(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg1 & 0x100C;
    if (arg1 & 1) {
        var_r0 |= 0x10;
    }
    if (arg1 & 2) {
        var_r0 |= 0x80;
    }
    if (arg1 & 0x400) {
        var_r0 |= 0x40;
    }
    if (arg1 & 0x800) {
        var_r0 |= 0x20;
    }
    if (arg1 & 0x200) {
        var_r0 |= 0x100;
    }
    if (arg1 & 0x10) {
        var_r0 |= 1;
    }
    if (arg1 & 0x80) {
        var_r0 |= 2;
    }
    if (arg1 & 0x40) {
        var_r0 |= 0x400;
    }
    if (arg1 & 0x20) {
        var_r0 |= 0x800;
    }
    if (arg1 & 0x100) {
        var_r0 |= 0x200;
    }
    return var_r0;
}
