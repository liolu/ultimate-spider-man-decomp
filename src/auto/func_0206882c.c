/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02024c20(void *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_02054c48(s32, M2C_UNK);                /* extern */
void *func_020556d8(void *, void *, M2C_UNK);       /* extern */
void *func_02064fc8(M2C_UNK);                       /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211ab58;

void *func_0206882c(void *arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    void *temp_r0;
    void *var_r1;
    void *var_r5;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211ab58;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = arg5;
    M2C_FIELD(arg0, s32 *, 0xC)    = arg4;
    M2C_FIELD(arg0, void **, 0x10) = NULL;
    var_r5                         = func_02064fc8(0x28);
    if (var_r5 != NULL) {
        temp_r0 = func_02064fc8(0x40);
        var_r1  = temp_r0;
        if (var_r1 != NULL) {
            var_r1 = func_02024c20(temp_r0, arg1, arg2);
        }
        var_r5 = func_020556d8(var_r5, var_r1, arg3);
    }
    M2C_FIELD(arg0, void **, 0x10) = var_r5;
    func_02054c48(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x20), 2);
    return arg0;
}
