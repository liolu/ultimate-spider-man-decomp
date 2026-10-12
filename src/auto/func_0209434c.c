/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094198();                            /* extern */
s32 func_0209560c();                                /* extern */
M2C_UNK func_02095620(s32);                         /* extern */
extern void **data_02151bcc;

void func_0209434c(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_0209560c();
    temp_r2 = *data_02151bcc;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_02094198();
    func_02095620(temp_r4);
}
