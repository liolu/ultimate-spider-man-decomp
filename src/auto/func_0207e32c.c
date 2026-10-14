/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f5f0(M2C_UNK *);                   /* extern */
M2C_UNK func_0207e2e0(M2C_UNK, void *);             /* extern */
s32 func_020820b8(M2C_UNK *);                       /* extern */
s32 func_02082388(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020d93b8;
extern M2C_UNK data_02150bb8;

void func_0207e32c(M2C_UNK arg0, void *arg1) {
    s32 temp_r2;

    if (M2C_FIELD(arg1, s32 *, 0) != 4) {
        return;
    }
    temp_r2 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r2) {                              /* irregular */
        case 1:
        case 2:
            func_0207e2e0(arg0, arg1 + 4);
            return;
        case 3:
            if (func_02082388(&data_02150bb8) != 2) {
                return;
            }
            if (func_020820b8(&data_02150bb8) != 1) {
                return;
            }
            func_0202f5f0(&data_020d93b8);
            return;
    }
}
