/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_0204e164(void *);                      /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211aeb4;
extern M2C_UNK data_0211c974;
extern M2C_UNK data_0211ca44;

void *func_02083b7c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211c974;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C4) = &data_0211ca44;
    func_0202f630(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x3C4) = &data_0211aeb4;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C4) = &data_020efa10;
    func_0204e164(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
