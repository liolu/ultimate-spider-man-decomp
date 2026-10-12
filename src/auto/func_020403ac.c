/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e8c(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020350fc(void *);                      /* extern */
M2C_UNK func_0203e1a0(void *);                      /* extern */
M2C_UNK func_0203f1f4(void *);                      /* extern */
extern M2C_UNK data_020b5320;

void func_020403ac(void *arg0) {
    func_02000e8c(M2C_FIELD(arg0, s32 *, 0xA4) + 4, &data_020b5320);
    func_02000e8c(M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C, &data_020b5320);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u8 *, 0x97) == 0) {
        return;
    }
    func_020350fc(arg0);
    func_0203e1a0(arg0);
    func_0203f1f4(arg0);
}
