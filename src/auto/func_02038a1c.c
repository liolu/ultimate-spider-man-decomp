/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e54();                 /* extern */
s32 func_02082e38();                    /* extern */

void func_02038a1c(void *arg0, M2C_UNK arg1) {
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
    func_02000e54(temp_r4 + 0x1C, func_02082e38(M2C_FIELD(temp_r4, s32 *, 0x2C)));
    temp_r4_2 = M2C_FIELD(arg0, void **, 0xA4);
    func_02000e54(temp_r4_2 + 4, func_02082e38(M2C_FIELD(temp_r4_2, s32 *, 0x14), arg1));
}
