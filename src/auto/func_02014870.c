/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209031c(M2C_UNK, M2C_UNK);

extern s32 data_02102194;
extern s32 data_0213b6e4;

void func_02014870(s32 arg0) {
    if (arg0 == data_02102194) {
        return;
    }
    data_0213b6e4 = arg0;
    func_0209031c(0, arg0);
}
