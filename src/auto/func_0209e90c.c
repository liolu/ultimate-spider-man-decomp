/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094cec(M2C_UNK *);                   /* extern */
M2C_UNK func_02094d60(M2C_UNK *);                   /* extern */
M2C_UNK func_0209d1b8(void *);                      /* extern */
M2C_UNK func_0209eb7c(void *);                      /* extern */
extern M2C_UNK data_02155164;

void func_0209e90c(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != M2C_FIELD(arg2, s32 *, 0x128)) {
        return;
    }
    func_02094d60(&data_02155164);
    func_0209eb7c(arg2);
    M2C_FIELD(arg2, s32 *, 0x128) = 0;
    M2C_FIELD(arg2, s32 *, 0x12C) = 0;
    M2C_FIELD(arg2, s8 *, 0x120)  = 0;
    if ((s32) M2C_FIELD(arg2, s32 *, 0x11C) > 0) {
        func_0209d1b8(arg2);
        M2C_FIELD(arg2, s32 *, 0x11C) = 0;
    }
    func_02094cec(&data_02155164);
}
