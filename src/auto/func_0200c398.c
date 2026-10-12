/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02082168(M2C_UNK *, s32);                  /* extern */
extern M2C_UNK data_0213d440;
extern M2C_UNK data_02150bb8;

u8 func_0200c398(void *arg0) {
    s32 temp_r4;
    u8 var_r2;
    void *temp_r1;

    var_r2 = 0;
    if (M2C_FIELD(&data_02150bb8, u8 *, 1) == 0) {
        var_r2 = M2C_FIELD(&data_0213d440, u8 *, 0x38);
    } else {
        temp_r1 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_r1 != NULL) {
            temp_r4 = M2C_FIELD(temp_r1, s32 *, 0x2C);
            if (temp_r4 >= func_02082168(&data_02150bb8, M2C_FIELD(arg0, s32 *, 0x14))) {
                var_r2 = 1;
            } else {
                var_r2 = 0;
            }
        }
    }
    return var_r2;
}
