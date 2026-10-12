#include "m2c.h"

void func_02063d78(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, volatile s32 *, 4);
    if (temp_r3 != 0x7FFFFFFF) {
        M2C_FIELD(arg0, volatile s32 *, 0x25C) = (s32) (temp_r3 - M2C_FIELD(arg0, volatile s32 *, 0x4BC));
        if ((s32) M2C_FIELD(arg0, volatile s32 *, 0x25C) < 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x25C) = 0x7FFFFFFF;
        }
    } else {
        M2C_FIELD(arg0, volatile s32 *, 0x25C) = 0x7FFFFFFF;
    }
    temp_r3_2 = M2C_FIELD(arg0, volatile s32 *, 8);
    if (temp_r3_2 != 0x7FFFFFFF) {
        M2C_FIELD(arg0, volatile s32 *, 0x260) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x4BC) - temp_r3_2);
        if ((s32) M2C_FIELD(arg0, volatile s32 *, 0x260) < 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x260) = 0x7FFFFFFF;
        }
        return;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x260) = 0x7FFFFFFF;
}
