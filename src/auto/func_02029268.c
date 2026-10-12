/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02029654(s32, void *, u32);            /* extern */
s32 func_02064fc8(s32);                             /* extern */
extern M2C_UNK data_020f78d8;
extern M2C_UNK data_02100e94;

void *func_02029268(void *arg0, u32 *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f78d8;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02100e94;
    M2C_FIELD(arg0, s32 *, 4) = func_02064fc8(0x101C);
    func_02029654(M2C_FIELD(arg0, s32 *, 4), ((s8 *)arg1 + 4), (u32) *arg1 >> 8);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}
