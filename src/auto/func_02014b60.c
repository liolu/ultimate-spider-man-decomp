/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014b00();                            /* extern */
M2C_UNK func_02014cf8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02014d18(M2C_UNK, s32);                /* extern */
M2C_UNK func_0202f284(M2C_UNK, void *);             /* extern */

void func_02014b60(M2C_UNK arg0, void *arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) == 0x1A) {
        temp_r1 = M2C_FIELD(arg1, s32 *, 4);
        switch (temp_r1) {                          /* irregular */
        case 0:
            func_02014d18(arg0, M2C_FIELD(arg1, s32 *, 8));
            break;
        case 2:
            func_02014cf8(arg0, M2C_FIELD(arg1, s32 *, 8));
            break;
        case 1:
            func_02014b00();
            break;
        }
    }
    func_0202f284(arg0, arg1);
}
