/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088834();             /* extern */
s32 func_02097a84(); /* extern */
extern M2C_UNK func_02089a28;

void func_02089990(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = func_02097a84(&func_02089a28, arg0 + 0x378, 0, 1, 0);
        if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x598) = 3;
        M2C_FIELD(arg0, s32 *, 8)     = 0;
        func_02088834(arg0, 5);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x598) = 3;
    M2C_FIELD(arg0, s32 *, 8)     = 0;
    func_02088834(arg0, 5);
}
