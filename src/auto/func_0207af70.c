#include "m2c.h"

extern M2C_UNK data_0214868c;

s32 func_0207af70(void) {
    if ((M2C_FIELD(&data_0214868c, s32 *, 0x14) == 0x18) && (M2C_FIELD(&data_0214868c, u8 *, 0x42) != 0)) {
        return 1;
    }
    return 0;
}
