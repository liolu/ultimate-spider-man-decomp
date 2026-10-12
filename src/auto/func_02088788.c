/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02064fbc(M2C_UNK);                       /* extern */
M2C_UNK func_02089894(void *, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0209ab00(void *);                      /* extern */

void func_02088788(void *arg0) {
    void *temp_r0;

    temp_r0 = func_02064fbc(6);
    M2C_FIELD(temp_r0, s32 *, 0) = 3;
    M2C_FIELD(temp_r0, u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 0x51E);
    func_02089894(arg0, temp_r0, 6, 0, 0xD);
    func_0209ab00(temp_r0);
}
