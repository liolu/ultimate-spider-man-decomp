/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209be74(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0209c498(s32);                         /* extern */
extern M2C_UNK data_02154ff8;

void func_0209cdf0(void *arg0) {
    func_0209c498(M2C_FIELD(arg0, s32 *, 0x40));
    func_0209be74(&data_02154ff8, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
