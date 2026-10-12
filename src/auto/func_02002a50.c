/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_02085700(s32, M2C_UNK);                   /* extern */

void func_02002a50(void *arg0) {
    if ((s32) *func_02085700(M2C_FIELD(arg0, s32 *, 0xBC), 6) <= 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x738) = (s32) M2C_FIELD(func_02085700(M2C_FIELD(arg0, s32 *, 0xBC), 6), s16 *, 6);
    M2C_FIELD(arg0, s32 *, 0x73C) = (s32) M2C_FIELD(func_02085700(M2C_FIELD(arg0, s32 *, 0xBC), 6), s16 *, 8);
}
