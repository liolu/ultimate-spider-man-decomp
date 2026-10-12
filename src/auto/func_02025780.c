/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02046e94(M2C_UNK *);                     /* extern */
extern s32 data_020f8f40;
extern M2C_UNK data_02143e44;

s32 func_02025780(void) {
    s32 var_r0;

    var_r0 = M2C_FIELD(func_02046e94(&data_02143e44), s32 *, 0x78);
    if (var_r0 == 0) {
        var_r0 = data_020f8f40;
    }
    return var_r0;
}
