/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014af0();                            /* extern */

void func_02014d18(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        func_02014af0(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 4);
}
