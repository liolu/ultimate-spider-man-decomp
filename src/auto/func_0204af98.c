/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204e164(void *);                      /* extern */
extern M2C_UNK data_02107c8c;

void *func_0204af98(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02107c8c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x3C4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0204e164(arg0);
    return arg0;
}
