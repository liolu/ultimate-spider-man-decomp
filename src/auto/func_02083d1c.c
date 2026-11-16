/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_0209ab0c(s32);                         /* extern */
extern M2C_UNK data_02150c08;

void func_02083d1c(void) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_0209ab0c(*((M2C_UNK *) ((s8 *) &data_02150c08 + (var_r6 * 4))));
        *((M2C_UNK *) ((s8 *) &data_02150c08 + (var_r6 * 4))) = 0;
        var_r6 += 1;
    } while (var_r6 < 4);
}
