/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffca08(void *);                      /* extern */

void func_02047c18(void *arg0) {
    void **temp_r0;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x17C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x10)(temp_r0);
    }
    func_01ffca08(arg0);
}
