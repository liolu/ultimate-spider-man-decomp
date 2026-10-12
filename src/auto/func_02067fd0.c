/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204fcbc(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0204fe54(s32);                         /* extern */
M2C_UNK func_0204ffe4(s32, M2C_UNK);                /* extern */
extern s32 data_02146050;

void func_02067fd0(void *arg0) {
    func_0204ffe4(*M2C_FIELD(arg0, s32 **, 4), 1);
    func_0204fcbc(data_02146050, 0, 0);
    func_0204fe54(data_02146050);
}
