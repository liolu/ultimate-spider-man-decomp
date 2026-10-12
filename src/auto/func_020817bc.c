#include "m2c.h"

void func_020817bc(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, volatile u8 *, 0x274) == 1) {
        M2C_FIELD(arg0, volatile s32 *, 0x74) = (s32) (arg1 * 2);
        return;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x74) = arg1;
}
