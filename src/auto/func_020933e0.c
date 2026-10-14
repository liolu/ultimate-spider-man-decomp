/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0209210c(M2C_UNK);
void func_02095a50(M2C_UNK);

extern s32 data_0213b01c;
extern s32 data_02151b40;
extern s32 data_02151b44;

void func_020933e0(void) {
    if (data_0213b01c != -1) {
        func_02095a50(data_0213b01c);
    }
    func_0209210c(data_02151b44);
    data_02151b44 = 0;
    data_02151b40 = 0;
}
