/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020350fc();                            /* extern */
M2C_UNK func_0203e1a0(void *);                      /* extern */
M2C_UNK func_0203f1f4(void *);                      /* extern */

void func_0204058c(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u8 *, 0x97) == 0) {
        return;
    }
    func_020350fc(arg0);
    func_0203e1a0(arg0);
    func_0203f1f4(arg0);
}
