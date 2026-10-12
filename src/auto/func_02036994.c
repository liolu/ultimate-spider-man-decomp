/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffbf90(M2C_UNK, s32 *, M2C_UNK);     /* extern */
M2C_UNK func_01ffc050(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_01ffc080(M2C_UNK, s32 *);              /* extern */

void func_02036994(M2C_UNK arg0, void *arg1) {
    s32 *temp_r4;

    temp_r4 = M2C_FIELD(arg1, s32 **, 0xC);
    if (*temp_r4 == 0x800) {
        func_01ffc050(arg0, temp_r4);
        func_01ffbf90(arg0, temp_r4, 0);
        return;
    }
    func_01ffc080(arg0, temp_r4);
}
