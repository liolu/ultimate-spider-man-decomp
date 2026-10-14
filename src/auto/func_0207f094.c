/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fbc();                         /* extern */
M2C_UNK func_02065440();         /* extern */
M2C_UNK func_0208bba8();  /* extern */
s32 func_0208bfbc();                                /* extern */
M2C_UNK func_0209ab00();                         /* extern */

void func_0207f094(s32 arg0) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02064fbc(0x24);
    temp_r4 = temp_r0;
    sp0     = 1;
    func_02065440(temp_r0, &sp0, 4);
    func_02065440(temp_r4 + 4, arg0 + 0x614, 0x20);
    func_0208bba8(func_0208bfbc(), temp_r4, 0x24, 3);
    func_0209ab00(temp_r4);
}
