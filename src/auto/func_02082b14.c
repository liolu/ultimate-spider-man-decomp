/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020d9628;
extern M2C_UNK data_020d9640;

void func_02082b14(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x4A0) == 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *, M2C_UNK *), 0x1C)(arg0, &data_020d9628);
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(void *, M2C_UNK *), 0x1C)(arg0, &data_020d9640);
}
