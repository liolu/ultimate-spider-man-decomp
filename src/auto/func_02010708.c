/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02006668(void *, void *);                  /* extern */
M2C_UNK func_02010454(void *);                      /* extern */
M2C_UNK func_020106a4();                            /* extern */

s32 func_02010708(void *arg0, void *arg1) {
    s32 temp_r0;
    s32 var_r4;

    func_020106a4();
    if ((M2C_FIELD(arg0, s32 *, 0x778) == 1) && (temp_r0 = M2C_FIELD(arg1, s32 *, 4), (temp_r0 != 0x44)) && (temp_r0 != 0x3C)) {
        var_r4 = 0;
        func_02010454(arg0);
    } else {
        var_r4 = func_02006668(arg0, arg1);
    }
    return var_r4;
}
