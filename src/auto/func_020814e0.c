/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02026a94(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02036338(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0213d440;

void func_020814e0(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x26E) == 0) {
        func_02026a94((s32) &data_0213d440, 1, arg1);
        func_02036338(arg0, 1);
        return;
    }
    func_02026a94((s32) &data_0213d440, 2, arg1);
    func_02036338(arg0, 2);
}
