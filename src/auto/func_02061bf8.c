/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02085d78(void *, M2C_UNK, s32);        /* extern */
extern M2C_UNK data_0211e7c4;

void func_02061bf8(void *arg0) {
    func_02085d78(M2C_FIELD(arg0, void **, 0xBC), 1, M2C_FIELD(&data_0211e7c4, s32 *, 8));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), s32 *, 0xB0) = 1;
}
