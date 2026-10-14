/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffc080(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_01ffc0d4(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_02036b68(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_020b5320;

void func_0203de8c(void *arg0) {
    func_02036b68(arg0, 0x83, 1, 0);
    func_01ffc0d4(arg0, &data_020b5320, 0);
    func_01ffc080(arg0, &data_020b5320, 0);
    M2C_FIELD(arg0, s32 *, 0x30)  = 0;
    M2C_FIELD(arg0, s32 *, 0x194) = 0x2F;
}
