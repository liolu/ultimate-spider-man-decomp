/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ff9b28(void *);                      /* extern */
M2C_UNK func_01ffa324(void *);                      /* extern */
M2C_UNK func_02001768(void *);                      /* extern */
M2C_UNK func_02001788(void *);                      /* extern */
s32 func_02001888(void *);                          /* extern */
s32 func_020018c8();                                /* extern */

void func_02001928(void *arg0) {
    if (func_020018c8() != 0) {
        func_02001788(arg0);
    } else if (func_02001888(arg0) != 0) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), s32 *, 0x18) != 0) {
            func_02001768(arg0);
        }
        func_01ff9b28(arg0);
    }
    func_01ffa324(arg0);
}
