/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020148b8(void *, M2C_UNK);             /* extern */
M2C_UNK func_020151e8(void *);                      /* extern */
M2C_UNK func_0202f64c(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_020f8758;

void *func_020147c8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f8758;
    func_020151e8(arg0 + 4);
    func_020148b8(arg0 + 0x28, 8);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    func_0202f64c(arg0);
    return arg0;
}
