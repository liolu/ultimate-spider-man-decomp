/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020096d4();                                /* extern */

s32 func_02050e04(void *arg0, void *arg1) {
    s32 temp_ip;
    s32 temp_lr;
    s32 var_r2;
    s32 var_r4;

    temp_lr = M2C_FIELD(arg1, s32 *, 4);
    var_r2  = 0;
    var_r4  = 0;
    if (temp_lr != 0x43) {
        temp_ip = M2C_FIELD(arg0, s32 *, 0x180);
        if (temp_ip <= 0x196) {
            if (temp_ip >= 0x191) {
                if ((temp_ip != 0x191) && (temp_ip != 0x192) && (temp_ip != 0x196)) {
                    goto block_17;
                }
                goto block_13;
            }
            if (temp_ip != 0x41) {
                goto block_17;
            }
            goto block_13;
        }
        if (temp_ip <= 0x1AF) {
            if (temp_ip != 0x1AF) {
                goto block_17;
            }
            goto block_13;
        }
        if (temp_ip == 0x1B0) {
        block_13:
            var_r2 = 0;
            if (temp_lr == 0xB) {
                var_r4 = 1;
            } else {
                var_r4 = 0;
            }
        } else {
        block_17:
            var_r2 = func_020096d4(arg0, arg1);
        }
    }
    if ((var_r2 != 0) || (var_r4 != 0)) {
        return 1;
    }
    return 0;
}
