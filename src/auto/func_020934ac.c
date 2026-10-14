/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02091b78();                                /* extern */
extern s32 data_02151b40;
extern s32 data_02151b44;

void func_020934ac(void) {
    s32 temp_r0;

    temp_r0       = func_02091b78();
    data_02151b44 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_02151b40 = 0x06894000;
            return;
        case 0x20:
            data_02151b40 = 0x06890000;
            return;
    }
}
