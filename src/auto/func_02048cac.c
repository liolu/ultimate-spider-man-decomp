/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9acc(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02005c18();                            /* extern */
extern M2C_UNK data_020b9140;

void func_02048cac(void *arg0) {
    s32 temp_r0;

    func_02005c18();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x180);
    if ((temp_r0 != 6) && (temp_r0 != 0x3D) && (temp_r0 != 0x3E)) {
        return;
    }
    func_01ff9acc(arg0, &data_020b9140);
}
