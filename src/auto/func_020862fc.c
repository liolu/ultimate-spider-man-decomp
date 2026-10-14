/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020835e0(M2C_UNK);
void func_020835ec(M2C_UNK, M2C_UNK);

extern s32 data_02150c1c;

void func_020862fc(s32 arg0) {
    if (data_02150c1c == 0) {
        return;
    }
    func_020835ec(data_02150c1c, arg0);
    func_020835e0(data_02150c1c);
}
