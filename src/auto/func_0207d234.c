/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02086bc8();                                /* extern */
M2C_UNK func_02086bd8(s32, void *);                 /* extern */
s32 func_02086cb0();                                /* extern */
s32 func_02086d00(s32, s32);                        /* extern */

void func_0207d234(void *arg0) {
    void *temp_r4;

    func_02086bd8(func_02086bc8(), arg0);
    temp_r4                      = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(temp_r4, s32 *, 8) = func_02086d00(func_02086cb0(), M2C_FIELD(temp_r4, s32 *, 0xC));
}
