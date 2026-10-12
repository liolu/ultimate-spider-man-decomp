/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088834(void *, M2C_UNK);             /* extern */

void func_0208b32c(void *arg0, void *arg1) {
    M2C_UNK (*temp_r1)(M2C_UNK);

    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        M2C_FIELD(arg0, s32 *, 8) = 3;
        temp_r1 = M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK), 0x590);
        if (temp_r1 == NULL) {
            return;
        }
        temp_r1(0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x598) = 2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_02088834(arg0, 1);
}
