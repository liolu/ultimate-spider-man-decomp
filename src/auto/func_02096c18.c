/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020965d0();                            /* extern */
s32 func_02096c5c(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_02151f8c;
extern M2C_UNK func_020965e8;

s32 func_02096c18(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_02096c5c(arg0, &func_020965e8, 0);
    M2C_FIELD(&data_02151f8c, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_020965d0();
    }
    return M2C_FIELD(&data_02151f8c, s32 *, 0x20);
}
