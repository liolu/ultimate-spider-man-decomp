/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020096bc();                                /* extern */
extern s32 data_0213b6e0;

s32 func_02049f28(s32 arg0, s32 arg1) {
    if ((s32) data_0213b6e0 < arg1) {
        return 5;
    }
    return func_020096bc(arg0);
}
