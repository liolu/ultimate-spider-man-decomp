#include "m2c.h"

void func_020a0178(void **arg0, void *arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg1, void **, 8) = (void *) *arg0;
        *arg0 = arg1;
    }
}
