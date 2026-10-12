/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffbf90(s32, s32 *, M2C_UNK);         /* extern */
M2C_UNK func_01ffc050(s32, s32 *);                  /* extern */
M2C_UNK func_01ffc080(s32, s32 *, M2C_UNK);         /* extern */
void *func_0202718c(s32);                           /* extern */

void func_02036a3c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 *temp_r4;

    temp_r4 = M2C_FIELD(func_0202718c(arg0 + 0x190), s32 **, 0xC);
    if (*temp_r4 == 0x800) {
        func_01ffc050(arg0, temp_r4);
        func_01ffbf90(arg0, temp_r4, 0);
        return;
    }
    func_01ffc080(arg0, temp_r4, arg2);
}
