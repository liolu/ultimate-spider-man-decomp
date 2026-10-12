/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011778(void *);                          /* extern */
s32 func_02011780(void *);                          /* extern */
s32 func_02011788(void *);                          /* extern */
M2C_UNK func_020124c8(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_02030aac(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0213e270;
extern M2C_UNK data_0213e738;

void func_0201242c(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        func_02030aac(&data_0213e270, func_02011788(arg0 + 0x1C), 0, 0x10);
    } else {
        func_02030aac(&data_0213e738, func_02011788(arg0 + 0x1C), 0, 0x10);
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r4 = func_02011780(arg0 + 0x1C);
    func_020124c8(M2C_FIELD(arg0, s32 *, 8), temp_r5, M2C_FIELD(arg0, s32 *, 4), temp_r5, temp_r4, func_02011778(arg0 + 0x1C));
}
