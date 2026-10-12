/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002c5c(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_0202f5f0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020b7f3c;

void func_02048458(M2C_UNK arg0, s32 *arg1) {
    if (*arg1 != 0x43) {
        func_0202f5f0(&data_020b7f3c);
    }
    func_02002c5c(arg0, arg1);
}
