/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208a7d4();                            /* extern */
void *func_0208b6e4();                              /* extern */

void func_0208bcf8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(func_0208b6e4(), s32 *, 8);
    switch (temp_r0) {                              /* irregular */
    case 1:
        return;
    case 8:
        M2C_FIELD(arg0, s32 *, 8) = 5;
        return;
    case 3:
        func_0208b6e4();
        func_0208a7d4();
        return;
    }
}
