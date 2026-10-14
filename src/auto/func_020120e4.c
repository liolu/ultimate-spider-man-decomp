/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011804();                                /* extern */
M2C_UNK func_02011ee8(s32);                         /* extern */
M2C_UNK func_0205c980(M2C_UNK *);                   /* extern */
extern s32 data_0213b31c;
extern M2C_UNK func_02012178;

s32 func_020120e4(s32 arg0) {
    s32 temp_r1;

    if (func_02011804() != 0) {
        func_02011ee8(arg0);
    }
    temp_r1       = data_0213b31c - 1;
    data_0213b31c = temp_r1;
    if (temp_r1 == 0) {
        func_0205c980(&func_02012178);
    }
    return arg0;
}
