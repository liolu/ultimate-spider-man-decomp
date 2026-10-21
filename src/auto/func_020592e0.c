/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630(void *);                      /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_02104af8;
extern M2C_UNK data_0211811c;

void *func_020592e0(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211811c;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x4C);
    if ((temp_r0 != NULL) && (temp_r0 != NULL)) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x49) != 0) {
        func_0202f630(arg0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_02104af8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0)    = &data_020efa10;
    func_0209ab0c(arg0);
    return arg0;
}
