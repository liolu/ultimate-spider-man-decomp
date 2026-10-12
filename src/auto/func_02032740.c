/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031d00(void *);                      /* extern */
M2C_UNK func_0203264c(void *);                      /* extern */
s32 func_0205682c();                                /* extern */
s32 func_0205683c(s32, s32);                        /* extern */

void func_02032740(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x6F4);
    if (temp_r4 == NULL) {
        return;
    }
    if (func_0205683c(func_0205682c(), M2C_FIELD(temp_r4, s32 *, 0x14)) == 0) {
        return;
    }
    func_02031d00(arg0);
    func_0203264c(arg0);
}
