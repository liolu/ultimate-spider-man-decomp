/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02034018(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_02082544(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02150bb8;

void func_020826f4(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, u16 *, 0x4A0) == func_02082544(&data_02150bb8)) {
        func_02034018(arg0, arg1, arg2);
        return;
    }
    func_02034018(arg0, arg1, 0);
}
