/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202e26c();                            /* extern */
extern M2C_UNK data_02101724;

void *func_0202e3c0(void *arg0, s32 arg1) {
    func_0202e26c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02101724;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x7FFFFFFF;
    return arg0;
}
