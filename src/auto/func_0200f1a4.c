/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb0f0(void *, s32);                 /* extern */
void *func_02018dbc(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_020b368c;

void func_0200f1a4(s32 arg0, M2C_UNK arg1, s32 *arg2) {
    s32 temp_r4;
    void *temp_r0;

    if (arg0 == 0) {
        return;
    }
    temp_r4 = *((M2C_UNK *) ((s8 *) &data_020b368c + (arg0 * 4)));
    temp_r0 = func_02018dbc(temp_r4, arg1, 0, 0, 0, 0, 0);
    if (temp_r0 == NULL) {
        return;
    }
    if (arg2 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) *arg2;
    }
    func_01ffb0f0(temp_r0, temp_r4);
}
