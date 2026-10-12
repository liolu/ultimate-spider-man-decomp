/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_02034028(M2C_UNK);
void func_02038a64(M2C_UNK);
M2C_UNK func_02041968(M2C_UNK);
void func_020419c4(M2C_UNK);
void func_0204244c(M2C_UNK);

void func_020425cc(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x268) = 0x10;
    if (func_02041968(arg0) != 0) {
        func_020419c4(arg0);
        return;
    }
    if (func_02034028(arg0) != 0) {
        func_0204244c(arg0);
        return;
    }
    func_02038a64(arg0);
}
