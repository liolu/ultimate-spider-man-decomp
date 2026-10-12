/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02095688();                            /* extern */
extern s16 data_021519c8;

void func_0208e280(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_021519c8 = 1;
        return;
    }
    func_02095688();
}
