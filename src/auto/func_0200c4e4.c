/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f5f0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020af30c;

void func_0200c4e4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 1) {
        func_0202f5f0(&data_020af30c);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0x80000000;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
