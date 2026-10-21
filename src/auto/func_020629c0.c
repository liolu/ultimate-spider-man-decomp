/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9b28();                            /* extern */

void func_020629c0(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x164);
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x168) != 0) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 0x164) = NULL;
        return;
    }
    func_01ff9b28();
}
