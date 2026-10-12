/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208e200();                            /* extern */
M2C_UNK func_02095688();                            /* extern */
extern s32 (*data_021519d4)();

void func_0208e220(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_021519d4 != NULL) {
            var_r0 = data_021519d4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0208e200();
        return;
    }
    func_02095688();
}
