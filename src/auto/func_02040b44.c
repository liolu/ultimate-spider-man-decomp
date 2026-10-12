/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02036a3c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02036a9c(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02036b68(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02040b44(void *arg0) {
    func_02036b68(arg0, 0x63, 0, 0);
    func_02036a9c(arg0, 0x63, 0);
    func_02036a3c(arg0, 0x63, 0);
    M2C_FIELD(arg0, s32 *, 0x194) = 0x20;
}
