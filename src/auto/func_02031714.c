/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202ef10(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0207beac(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_021025d0;
extern M2C_UNK data_02143c1c;
extern M2C_UNK data_0214876c;

void *func_02031714(void *arg0) {
    s32 temp_r1;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021025d0;
    func_0202ef10(&data_02143c1c, arg0);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x14);
    if ((temp_r1 != -1) && (temp_r1 != -2)) {
        func_0207beac(&data_0214876c);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
