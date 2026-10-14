/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff8000();                            /* extern */

void func_02062b0c(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, s32 *, 0) == 0x15) && (M2C_FIELD(arg1, s32 *, 4) == 0) &&
        (M2C_FIELD(arg1, s32 *, 8) == M2C_FIELD(arg0, s32 *, 0x164))) {
        M2C_FIELD(arg0, s32 *, 0x164) = 0;
    }
    func_01ff8000(arg0, arg1);
}
