/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206a3e0();      /* extern */
s32 *func_0206afd8();               /* extern */
extern s32 data_02147af4;

s32 func_0206a398(M2C_UNK arg0, M2C_UNK arg1) {
    s32 *temp_r4;

    temp_r4 = func_0206afd8(arg0);
    func_0206a3e0(arg0, data_02147af4, *temp_r4, M2C_FIELD(func_0206afd8(arg0, arg1), s32 *, 4));
    return 0;
}
