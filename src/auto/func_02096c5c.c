/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0209560c(void);
void func_02095620(M2C_UNK);
M2C_UNK func_02096da4(void);

extern M2C_UNK data_02151f8c;

s32 func_02096c5c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_0209560c();
    if (M2C_FIELD(&data_02151f8c, s32 *, 0) != 0) {
        func_02095620(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_02151f8c, s32 *, 0) = 1;
    func_02095620(temp_r0);
    M2C_FIELD(&data_02151f8c, s32 *, 0x14) = 1;
    M2C_FIELD(&data_02151f8c, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02151f8c, s32 *, 8)    = arg0;
    M2C_FIELD(&data_02151f8c, s32 *, 4)    = arg1;
    M2C_FIELD(&data_02151f8c, s32 *, 0x10) = arg2;
    if (func_02096da4() != 0) {
        return 0;
    }
    return 3;
}
