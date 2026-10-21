/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void **data_02146048;

void func_0204eb40(void) {
    if (data_02146048 != NULL) {
        M2C_FIELD(*data_02146048, M2C_UNK(**)(), 4)(data_02146048);
    }
    data_02146048 = NULL;
}
