/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02004830(void *, M2C_UNK);             /* extern */
M2C_UNK func_020855ec(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020325f0(void *arg0) {
    func_020855ec(M2C_FIELD(arg0, s32 *, 0xBC), 1, 0x28);
    func_02004830(arg0, 0x22);
}
