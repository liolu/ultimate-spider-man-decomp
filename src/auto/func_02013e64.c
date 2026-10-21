/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02013dcc(void *);                      /* extern */
M2C_UNK func_0201481c();                            /* extern */

void func_02013e64(void *arg0, s32 arg1) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0 == NULL) {
        return;
    }
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    M2C_FIELD(arg0, void ***, 0x20) = NULL;
    func_0201481c();
    if (arg1 == 0) {
        return;
    }
    func_02013dcc(arg0);
}
