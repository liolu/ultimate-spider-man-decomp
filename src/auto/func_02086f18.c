/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020870d0();                              /* extern */

void func_02086f18(s32 arg0, void *arg1) {
    void *temp_r0;

    temp_r0 = func_020870d0();
    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
}
