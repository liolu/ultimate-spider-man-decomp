/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

void func_0207d838(s32 arg0) {
    s32 var_r2;

    if (arg0 != 0) {
        var_r2 = 0;
    } else {
        var_r2 = 1;
    }
    *(u16 *) 0x04000304 = (*(u16 *) 0x04000304 & ~0x8000) | (var_r2 << 0xF);
}
