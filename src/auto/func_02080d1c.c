/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208bc6c();                            /* extern */
void *func_0208bfbc();                              /* extern */

void func_02080d1c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(func_0208bfbc(), s32 *, 8);
    switch (temp_r0) {                              /* irregular */
        case 3:
            M2C_FIELD(arg0, s32 *, 4) = 5;
            return;
        case 1:
            func_0208bfbc();
            func_0208bc6c();
            return;
    }
}
