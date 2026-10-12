#include "m2c.h"

M2C_UNK func_02004830(void *, M2C_UNK);             /* extern */
extern s32 data_0213b6e0;

void func_0204a238(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x778) = (s32) (data_0213b6e0 + 0xA);
    func_02004830(arg0, 0x27);
}
