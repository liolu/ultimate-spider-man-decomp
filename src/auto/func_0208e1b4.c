/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208e1f4(s32 *, M2C_UNK *, s32);       /* extern */
s16 func_02093ca4();                                /* extern */
extern M2C_UNK data_021519c8;

void func_0208e1b4(void) {
    s32 sp0;

    sp0 = 0;
    func_0208e1f4(&sp0, &data_021519c8, 0x05000001);
    M2C_FIELD(&data_021519c8, s16 *, 2) = func_02093ca4();
}
