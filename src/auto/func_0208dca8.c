/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208dc38(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02095688();                            /* extern */
M2C_UNK func_020a0578(s32);                         /* extern */

void func_0208dca8(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *)0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_020a0578(temp_r0);
    }
    func_0208dc38(1, 1);
    func_02095688();
}
