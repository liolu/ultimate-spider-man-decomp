/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209486c();                                /* extern */
s32 func_020948a0();                                /* extern */
s32 func_020949ec();                                /* extern */
extern s32 data_0213b030;

s32 func_02094974(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_0213b030 == -1) {
        temp_r4 = func_020948a0();
        if (func_020949ec() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_0209486c() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_0213b030 = var_r2 | *(u16 *)0x027FFFFA;
    }
    return data_0213b030;
}
