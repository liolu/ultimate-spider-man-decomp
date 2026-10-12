/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064fd4(); /* extern */
extern M2C_UNK data_020f90e0;
extern M2C_UNK data_020f90f4;

void func_0202766c(M2C_UNK arg0, void *arg1, s32 arg2, s32 arg3) {
    if (arg3 != 0) {
        func_02064fd4(arg0, &data_020f90e0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), arg2);
        return;
    }
    func_02064fd4(arg0, &data_020f90f4, M2C_FIELD(arg1, s32 *, 0), arg2);
}
