/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020703a8(s32);                         /* extern */
extern s32 data_02148394;
extern s32 data_0214839c;
extern s32 data_021483a0;
extern s32 data_021483a8;

void func_020703e0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    switch (arg3) {                                 /* irregular */
        case 0:
            data_021483a0 = arg0;
            data_0214839c = arg2;
            break;
        case 1:
            data_02148394 = arg0;
            data_021483a8 = arg2;
            break;
        case 2:
            data_021483a0 = arg0;
            data_0214839c = arg2;
            data_02148394 = arg0;
            data_021483a8 = arg2;
            break;
    }
    if (arg1 != 0) {
        return;
    }
    func_020703a8(arg3);
}
