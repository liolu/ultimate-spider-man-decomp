/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209b36c(u8, s32);                     /* extern */
M2C_UNK func_0209b384(u8);                          /* extern */
M2C_UNK func_0209c8d0(void *);                      /* extern */

void func_0209c960(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_0209b36c(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_0209b384(M2C_FIELD(arg0, u8 *, 0x3C));
    func_0209c8d0(arg0);
}
