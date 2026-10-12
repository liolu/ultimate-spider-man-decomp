/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202880c();                            /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020ecf90;

M2C_UNK **func_020087ac(M2C_UNK **arg0) {
    *arg0 = &data_020ecf90;
    func_0202880c();
    func_0209ab0c(arg0);
    return arg0;
}
