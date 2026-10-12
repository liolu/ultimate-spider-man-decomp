/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fbc(M2C_UNK);                         /* extern */
M2C_UNK func_02065440(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0208bba8(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0208bfbc();                                /* extern */
M2C_UNK func_0209ab00(s32);                         /* extern */

void func_0207e2e0(s32 arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02064fbc(4);
    func_02065440(temp_r0, arg1, 4);
    func_0208bba8(func_0208bfbc(), temp_r0, 4, 2);
    func_0209ab00(temp_r0);
}
