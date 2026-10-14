/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02091e14(M2C_UNK);
void func_02095a50(M2C_UNK);

extern s32 data_0213b01c;
extern s32 data_02151b50;
extern s32 data_02151b54;

void func_0209351c(void) {
    if (data_0213b01c != -1) {
        func_02095a50(data_0213b01c);
    }
    func_02091e14(data_02151b54);
    data_02151b54 = 0;
    data_02151b50 = 0;
}
