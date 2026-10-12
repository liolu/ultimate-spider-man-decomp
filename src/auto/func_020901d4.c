/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208c950(u16);                         /* extern */
M2C_UNK func_0208c970(u16);                         /* extern */
extern s32 data_02151ab4;

s32 func_020901d4(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 9:
        func_0208c970((u16) data_02151ab4);
        return 0;
    case 10:
        func_0208c950((u16) data_02151ab4);
        return 0;
    case 1:
        return 4;
    default:
        return 8;
    }
}
