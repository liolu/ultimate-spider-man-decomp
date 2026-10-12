/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02086374();                            /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_02116d6c;

void *func_02054f58(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02116d6c;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_02086374();
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    func_0209ab0c(arg0);
    return arg0;
}
