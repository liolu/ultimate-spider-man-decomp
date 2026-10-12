#include "m2c.h"

M2C_UNK func_0208468c(M2C_UNK *, u8);               /* extern */
extern M2C_UNK data_0214876c;

void func_0205c920(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, volatile s32 *, 4) = arg1;
    func_0208468c(&data_0214876c, (u8) M2C_FIELD(arg0, volatile s32 *, 4));
}
