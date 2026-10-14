/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02091518(s32, s32);                    /* extern */
extern s32 data_02148394;
extern s32 data_02148398;
extern s32 data_0214839c;
extern s32 data_021483a0;
extern s32 data_021483a4;
extern s32 data_021483a8;

void func_02070218(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if ((s32) data_021483a4 < (s32) data_021483a0) {
        temp_r0       = data_021483a4 + data_0214839c;
        data_021483a4 = temp_r0;
        if (temp_r0 > (s32) data_021483a0) {
            data_021483a4 = data_021483a0;
        }
        func_02091518(0x0400006C, data_021483a4);
    } else if ((s32) data_021483a4 > (s32) data_021483a0) {
        temp_r0_2     = data_021483a4 - data_0214839c;
        data_021483a4 = temp_r0_2;
        if (temp_r0_2 < (s32) data_021483a0) {
            data_021483a4 = data_021483a0;
        }
        func_02091518(0x0400006C, data_021483a4);
    }
    if ((s32) data_02148398 < (s32) data_02148394) {
        temp_r0_3     = data_02148398 + data_021483a8;
        data_02148398 = temp_r0_3;
        if (temp_r0_3 > (s32) data_02148394) {
            data_02148398 = data_02148394;
        }
        func_02091518(0x0400106C, data_02148398);
        return;
    }
    if ((s32) data_02148398 <= (s32) data_02148394) {
        return;
    }
    temp_r0_4     = data_02148398 - data_021483a8;
    data_02148398 = temp_r0_4;
    if (temp_r0_4 < (s32) data_02148394) {
        data_02148398 = data_02148394;
    }
    func_02091518(0x0400106C, data_02148398);
}
