/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02015054(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f88bc;

void *func_0201519c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f88bc;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) > 0) {
        do {
            func_02015054(arg0);
        } while ((s32) M2C_FIELD(arg0, s32 *, 0x18) > 0);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
