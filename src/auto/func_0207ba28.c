/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f5a0(M2C_UNK **, M2C_UNK);         /* extern */
M2C_UNK func_0207b8a0(M2C_UNK **, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_0211bee4;

M2C_UNK **func_0207ba28(M2C_UNK **arg0, void *arg1) {
    func_0202f5a0(arg0, 1);
    *arg0 = &data_0211bee4;
    func_0207b8a0(arg0, M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 8),
                  (s32) M2C_FIELD(arg1, u8 *, 0xC));
    return arg0;
}
