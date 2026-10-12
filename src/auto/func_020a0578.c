/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a05b4(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_020a0b28();                            /* extern */
extern M2C_UNK func_020a0b20;

s32 func_020a0578(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020a05b4(&func_020a0b20, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020a0b28();
    return sp0;
}
