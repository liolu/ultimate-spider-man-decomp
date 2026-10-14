/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_02150c38;

void func_02088850(void *arg0, s32 arg1) {
    if (data_02150c38 != 0) {
        return;
    }
    if (M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x58C) == NULL) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x580) = arg1;
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x58C)(arg0 + 0x580);
}
