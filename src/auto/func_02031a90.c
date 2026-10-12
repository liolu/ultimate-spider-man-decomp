/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02046fa4(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02143e44;

s32 func_02031a90(void) {
    if ((func_02046fa4(&data_02143e44) != 0) || (M2C_FIELD(&data_02143e44, s32 *, 4) == 0x10)) {
        return 1;
    }
    return 0;
}
