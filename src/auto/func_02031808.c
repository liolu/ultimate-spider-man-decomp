/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202ef64(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020316a0(M2C_UNK, s32);                /* extern */
M2C_UNK func_0207beac(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02084308(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_02143c1c;
extern M2C_UNK data_0214876c;

void func_02031808(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    if (func_0202ef64(&data_02143c1c, arg3) != -1) {
        func_020316a0(arg3, arg0);
        if (arg0 == -1) {
            return;
        }
        func_02084308(&data_0214876c, arg0, 0);
        return;
    }
    if (arg0 == -1) {
        return;
    }
    func_0207beac(&data_0214876c, arg0);
}
