/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209ab0c(void *);                      /* extern */

void *func_02065de8(void *arg0) {
    void *temp_r4;

    func_0209ab0c(M2C_FIELD(arg0, void **, 0));
    func_0209ab0c(M2C_FIELD(arg0, void **, 4));
    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 != NULL) {
        func_02065de8(temp_r4);
        func_0209ab0c(temp_r4);
    }
    return arg0;
}
