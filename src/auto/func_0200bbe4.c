/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02052b20();                            /* extern */
extern M2C_UNK data_020efaf8;

M2C_UNK **func_0200bbe4(M2C_UNK **arg0) {
    *arg0 = &data_020efaf8;
    func_02052b20();
    return arg0;
}
