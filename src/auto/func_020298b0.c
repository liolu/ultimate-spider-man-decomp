/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02029748(void *, M2C_UNK, M2C_UNK);        /* extern */
s16 func_02064ed8(s32);                             /* extern */
void *func_02066298(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02100ed8;
extern M2C_UNK data_02100ee0;
extern M2C_UNK data_02100ee4;
extern M2C_UNK data_02100ef0;

void func_020298b0(void *arg0, void *arg1, M2C_UNK arg2) {
    M2C_FIELD(arg1, s32 *, 0)    = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg1, s16 *, 4)    = func_02064ed8(M2C_FIELD(func_02066298(arg2, &data_02100ed8, 0, 1), s32 *, 4));
    M2C_FIELD(arg1, s16 *, 6)    = func_02064ed8(M2C_FIELD(func_02066298(arg2, &data_02100ee0, 0, 1), s32 *, 4));
    M2C_FIELD(arg1, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg1, s32 *, 0xC)  = func_02029748(arg0, arg2, 0);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg1, s16 *, 0x14) = func_02064ed8(M2C_FIELD(func_02066298(arg2, &data_02100ee4, 0, 1), s32 *, 4));
    M2C_FIELD(arg1, s16 *, 0x16) = func_02064ed8(M2C_FIELD(func_02066298(arg2, &data_02100ef0, 0, 1), s32 *, 4));
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
}
