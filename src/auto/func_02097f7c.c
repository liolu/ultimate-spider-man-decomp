/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094e68();                /* extern */
s32 func_02097170();       /* extern */
void *func_02097290();                              /* extern */
s32 func_020972a0();                /* extern */
M2C_UNK func_020973f4();            /* extern */

s32 func_02097f7c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_02097290();
    temp_r0 = func_02097170(2, 9, 0xA);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02094e68(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0xC) == 0) {
        return 3;
    }
    func_020973f4(0x10, arg0);
    var_r0 = func_020972a0(0x10, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
