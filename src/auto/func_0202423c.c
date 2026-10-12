/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02030bc8(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_0213e408;
extern M2C_UNK data_0213e5a0;
extern M2C_UNK data_0213e8d0;
extern M2C_UNK data_0213ea68;

void func_0202423c(void *arg0) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;

    if (M2C_FIELD(arg0, u8 *, 0x36) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
            var_r1 = M2C_FIELD(arg0, s32 *, 0x24);
            if (var_r1 == 0) {
                var_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 8);
            }
            func_02030bc8(&data_0213e8d0, var_r1);
            return;
        }
        var_r1_2 = M2C_FIELD(arg0, s32 *, 0x24);
        if (var_r1_2 == 0) {
            var_r1_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 8);
        }
        func_02030bc8(&data_0213e5a0, var_r1_2);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        var_r1_3 = M2C_FIELD(arg0, s32 *, 0x24);
        if (var_r1_3 == 0) {
            var_r1_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 8);
        }
        func_02030bc8(&data_0213ea68, var_r1_3);
        return;
    }
    var_r1_4 = M2C_FIELD(arg0, s32 *, 0x24);
    if (var_r1_4 == 0) {
        var_r1_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 8);
    }
    func_02030bc8(&data_0213e408, var_r1_4);
}
