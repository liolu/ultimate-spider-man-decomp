/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208fa84(void *);                      /* extern */
M2C_UNK func_02094cec(M2C_UNK *);                   /* extern */
M2C_UNK func_02094d60(M2C_UNK *);                   /* extern */
M2C_UNK func_0209cf5c(void *);                      /* extern */
M2C_UNK func_0209eadc(void *);                      /* extern */
extern M2C_UNK data_02155164;

void func_0209eb7c(void *arg0) {
    func_02094d60(&data_02155164);
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1E) >> 0x1F) != 0) {
        func_0209cf5c(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x10C) << 0x1F) >> 0x1F) != 0) {
        func_0208fa84(arg0 + 0x5C);
    }
    func_0209eadc(arg0);
    func_02094cec(&data_02155164);
}
