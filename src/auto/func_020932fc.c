/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02091bd4(M2C_UNK);
void func_02095a50(M2C_UNK);

extern s32 data_0213b01c;
extern s32 data_02151b48;

void func_020932fc(void) {
    if (data_0213b01c != -1) {
        func_02095a50(data_0213b01c);
    }
    func_02091bd4(data_02151b48);
    data_02151b48 = 0;
}
