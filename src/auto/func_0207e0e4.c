/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f4a0(M2C_UNK **);                  /* extern */
M2C_UNK func_02030a60(M2C_UNK *);                   /* extern */
M2C_UNK func_0207036c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0207c5f4(M2C_UNK);                     /* extern */
M2C_UNK func_0209ab0c(M2C_UNK **);                  /* extern */
extern M2C_UNK data_0211c1dc;
extern M2C_UNK data_0213e270;
extern s32 data_02150b2c;

M2C_UNK **func_0207e0e4(M2C_UNK **arg0) {
    *arg0 = &data_0211c1dc;
    func_0207036c(2, 0, 1);
    func_0207c5f4(0);
    func_02030a60(&data_0213e270);
    data_02150b2c = 0;
    func_0202f4a0(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
