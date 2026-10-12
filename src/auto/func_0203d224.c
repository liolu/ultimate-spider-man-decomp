/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0213d440;
extern M2C_UNK data_0213d588;

s32 func_0203d224(void *arg0) {
    if ((M2C_FIELD(&data_0213d440, u8 *, 0x28) == 0) && (M2C_FIELD(arg0, u8 *, 0x10) != 0) && (M2C_FIELD(&data_0213d588, s32 *, 4) != 0)) {
        return 1;
    }
    return 0;
}
