/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02067a84(void *);                      /* extern */
M2C_UNK func_02067db0(void *);                      /* extern */
M2C_UNK func_02067dfc(void *);                      /* extern */
M2C_UNK func_02067ed4(void *);                      /* extern */
M2C_UNK func_02067f08(void *);                      /* extern */
M2C_UNK func_02067f68(void *);                      /* extern */
M2C_UNK func_02067fd0();                            /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211a9a8;
extern M2C_UNK data_0211aa60;
extern M2C_UNK data_02143e44;

void *func_02068188(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211aa60;
    M2C_FIELD(arg0, s32 *, 4) =
        (s32) ((arg1 * 0x24) + *((M2C_UNK *) ((s8 *) &data_0211a9a8 + (M2C_FIELD(&data_02143e44, s32 *, 4) * 4))));
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0x50;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_02067fd0(arg0);
    func_02067db0(arg0);
    func_02067f08(arg0);
    func_02067f68(arg0);
    func_02067ed4(arg0);
    func_02067dfc(arg0);
    func_02067a84(arg0);
    return arg0;
}
