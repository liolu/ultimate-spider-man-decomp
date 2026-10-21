/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void **data_02150c68;

void func_0208ba3c(void) {
    if (data_02150c68 != NULL) {
        M2C_FIELD(*data_02150c68, M2C_UNK(**)(), 4)(data_02150c68);
    }
    data_02150c68 = NULL;
}
