/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_020f7554;
extern s32 data_0213b6e0;

void func_0200fbe0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x788) = (s32) (data_0213b6e0 + data_020f7554);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 0x1DC)(arg0, 0);
}
