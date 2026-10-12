/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_02147afc;
extern M2C_UNK data_02147ca0;

s32 func_0206a4c8(s32 arg0) {
    s32 temp_r1;

    if (data_02147afc == 0) {
        return 1;
    }
    temp_r1 = arg0 * 0x1C;
    if (*((M2C_UNK *)((s8 *)&data_02147ca0 + temp_r1)) == 0) {
        return 0xA;
    }
    *((M2C_UNK *)((s8 *)&data_02147ca0 + temp_r1)) = 0;
    return 0;
}
