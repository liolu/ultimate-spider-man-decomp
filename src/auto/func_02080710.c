/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0208b6e4();                              /* extern */

void func_02080710(void *arg0) {
    s32 var_r0;
    void *temp_r0;

    temp_r0 = func_0208b6e4();
    if ((M2C_FIELD(temp_r0, u8 *, 0x78F) != 0) || (M2C_FIELD(temp_r0, u8 *, 0x78E) != 0)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 4) = 5;
    }
}
