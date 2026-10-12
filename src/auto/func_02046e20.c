/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200b364(s32);                             /* extern */
extern s32 data_0213b110;

s32 func_02046e20(void *arg0, s32 arg1) {
    if ((func_0200b364(data_0213b110) != 0) || (M2C_FIELD(arg0, s32 *, 0x18) & (1 << arg1))) {
        return 1;
    }
    return 0;
}
