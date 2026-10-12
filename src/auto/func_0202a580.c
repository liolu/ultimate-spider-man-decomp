/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028f2c();                         /* extern */
s32 func_02028fb4();                       /* extern */
s32 func_02046c64();                       /* extern */
s32 func_02046c6c();                       /* extern */
M2C_UNK func_0204709c();                   /* extern */
M2C_UNK func_020470a0();                   /* extern */
s32 func_0204a770();                                /* extern */
M2C_UNK func_0204a808();              /* extern */
M2C_UNK func_02065668();                /* extern */
M2C_UNK func_020656cc();          /* extern */
M2C_UNK func_02065844();       /* extern */
s32 func_02082e38();                        /* extern */
extern M2C_UNK data_020b4db8;
extern M2C_UNK data_02101210;

void func_0202a580(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[60];
    s32 temp_r4;

    func_02028f2c();
    if (func_0204a770() != 0) {
        func_02065668(arg1, func_02028fb4(&data_020b4db8));
        return;
    }
    func_020470a0(sp0);
    func_0204a808(func_02028f2c(arg0), sp0);
    temp_r4 = func_02046c6c(sp0);
    func_02065844(func_02082e38(temp_r4 * 0x64, func_02046c64(sp0)), arg1, 0xA);
    func_020656cc(arg1, &data_02101210);
    func_0204709c(sp0);
}
