/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020255bc();                            /* extern */
extern M2C_UNK data_0213d440;

void func_020255fc(void *arg0) {
    s32 temp_r2;

    temp_r2 = *((M2C_UNK *)((s8 *)&data_0213d440 + (M2C_FIELD(arg0, s32 *, 0x128) * 4)));
    if (temp_r2 == M2C_FIELD(arg0, s32 *, 0x130)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x130) = temp_r2;
    func_020255bc();
}
