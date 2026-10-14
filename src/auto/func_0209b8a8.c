/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209560c(void);
void func_02095620(M2C_UNK);

extern s32 data_02152ae4;
extern s32 data_02152ae8;

void func_0209b8a8(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0209560c();
    if (data_02152ae8 == 0) {
        data_02152ae8 = arg0;
        data_02152ae4 = arg0;
    } else {
        *(M2C_UNK *) data_02152ae8 = arg0;
        data_02152ae8              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_02095620(temp_r0);
}
