/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02065730();                                /* extern */
M2C_UNK func_0207c284(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020ecc7c;
extern M2C_UNK data_020ecc88;
extern M2C_UNK data_0214876c;

void func_020050cc(void) {
    if (func_02065730() & 1) {
        func_0207c284(&data_0214876c, &data_020ecc7c, 0, 0, 0);
        return;
    }
    func_0207c284(&data_0214876c, &data_020ecc88, 0, 0, 0);
}
