/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209560c();                                /* extern */
M2C_UNK func_02095620(s32);                         /* extern */
void *func_0209be5c(M2C_UNK *, M2C_UNK);            /* extern */
M2C_UNK func_0209be74(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_02155144;

void *func_0209e9f8(void) {
    s32 temp_r5;
    void *temp_r0;
    void *temp_r1;

    temp_r5 = func_0209560c();
    temp_r0 = func_0209be5c(&data_02155144, 0);
    if (temp_r0 != NULL) {
        func_0209be74(&data_02155144, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x118) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x118) - 1);
    }
    func_02095620(temp_r5);
    return temp_r0;
}
