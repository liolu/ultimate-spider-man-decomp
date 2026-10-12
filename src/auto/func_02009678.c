/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02058724(void *, M2C_UNK);             /* extern */

void func_02009678(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x6F4) != 0) {
        func_02058724(arg0, 1);
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x108)(arg0);
}
