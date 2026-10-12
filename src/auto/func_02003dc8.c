/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02018cfc(s32);                            /* extern */
extern s32 data_0213b6e0;

void func_02003dc8(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (data_0213b6e0 + arg1);
        return;
    }
    *func_02018cfc(temp_r2) = data_0213b6e0 + arg1;
}
