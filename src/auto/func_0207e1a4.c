/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202ef04(s32);                         /* extern */
M2C_UNK func_0202f5a0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207c5f4(M2C_UNK *);                   /* extern */
M2C_UNK func_02083334(s32);                         /* extern */
M2C_UNK func_02083368(s32);                         /* extern */
extern M2C_UNK data_0211c1dc;
extern s32 data_02147adc;
extern s32 data_02147ae8;
extern void *data_02150b2c;
extern M2C_UNK func_0207e04c;

void *func_0207e1a4(void *arg0) {
    func_0202f5a0(arg0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211c1dc;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    data_02150b2c = arg0;
    func_02083368(data_02147ae8);
    func_02083334(data_02147ae8);
    func_0202ef04(data_02147adc);
    func_0207c5f4(&func_0207e04c);
    return arg0;
}
