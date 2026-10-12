/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_0202ef40(M2C_UNK, M2C_UNK);
M2C_UNK func_0202ef64(M2C_UNK);

void func_0202ef10(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0202ef64(arg0);
    if (temp_r0 == -1) {
        return;
    }
    func_0202ef40(arg0, temp_r0);
}
