/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_0206ba5c(M2C_UNK);

extern s32 data_02147afc;
extern M2C_UNK data_02147f74;

s32 func_02069be0(s32 arg0) {
    if (data_02147afc == 0) {
        return 1;
    }
    if (func_0206ba5c(arg0) != 0) {
        return *((M2C_UNK *)((s8 *)&data_02147f74 + (arg0 * 0x14C)));
    }
    return 0xA;
}
