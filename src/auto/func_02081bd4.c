/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0202718c(void *, M2C_UNK);               /* extern */
M2C_UNK func_0202f5f0(M2C_UNK *);                   /* extern */
M2C_UNK func_02039dac(void *);                      /* extern */
extern M2C_UNK data_020d937c;

void func_02081bd4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), s32 *, 0x9C);
    if (temp_r4 == M2C_FIELD(func_0202718c(arg0 + 0x190, 0x28), s32 *, 4)) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u8 *, 0x97) == 0) {
            return;
        }
        func_0202f5f0(&data_020d937c);
        return;
    }
    func_02039dac(arg0);
}
