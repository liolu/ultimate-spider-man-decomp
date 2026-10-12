/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a464(void *);                      /* extern */
M2C_UNK func_0202c67c(void *);                      /* extern */
M2C_UNK func_0202de3c(u16, s32);                    /* extern */
M2C_UNK func_0202f4a0(void *);                      /* extern */
M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
extern M2C_UNK data_0210151c;

void *func_0202d938(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210151c;
    func_0202f630();
    if ((M2C_FIELD(arg0, u8 *, 0xDE) == 0) && (M2C_FIELD(arg0, s32 *, 0xE0) != 0)) {
        func_0202c67c(arg0);
    }
    func_0209ab0c(M2C_FIELD(arg0, s32 *, 0xE0));
    func_0202de3c(M2C_FIELD(arg0, u16 *, 0xDC), M2C_FIELD(arg0, s32 *, 0xC8));
    func_0202a464(arg0 + 0x28);
    func_0202f4a0(arg0);
    return arg0;
}
