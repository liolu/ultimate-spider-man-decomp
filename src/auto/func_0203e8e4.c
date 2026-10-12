/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02034460();                                /* extern */
M2C_UNK func_02036b68(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0203e8e4(void *arg0) {
    if (func_02034460() != 0) {
        func_02036b68(arg0, 0x9D, 0, 0);
    } else {
        func_02036b68(arg0, 0x9C, 0, 0);
    }
    M2C_FIELD(arg0, s32 *, 0x194) = 0x2D;
}
