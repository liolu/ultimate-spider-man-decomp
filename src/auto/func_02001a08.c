/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffa840(void *, M2C_UNK);             /* extern */
s32 func_02001734(void *);                          /* extern */
extern M2C_UNK data_020ec874;
extern s32 data_0213b6e0;

void *func_02001a08(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_01ffa840(arg0, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ec874;
    M2C_FIELD(arg0, s32 *, 0xBC)   = arg1;
    M2C_FIELD(arg0, s32 *, 0xC0)   = (s32) (data_0213b6e0 + func_02001734(arg0));
    return arg0;
}
