/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_0209560c(void);
void func_02095620(M2C_UNK);

extern s32 data_02155f64;

s32 func_020a0b40(void) {
    s32 temp_r0;

    temp_r0 = func_0209560c();
    if (data_02155f64 != 0) {
        func_02095620(temp_r0);
        return 0;
    }
    data_02155f64 = 1;
    func_02095620(temp_r0);
    return 1;
}
