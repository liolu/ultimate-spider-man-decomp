/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02092de8(void *arg0, s32 *arg1) {
    if (*(s32 *)0x04000600 & 1) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) *(s32 *)0x04000620;
    M2C_FIELD(arg0, s32 *, 4) = (s32) *(s32 *)0x04000624;
    M2C_FIELD(arg0, s32 *, 8) = (s32) *(s32 *)0x04000628;
    *arg1 = *(s32 *)0x0400062C;
    return 0;
}
