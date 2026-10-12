#include "m2c.h"

M2C_UNK func_020846d0(M2C_UNK *, u8);               /* extern */
extern M2C_UNK data_0214876c;

void func_0205c8f8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, volatile s32 *, 8) = arg1;
    func_020846d0(&data_0214876c, (u8) M2C_FIELD(arg0, volatile s32 *, 8));
}
