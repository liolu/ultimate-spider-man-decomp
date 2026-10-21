/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202efb4(M2C_UNK *, void *);           /* extern */
void *func_02084b88(M2C_UNK *, s32);                /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_021025d0;
extern M2C_UNK data_02143c1c;
extern M2C_UNK data_0214876c;

typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

void *func_02031778(void *arg0, void *arg1, s32 arg2) {
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021025d0;
    *(M2C_S8 *) ((s8 *) arg0 + 4)  = *(M2C_S8 *) ((s8 *) arg1 + 0);

    M2C_FIELD(arg0, s32 *, 0xC)  = arg2;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    temp_r0                      = func_02084b88(&data_0214876c, arg2);
    if (temp_r0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(temp_r0, u8 *, 0x11);
        M2C_FIELD(arg0, u16 *, 0x18) = (u16) M2C_FIELD(temp_r0, u16 *, 0xC);
    }
    if ((s32) M2C_FIELD(&data_02143c1c, s32 *, 0xC) >= 0x10) {
        M2C_FIELD(arg0, s32 *, 0x14) = -2;
    } else {
        func_0202efb4(&data_02143c1c, arg0);
    }
    return arg0;
}
