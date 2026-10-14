/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206570c(s32);                             /* extern */
s32 func_02065d98(s32, M2C_UNK *);                  /* extern */
void *func_02066298(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0206bc94(s32, s32, s32);                   /* extern */
extern M2C_UNK data_02100ec0;
extern M2C_UNK data_02100ec8;

void func_02029748(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r5;

    if (arg2 != 0) {
        var_r5 = func_02065d98(M2C_FIELD(arg1, s32 *, 8), &data_02100ec0);
    } else {
        var_r5 = M2C_FIELD(func_02066298(arg1, &data_02100ec8, 0, 1), s32 *, 4);
    }
    temp_r4 =
        M2C_FIELD(func_02066298(M2C_FIELD(M2C_FIELD(arg1, void **, 0x10), void **, 0x10), &data_02100ec8, 0, 1), s32 *, 4);
    temp_r4_2 = func_0206bc94(0, temp_r4, func_0206570c(temp_r4));
    func_0206bc94(temp_r4_2, var_r5, func_0206570c(var_r5));
}
