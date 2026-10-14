#include "m2c.h"

extern s32 data_02148394;
extern s32 data_02148398;
extern s32 data_021483a0;
extern s32 data_021483a4;

s32 func_02070480(s32 arg0) {
    s32 var_r1;

    var_r1 = 0;
    switch (arg0) {                                 /* irregular */
        case 0:
            if (data_021483a4 != data_021483a0) {
                var_r1 = 1;
            }
            break;
        case 1:
            if (data_02148398 != data_02148394) {
                var_r1 = 1;
            }
            break;
        case 2:
            if ((data_02148398 != data_02148394) || (data_021483a4 != data_021483a0)) {
                var_r1 = 1;
            }
            break;
    }
    return var_r1;
}
