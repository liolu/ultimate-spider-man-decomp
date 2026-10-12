/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088834(void *, M2C_UNK);             /* extern */
s32 func_02097ec8(M2C_UNK *);                       /* extern */
extern M2C_UNK func_0208b40c;

void func_0208b394(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = func_02097ec8(&func_0208b40c);
        if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x598) = (s32) M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 8) = 0;
        func_02088834(arg0, 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x598) = 2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_02088834(arg0, 1);
}
