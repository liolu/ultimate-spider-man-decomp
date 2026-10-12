/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffca08(void *);                      /* extern */
s32 func_02001238(u32);                             /* extern */
M2C_UNK func_0202efb4(s32, void *);                 /* extern */

void func_02001024(void *arg0) {
    u32 temp_r0;

    if (((u32) (M2C_FIELD(arg0, u8 *, 0x1C) << 0x1F) >> 0x1F) == 0) {
        temp_r0 = (u32) (M2C_FIELD(arg0, u8 *, 0x1D) << 0x1A) >> 0x1F;
        if (temp_r0 != 0) {
            func_0202efb4(func_02001238(temp_r0), arg0);
        }
    }
    func_01ffca08(arg0);
}
