/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02057ddc();                            /* extern */
M2C_UNK func_02058114(void *);                      /* extern */
extern s32 data_020f755c;
extern s32 data_020f7560;
extern s32 data_0213b6e0;

void func_020106a4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x77C) = (s32) (data_0213b6e0 + data_020f755c);
    M2C_FIELD(arg0, s32 *, 0x780) = (s32) (data_0213b6e0 + data_020f7560);
    if (M2C_FIELD(arg0, s32 *, 0x700) == 0) {
        return;
    }
    func_02057ddc(arg0);
    func_02058114(arg0);
}
