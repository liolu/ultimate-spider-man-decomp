/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028f2c(M2C_UNK);                         /* extern */
M2C_UNK func_0202dc68();                            /* extern */
M2C_UNK func_02046c6c(M2C_UNK *);                   /* extern */
M2C_UNK func_02046ff4(M2C_UNK *);                   /* extern */
s32 func_0204a770();                                /* extern */
M2C_UNK func_0204a808(s32, M2C_UNK *);              /* extern */
M2C_UNK func_0205c948(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02143e44;
extern M2C_UNK data_02146128;

void func_02021f08(s32 arg0, M2C_UNK arg1) {
    func_0205c948(&data_02146128);
    func_02028f2c(arg1);
    if (func_0204a770() != 0) {
        func_02046ff4(&data_02143e44);
    } else {
        func_0204a808(func_02028f2c(arg1), &data_02143e44);
    }
    func_02046c6c(&data_02143e44);
    func_0202dc68();
}
