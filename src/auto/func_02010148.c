/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020106a4();                            /* extern */
M2C_UNK func_02011464(void *);                      /* extern */
M2C_UNK func_020133cc(void *);                      /* extern */

void func_02010148(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x1B8);
    switch (temp_r1) {                              /* irregular */
    case 22:
        if (M2C_FIELD(arg0, s32 *, 0x180) == 0x1B0) {
            func_020106a4(arg0);
        }
        break;
    case 32:
    case 35:
        func_02011464(arg0 + 0x790);
        break;
    case 38:
        if (M2C_FIELD(arg0, s32 *, 0x180) == 0xC) {
            func_02011464(arg0 + 0x790);
        }
        break;
    }
    func_020133cc(arg0);
}
