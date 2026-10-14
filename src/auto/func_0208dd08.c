/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208dca8();                            /* extern */
M2C_UNK func_02095688();                            /* extern */
extern s32 data_021519c0;
extern s32 (*data_021519c4)();

void func_0208dd08(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0        = 1;
        data_021519c0 = 1;
        if (data_021519c4 != NULL) {
            var_r0 = data_021519c4();
        }
        if (var_r0 == 0) {
            return;
        }
        func_0208dca8();
        return;
    }
    func_02095688();
}
