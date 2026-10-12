/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203d670();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0211c3f0;

M2C_UNK **func_0208163c(M2C_UNK **arg0) {
    *arg0 = &data_0211c3f0;
    func_0203d670();
    func_0209ab0c(arg0);
    return arg0;
}
