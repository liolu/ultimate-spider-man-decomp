/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209560c(void);
void func_02095620(M2C_UNK);

extern s32 data_02152ae0;
extern s32 data_02152ae4;
extern s32 data_02152afc;

s32 func_0209b618(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0209560c();
    if (data_02152ae4 == 0) {
        var_r4 = data_02152ae0;
    } else {
        var_r4 = data_02152afc;
    }
    func_02095620(temp_r0);
    return var_r4;
}
