/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204b47c();                          /* extern */

void func_0204b78c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x370) = (s32) M2C_FIELD((func_0204b47c() + 0x1C), s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x374) = (s32) M2C_FIELD((func_0204b47c(arg0) + 0x1C), s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x378) = (s32) M2C_FIELD((func_0204b47c(arg0) + 0x1C), s32 *, 0x14);
}
