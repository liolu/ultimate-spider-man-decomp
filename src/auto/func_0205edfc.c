/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001ce4(void *);                      /* extern */
M2C_UNK func_02057ddc();                            /* extern */
M2C_UNK func_02058114(void *);                      /* extern */
extern s32 data_021183cc;
extern s32 data_0213b6e0;

void func_0205edfc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x9D0) = (s32) (data_0213b6e0 + data_021183cc);
    if (M2C_FIELD(arg0, s32 *, 0x700) == 0) {
        return;
    }
    func_02057ddc(arg0);
    func_02058114(arg0);
    func_02001ce4(arg0);
}
