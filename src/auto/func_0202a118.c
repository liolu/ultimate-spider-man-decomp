/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020297ec(M2C_UNK, void *, void *);     /* extern */
s32 func_02029a34(M2C_UNK, s32);                    /* extern */
s32 func_02029b00(M2C_UNK, s32);                    /* extern */
s32 func_02029eec(M2C_UNK, s32);                    /* extern */
s32 func_02065d98(s32, M2C_UNK *);                  /* extern */
extern M2C_UNK data_02100ed0;
extern M2C_UNK data_02101154;

void func_0202a118(M2C_UNK arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, s32 *, 0) = func_02029eec(arg0, M2C_FIELD(arg2, s32 *, 0));
    M2C_FIELD(arg1, s32 *, 4) = func_02029b00(arg0, func_02065d98(M2C_FIELD(arg2, s32 *, 8), &data_02101154));
    M2C_FIELD(arg1, s32 *, 8) = func_02029a34(arg0, func_02065d98(M2C_FIELD(arg2, s32 *, 8), &data_02100ed0));
    func_020297ec(arg0, arg1, arg2);
}
