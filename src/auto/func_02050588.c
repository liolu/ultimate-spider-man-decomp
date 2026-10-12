/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020135b0();                            /* extern */
extern M2C_UNK data_0210279c;
extern M2C_UNK data_021165b0;

M2C_UNK **func_02050588(M2C_UNK **arg0) {
    *arg0 = &data_021165b0;
    *arg0 = &data_0210279c;
    func_020135b0(arg0);
    return arg0;
}
