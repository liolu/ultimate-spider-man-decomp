/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02077f60(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    if (arg1 < temp_r2) {
        return 0;
    }
    if (arg1 == temp_r2) {
        return 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (arg1 < temp_r0) {
        return 2;
    }
    if (arg1 == temp_r0) {
        return 3;
    }
    return 4;
}
