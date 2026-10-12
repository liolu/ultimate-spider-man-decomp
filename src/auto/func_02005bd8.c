/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0213b6e0;

void func_02005bd8(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1B4) > (s32) data_0213b6e0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x108)(arg0);
}
