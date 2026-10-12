/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02064da8(s32 *, s32, s32);             /* extern */
M2C_UNK func_02064db4();                            /* extern */

void func_02064d58(void *arg0) {
    s32 sp0;
    s32 temp_ip;

    func_02064db4();
    sp0 = 0;
    temp_ip = M2C_FIELD(arg0, s32 *, 8);
    func_02064da8(&sp0, M2C_FIELD(arg0, s32 *, 0x14) + (temp_ip * 4), ((M2C_FIELD(arg0, s32 *, 0xC) - temp_ip) & 0x1FFFFF) | 0x05000000);
}
