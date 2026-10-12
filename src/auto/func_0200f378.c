/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f22c(M2C_UNK, M2C_UNK);            /* extern */

void func_0200f378(M2C_UNK arg0, void *arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x21) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
    case 0:
        func_0200f22c(arg0, 1);
        return;
    case 1:
        func_0200f22c(arg0, 0);
        return;
    }
}
