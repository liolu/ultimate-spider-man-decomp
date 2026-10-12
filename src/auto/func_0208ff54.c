/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02090024();                            /* extern */
extern s32 data_02151ab0;

void func_0208ff54(s32 arg0) {
    if (data_02151ab0 != 0) {
        return;
    }
    data_02151ab0 = 1;
    func_02090024(arg0);
}
