/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014908(void *);                      /* extern */
M2C_UNK func_0201519c(void *);                      /* extern */
M2C_UNK func_0202f630(void *);                      /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8758;

void *func_02014708(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f8758;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0202f630(arg0);
    func_02014908(arg0 + 0x28);
    func_0201519c(arg0 + 4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    func_0209ab0c(arg0);
    return arg0;
}
