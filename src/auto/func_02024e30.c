/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02024f1c();                            /* extern */
M2C_UNK func_02054c48(s32, M2C_UNK);                /* extern */

void func_02024e30(void *arg0) {
    func_02024f1c();
    func_02054c48(M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x20), 0);
    M2C_FIELD(arg0, s32 *, 4) = 1;
}
