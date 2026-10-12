/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_02091f08(M2C_UNK);
void func_02095a50(M2C_UNK);

extern s32 data_0213b01c;
extern s32 data_02151b4c;
extern s32 data_02151b58;
extern s32 data_02151b5c;
extern s32 data_02151b60;

void func_02093630(void) {
    if (data_0213b01c != -1) {
        func_02095a50(data_0213b01c);
    }
    func_02091f08(data_02151b58);
    data_02151b60 = 0;
    data_02151b5c = 0;
    data_02151b4c = 0;
    data_02151b58 = 0;
}
