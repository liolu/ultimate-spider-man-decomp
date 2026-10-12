/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02061a00();                                /* extern */
M2C_UNK func_0206219c(void *);                      /* extern */
M2C_UNK func_020623b0(void *);                      /* extern */

s32 func_02061e04(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x210) == 0) {
        return 0;
    }
    temp_r0 = func_02061a00(arg0);
    if (temp_r0 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x204) != M2C_FIELD(arg0, s32 *, 0x21C)) {
            func_0206219c(arg0);
        } else {
            func_020623b0(arg0);
        }
    }
    return temp_r0;
}
