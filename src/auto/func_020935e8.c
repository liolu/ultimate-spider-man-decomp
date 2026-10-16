/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02091b50();                                /* extern */
extern M2C_UNK data_020eadd8;
extern s32 data_02151b50;
extern s32 data_02151b54;

void func_020935e8(void) {
    s32 temp_r0;

    temp_r0       = func_02091b50();
    data_02151b54 = temp_r0;
    data_02151b50 = *((u16 *) ((s8 *) &data_020eadd8 + ((temp_r0 >> 4) * 2))) << 0xC;
}
