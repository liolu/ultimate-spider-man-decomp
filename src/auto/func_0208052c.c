/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fbc(M2C_UNK);                         /* extern */
M2C_UNK func_02065440(s32, s32 *, M2C_UNK);         /* extern */
s32 *func_020822e0(M2C_UNK *);                      /* extern */
M2C_UNK func_0208bb3c(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
s32 func_0208bfbc();                                /* extern */
M2C_UNK func_0209ab00(s32);                         /* extern */
extern M2C_UNK data_02150bb8;

void func_0208052c(void) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_02064fbc(0x3C);
    temp_r4 = temp_r0;
    sp0 = 2;
    func_02065440(temp_r0, &sp0, 4);
    func_02065440(temp_r4 + 4, func_020822e0(&data_02150bb8), 0x38);
    func_0208bb3c(func_0208bfbc(), temp_r4, 0x3C, 1);
    func_0209ab00(temp_r4);
}
