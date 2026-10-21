/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02065d60(s32);
void func_0209ab0c(s32);

void func_02065c18(s32 arg0) {
    u32 temp_r5;
    u32 temp_r6;

    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return;
    }
    do {
        temp_r6 = M2C_FIELD((void *) M2C_FIELD(arg0, s32 *, 0x14), s32 *, 0x14);
        M2C_FIELD((void *) M2C_FIELD(arg0, s32 *, 0x14), s32 *, 0x14) = 0;
        temp_r5                                                       = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_r5 != 0) {
            func_02065d60(temp_r5);
            func_0209ab0c(temp_r5);
        }
        M2C_FIELD(arg0, s32 *, 0x14) = temp_r6;
    } while (M2C_FIELD(arg0, s32 *, 0x14) != 0);
}
