/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb540();                            /* extern */
M2C_UNK func_01ffb558(M2C_UNK);                     /* extern */
void *func_02064fc8(M2C_UNK);                       /* extern */
extern void *data_0213e220;

void func_0202f8a8(s32 arg0, s32 arg1) {
    void *temp_r0;

    if (arg1 == 0) {
        return;
    }
    if (arg0 == 0) {
        return;
    }
    func_01ffb558(4);
    temp_r0 = func_02064fc8(0xC);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0)   = arg0;
        M2C_FIELD(temp_r0, s32 *, 4)   = arg1;
        M2C_FIELD(temp_r0, void **, 8) = NULL;
    }
    M2C_FIELD(temp_r0, void **, 8) = (void *) data_0213e220;
    data_0213e220                  = temp_r0;
    func_01ffb540();
}
