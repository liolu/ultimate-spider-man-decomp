/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094198();                            /* extern */
M2C_UNK func_020942d8(void *);                      /* extern */
M2C_UNK func_02094698(void *);                      /* extern */
M2C_UNK func_02094c9c(void *);                      /* extern */
M2C_UNK func_0209560c();                            /* extern */
M2C_UNK func_02095688();                            /* extern */
extern void **data_02151bcc;
extern M2C_UNK data_02151bec;

void func_020943b4(void) {
    void *temp_r4;

    func_0209560c();
    temp_r4 = *data_02151bcc;
    func_02094c9c(temp_r4);
    func_02094698(temp_r4);
    *((M2C_UNK *) ((s8 *) &data_02151bec + (M2C_FIELD(temp_r4, s32 *, 0x6C) * 4))) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x64)                                                = 2;
    func_020942d8(temp_r4 + 0x90);
    func_02094198();
    func_02095688();
}
