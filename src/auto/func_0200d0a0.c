/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0200cfc4(void *, s32);                   /* extern */
M2C_UNK func_02054b18(void *, s32, M2C_UNK);        /* extern */

void func_0200d0a0(void *arg0) {
    void *temp_r3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x18);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x24) != M2C_FIELD(temp_r3, s32 *, 0x38)) {
        return;
    }
    temp_r5 = func_0200cfc4(arg0, M2C_FIELD(temp_r3, s32 *, 0x58));
    func_02054b18(func_0200cfc4(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x54)), M2C_FIELD(temp_r5, s32 *, 0x10), 0);
    temp_r5_2 = func_0200cfc4(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x5C));
    func_02054b18(func_0200cfc4(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x58)), M2C_FIELD(temp_r5_2, s32 *, 0x10), 0);
    temp_r5_3 = func_0200cfc4(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x60));
    func_02054b18(func_0200cfc4(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x5C)), M2C_FIELD(temp_r5_3, s32 *, 0x10), 0);
}
