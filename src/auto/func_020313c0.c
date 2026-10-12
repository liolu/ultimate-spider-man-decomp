/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020308e4();                            /* extern */
M2C_UNK func_02031128();                            /* extern */
M2C_UNK func_0203121c();                            /* extern */
s32 func_02031404();                                /* extern */
M2C_UNK func_0205ca5c();                            /* extern */

void func_020313c0(void) {
    if (func_02031404() == 0) {
        return;
    }
    do {
        func_0203121c();
        func_02031128();
        func_0205ca5c();
        func_020308e4();
    } while (func_02031404() != 0);
}
