/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffaeb4();                                /* extern */
M2C_UNK func_02010454(void *);                      /* extern */
M2C_UNK func_020106a4(void *);                      /* extern */

void func_0201049c(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_01ffaeb4();
    if ((M2C_FIELD(arg0, s32 *, 0x778) == 1) && (arg1 == temp_r0)) {
        func_02010454(arg0);
    }
    func_020106a4(arg0);
}
