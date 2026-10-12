/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020313c0();                            /* extern */
extern s32 data_02143400;
extern s32 data_02143408;
extern s32 data_0214340c;

void func_02031318(s32 arg0) {
    data_0214340c = 0x40;
    data_02143400 = arg0;
    data_02143408 = 2;
    func_020313c0();
}
