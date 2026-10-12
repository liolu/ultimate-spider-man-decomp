/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204291c();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0211c59c;

M2C_UNK **func_02081cd0(M2C_UNK **arg0) {
    *arg0 = &data_0211c59c;
    func_0204291c();
    func_0209ab0c(arg0);
    return arg0;
}
