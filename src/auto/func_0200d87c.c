/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f518(void *);                      /* extern */
M2C_UNK func_0204f638(void *);                      /* extern */
M2C_UNK func_0205c8f8(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0205c920(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020f0068;
extern M2C_UNK data_02146128;

void *func_0200d87c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f0068;
    if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
        func_0205c920(&data_02146128, M2C_FIELD(arg0, s32 *, 0x44));
        func_0205c8f8(&data_02146128, M2C_FIELD(arg0, s32 *, 0x48));
    }
    func_0202f518(arg0 + 0x2C);
    func_0204f638(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
