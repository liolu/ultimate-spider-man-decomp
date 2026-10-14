/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f4a0();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0211cc5c;
extern s32 data_02150c30;

M2C_UNK **func_0208771c(M2C_UNK **arg0) {
    *arg0         = &data_0211cc5c;
    data_02150c30 = 0;
    func_0202f4a0(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
