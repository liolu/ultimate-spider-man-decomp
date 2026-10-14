/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202d454(void *, M2C_UNK);             /* extern */
void *func_02064fc8(M2C_UNK);                       /* extern */

void func_0202c6a0(void *arg0, void *arg1) {
    void *temp_r3;

    if (M2C_FIELD(arg0, void **, 0xE0) != NULL) {
        return;
    }
    M2C_FIELD(arg0, void **, 0xE0) = func_02064fc8(0xC);
    temp_r3                        = M2C_FIELD(arg0, void **, 0xE0);
    M2C_FIELD(temp_r3, s32 *, 0)   = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r3, s32 *, 4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(temp_r3, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 8);
    func_0202d454(arg0, 0xF);
}
