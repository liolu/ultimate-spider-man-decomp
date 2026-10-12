/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028ba0(void *, M2C_UNK *);           /* extern */
s32 func_02034028(void *);                          /* extern */
M2C_UNK func_02036b68(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020377e8();                            /* extern */
extern M2C_UNK data_020b828c;

void func_020407b0(void *arg0) {
    func_020377e8();
    if (func_02034028(arg0) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x194) != 0) {
        return;
    }
    func_02036b68(arg0, 0x6B, 0, 0);
    func_02028ba0(arg0 + 0x1C8, &data_020b828c);
}
