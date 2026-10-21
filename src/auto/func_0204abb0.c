/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9b28(void *);                      /* extern */
M2C_UNK func_01ffa324(void *);                      /* extern */
s32 func_0204ebbc(void **);                         /* extern */

void func_0204abb0(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xBC);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 8)(temp_r0);
        if (func_0204ebbc(M2C_FIELD(arg0, void ***, 0xBC)) == 0) {
            func_01ff9b28(arg0);
        }
    }
    func_01ffa324(arg0);
}
