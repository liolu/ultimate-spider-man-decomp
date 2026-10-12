/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001c0c(s32);                             /* extern */
M2C_UNK func_020579cc(s32);                         /* extern */
M2C_UNK func_0205b58c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0205f530(s32);                         /* extern */
s32 func_0205f550(s32, s32);                        /* extern */
extern s32 data_021183c0;

void func_0205eb98(s32 arg0) {
    if (func_0205f550(arg0 + 0x9C0, data_021183c0) > 0) {
        if (func_02001c0c(arg0) != 0) {
            return;
        }
        func_020579cc(arg0);
        return;
    }
    func_0205b58c(arg0, 0, 0);
    func_0205f530(arg0 + 0x9C0);
}
