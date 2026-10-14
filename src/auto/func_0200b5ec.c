/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
extern M2C_UNK data_020ef9e0;
extern M2C_UNK data_020efa10;
extern s32 data_0213b110;

M2C_UNK **func_0200b5ec(M2C_UNK **arg0) {
    *arg0 = &data_020ef9e0;
    func_0202f630();
    data_0213b110 = 0;
    *arg0         = &data_020efa10;
    return arg0;
}
