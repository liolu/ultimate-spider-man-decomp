/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028ba0(void *, M2C_UNK *);           /* extern */
M2C_UNK func_02028cc4(void *);                      /* extern */
M2C_UNK func_02054160(void *);                      /* extern */
extern M2C_UNK data_020cf168;
extern M2C_UNK data_020cf188;
extern M2C_UNK data_020cf1a8;
extern M2C_UNK data_020cf1c8;

void func_02053fe4(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x188) < (s32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
        if (arg1 != 0) {
            func_02028ba0(arg0 + 0x1FC, &data_020cf1c8);
        } else {
            func_02028ba0(arg0 + 0x1FC, &data_020cf1a8);
        }
    } else if (arg1 != 0) {
        func_02028ba0(arg0 + 0x1FC, &data_020cf168);
    } else {
        func_02028ba0(arg0 + 0x1FC, &data_020cf188);
    }
    func_02028cc4(arg0 + 0x1FC);
    func_02054160(arg0);
}
