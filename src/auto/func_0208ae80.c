/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088834(void *, M2C_UNK);             /* extern */
s32 func_02097ca0(M2C_UNK *);                       /* extern */
extern M2C_UNK func_0208aef8;

void func_0208ae80(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = func_02097ca0(&func_0208aef8);
        if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x598) = 3;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        func_02088834(arg0, 2);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x598) = 3;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_02088834(arg0, 2);
}
