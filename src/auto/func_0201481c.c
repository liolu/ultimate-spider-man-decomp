/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020902c8(M2C_UNK);                     /* extern */
extern s32 data_02102194;
extern s32 data_0213b6e4;

void func_0201481c(void) {
    if (data_0213b6e4 == data_02102194) {
        return;
    }
    func_020902c8(0);
    data_0213b6e4 = data_02102194;
}
