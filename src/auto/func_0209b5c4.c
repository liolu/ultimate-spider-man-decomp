/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_0209560c(void);
void func_02095620(M2C_UNK);

extern u32 data_02152ae0;

s32 func_0209b5c4(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0209560c();
    if ((u32) arg0 > (u32) data_02152ae0) {
        if ((u32) (arg0 - data_02152ae0) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_02152ae0 - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02095620(temp_r0);
    return var_r4;
}
