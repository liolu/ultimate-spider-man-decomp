/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020027ec(void **, s32, M2C_UNK);       /* extern */

void func_020028cc(void **arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        M2C_FIELD(*arg0, M2C_UNK (**)(), 0xD0)(arg0);
        return;
    case 1:
        func_020027ec(arg0, arg1, 1);
        return;
    }
}
