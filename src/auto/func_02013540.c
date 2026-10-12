/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003830();                            /* extern */
M2C_UNK func_02012760();                            /* extern */
M2C_UNK func_02012998();                            /* extern */

void func_02013540(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1B8);
    switch (temp_r1) {                              /* irregular */
    case 36:
        func_02012760(arg0);
        return;
    case 37:
        func_02012998(arg0);
        return;
    case 38:
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x1E0)(arg0);
        return;
    default:
        func_02003830(arg0);
        return;
    }
}
