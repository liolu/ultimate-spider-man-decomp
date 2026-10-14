/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e8c(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02009120(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_02059a90(void *, void *);              /* extern */
M2C_UNK func_02059aa4(void *, void *);              /* extern */
extern M2C_UNK data_020b5320;

void func_02053c08(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0xA4);
    if (temp_r0 != 0) {
        func_02000e8c(temp_r0 + 4, &data_020b5320);
        func_02000e8c(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, &data_020b5320);
    }
    func_02059aa4(arg0 + 0x1D4, arg0 + 0x188);
    func_02059a90(arg0 + 0x1D4, arg0 + 0x1A0);
    func_02009120(arg0, arg0 + 0x1A0, 0);
    M2C_FIELD(arg0, s32 *, 0x1D0) = 7;
}
