#include "m2c.h"

extern M2C_UNK data_021461d0;
extern M2C_UNK data_021467ec;

s32 func_02024308(void *arg0) {
    if (M2C_FIELD(arg0, volatile u8 *, 0x36) != 0) {
        return M2C_FIELD(&data_021461d0, volatile s32 *, 0x10);
    }
    return M2C_FIELD(&data_021467ec, volatile s32 *, 0x10);
}
