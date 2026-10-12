/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02026a7c(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern s32 data_0213d440;

void func_02036308(void *arg0, M2C_UNK arg1) {
    func_02026a7c(&data_0213d440, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x218) = (s32) data_0213d440;
}
