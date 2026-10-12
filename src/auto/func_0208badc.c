/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208bcd4();                            /* extern */
M2C_UNK func_0208bcf8();                            /* extern */
M2C_UNK func_0208bd40();                            /* extern */

void func_0208badc(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_r1) {                              /* irregular */
    case 2:
        func_0208bd40(arg0);
        return;
    case 4:
        func_0208bcf8(arg0);
        return;
    case 6:
        func_0208bcd4(arg0);
        return;
    }
}
