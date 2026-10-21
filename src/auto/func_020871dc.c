/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211cc04;
extern M2C_UNK data_0211cc30;

void *func_020871dc(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211cc30;
    if (M2C_FIELD(arg0, u8 *, 0x18) != 0) {
        temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211cc04;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    func_0209ab0c(arg0);
    return arg0;
}
