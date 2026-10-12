/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02064fbc(M2C_UNK);                        /* extern */
M2C_UNK func_02089894(M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0209ab00(s32 *);                       /* extern */

void func_020887e4(M2C_UNK arg0) {
    s32 *temp_r0;

    temp_r0 = func_02064fbc(4);
    *temp_r0 = 1;
    func_02089894(arg0, temp_r0, 4, 0, 0xD);
    func_0209ab00(temp_r0);
}
