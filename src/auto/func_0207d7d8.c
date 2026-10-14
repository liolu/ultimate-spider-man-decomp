/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_02150ab4;
extern M2C_UNK data_02150abc;

void func_0207d7d8(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_02150abc + (arg1 * 4))) = *((M2C_UNK *) ((s8 *) &data_02150abc + (arg1 * 4))) | (1 << arg0);
    data_02150ab4 |= 1 << arg0;
}
