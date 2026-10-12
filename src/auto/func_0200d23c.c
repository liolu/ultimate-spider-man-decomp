/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200cfc4(void *, s32);                     /* extern */
s32 func_0200cfe0(void *, M2C_UNK);                 /* extern */
s32 func_0200d038(void *, M2C_UNK);                 /* extern */
s32 func_0200d048(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0200d0a0();                            /* extern */
M2C_UNK func_0200d160(void *, M2C_UNK);             /* extern */
M2C_UNK func_02027324(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_02054b18(s32, s32, M2C_UNK);           /* extern */

void func_0200d23c(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    func_0200d0a0();
    temp_r4 = func_0200cfc4(arg0, func_0200cfe0(arg0, arg1));
    func_02054b18(temp_r4, func_0200d038(arg0, arg1), 0);
    func_02027324(M2C_FIELD(arg0, s32 *, 0x1C), func_0200d048(arg0, arg1), 0, 0);
    func_0200d160(arg0, arg1);
}
