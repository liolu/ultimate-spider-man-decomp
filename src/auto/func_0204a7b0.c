/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_0204a794(void *);                          /* extern */
M2C_UNK func_0204a7fc(s32 *, void *, s32);          /* extern */

void func_0204a7b0(void *arg0) {
    s32 sp0;

    sp0 = 0;
    func_0204a7fc(&sp0, arg0, 0x05000007);
    M2C_FIELD(arg0, s32 *, 0) = 0x3F219F72;
    M2C_FIELD(arg0, s16 *, 0x1A) = func_0204a794(arg0);
}
