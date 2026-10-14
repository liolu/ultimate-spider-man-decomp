/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02024c20(void *, s32, u8);               /* extern */
M2C_UNK func_0202f358(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0204ed88(void *, u8);                  /* extern */
M2C_UNK func_0204ed90();                            /* extern */
void *func_020556d8(void *, void *, void *);        /* extern */
void *func_02064fc8(M2C_UNK);                       /* extern */

void func_0200d76c(void *arg0, void *arg1) {
    s32 temp_r2;
    void **temp_r0_2;
    void *temp_r0;
    void *temp_r5;
    void *var_r1;
    void *var_r4;

    if (M2C_FIELD(arg1, s32 *, 0) == 0x23) {
        temp_r2 = M2C_FIELD(arg1, s32 *, 4);
        switch (temp_r2) {                          /* irregular */
            case 0:
                temp_r5 = M2C_FIELD(arg1, void **, 8);
                var_r4  = func_02064fc8(0x28);
                if (var_r4 != NULL) {
                    temp_r0 = func_02064fc8(0x40);
                    var_r1  = temp_r0;
                    if (var_r1 != NULL) {
                        var_r1 = func_02024c20(temp_r0, M2C_FIELD(temp_r5, s32 *, 8), M2C_FIELD(temp_r5, u8 *, 0xC));
                    }
                    var_r4 = func_020556d8(var_r4, var_r1, temp_r5);
                }
                temp_r0_2 = M2C_FIELD(var_r4, void ***, 0x20);
                M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0x1C)(temp_r0_2, 3);
                func_0202f358(arg0 + 0x2C, var_r4, 1);
                return;
            case 1:
                func_0204ed88(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u8 *, 0x1D));
                return;
        }
    } else {
        func_0204ed90();
    }
}
