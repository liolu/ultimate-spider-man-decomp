/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffd554(void *);                      /* extern */
M2C_UNK func_0200f4b0(void *, s32);                 /* extern */
M2C_UNK func_0200f518();                            /* extern */

void func_0200f438(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x184) == 0) {
        func_0200f518();
    }
    if (M2C_FIELD(arg0, s32 *, 0x180) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x17C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 8)(temp_r0);
    }
    func_0200f4b0(arg0 + 0x4C, M2C_FIELD(arg0, s32 *, 0x184));
    func_01ffd554(arg0);
}
