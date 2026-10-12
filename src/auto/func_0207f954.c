/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201ff80(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207f858(void *);                      /* extern */
M2C_UNK func_0207f8a0(void *);                      /* extern */
void *func_0208b6e4();                              /* extern */

void func_0207f954(void *arg0) {
    M2C_UNK var_r0;

    if (M2C_FIELD(func_0208b6e4(), u16 *, 0x4FE) == 0) {
        func_0207f858(arg0);
        func_0207f8a0(arg0);
    } else {
        func_0207f8a0(arg0);
        func_0207f858(arg0);
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0x20) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    func_0201ff80(var_r0, 0, 0, 0, 0);
}
