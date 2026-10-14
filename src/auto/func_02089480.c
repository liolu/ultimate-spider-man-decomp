/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088834(void *, M2C_UNK);             /* extern */
M2C_UNK func_02088e9c(void *, s32 *);               /* extern */
M2C_UNK func_02088f60(void *, s32 *);               /* extern */
M2C_UNK func_0209605c(s32, s32 *, M2C_UNK);         /* extern */

void func_02089480(void *arg0, s32 *arg1) {
    s32 sp0;

    func_0209605c(*arg1, &sp0, 4);
    switch (sp0) {                                  /* irregular */
        case 2:
            func_02088f60(arg0, arg1);
            return;
        case 5:
            func_02088e9c(arg0, arg1);
            return;
        case 6:
            if (M2C_FIELD(arg0, s32 *, 0x554) == M2C_FIELD(arg0, s32 *, 0x54C)) {
                M2C_FIELD(arg0, s32 *, 0x560) = 5;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x560) = 6;
            func_02088834(arg0, 0xB);
            return;
    }
}
