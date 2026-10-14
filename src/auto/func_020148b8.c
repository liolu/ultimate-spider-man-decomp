/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209af7c(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_02014a7c;

void *func_020148b8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    M2C_FIELD(arg0, s32 *, 0)    = func_0209af7c(M2C_FIELD(arg0, s32 *, 0x10), 0xC, 0, &func_02014a7c, 0);
    return arg0;
}
