/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02056020();                            /* extern */
M2C_UNK func_0206f8f4(void *);                      /* extern */
extern s32 data_02148390;

void func_020563a8(void *arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0xC8);
    switch (temp_r1) {
        case 0:
        case 2:
        case 3:
            break;
        default:
            break;
        case 1:
            func_02056020(arg0);
            break;
    }
    data_02148390 = M2C_FIELD(arg0, s32 *, 0xE8);
    func_0206f8f4(arg0);
    data_02148390 = 0;
}
