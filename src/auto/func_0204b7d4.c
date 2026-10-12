/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204b47c();                          /* extern */

void func_0204b7d4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x364) = (s32) M2C_FIELD((func_0204b47c() + 4), s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x368) = (s32) M2C_FIELD((func_0204b47c(arg0) + 4), s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x36C) = (s32) M2C_FIELD((func_0204b47c(arg0) + 4), s32 *, 0x14);
}
