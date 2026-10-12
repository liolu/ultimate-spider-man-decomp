/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020014b8();                            /* extern */
M2C_UNK func_02006e90(void *);                      /* extern */

void func_02001570(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1F2) != 0) {
        func_020014b8(arg0);
    }
    func_02006e90(arg0);
}
