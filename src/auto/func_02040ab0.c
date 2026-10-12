/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028ba0();              /* extern */
M2C_UNK func_02036a3c();    /* extern */
M2C_UNK func_02036a9c();    /* extern */
M2C_UNK func_02036b68(); /* extern */
extern M2C_UNK data_020b810c;

void func_02040ab0(void *arg0) {
    func_02028ba0(arg0 + 0x1C8, &data_020b810c);
    func_02036b68(arg0, 0x64, 0, 0);
    func_02036a9c(arg0, 0x64, 0);
    func_02036a3c(arg0, 0x64, 0);
    M2C_FIELD(arg0, s32 *, 0x194) = 0x21;
}
