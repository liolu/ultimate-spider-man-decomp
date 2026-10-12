/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02084d9c(void *arg0, s32 arg1) {
    s32 var_ip;
    s32 var_r0;
    s32 var_r0_2;
    void *var_r3;

    var_r3 = arg0;
    var_ip = 0;
loop_1:
    if (arg1 == M2C_FIELD(var_r3, s32 *, 0x160)) {
        if (M2C_FIELD(((var_ip * 0x18) + (s32) arg0), s32 *, 0x15C) != 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    var_ip += 1;
    var_r3 += 0x18;
    if (var_ip >= 4) {
        return 0;
    }
    goto loop_1;
}
