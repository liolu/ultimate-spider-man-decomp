/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0211be3c;
extern M2C_UNK data_0211be4c;

void func_02076f7c(void *arg0, s32 arg1, s32 *arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211be4c;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211be3c;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) *arg2;
}
