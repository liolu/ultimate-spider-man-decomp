/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02001c0c(void *);                          /* extern */
M2C_UNK func_020579cc(void *);                      /* extern */
M2C_UNK func_0205b58c(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0208c03c(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02150c78;

void func_0205fc1c(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    if ((temp_r4 > (s32) (func_0208c03c(&data_02150c78) + 0xFFFFD120)) || ((s32) M2C_FIELD(arg0, s32 *, 0x4C) < 0x2EE0)) {
        if (func_02001c0c(arg0) != 0) {
            return;
        }
        func_020579cc(arg0);
        return;
    }
    func_0205b58c(arg0, 0, 0);
}
