/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02064fbc();                              /* extern */
M2C_UNK func_0207036c();   /* extern */
M2C_UNK func_0208052c();                      /* extern */
M2C_UNK func_020822cc();           /* extern */
M2C_UNK func_02082414(); /* extern */
M2C_UNK func_02082564(); /* extern */
M2C_UNK func_02087e84();            /* extern */
M2C_UNK func_02087ecc();                    /* extern */
s32 func_02087ed8();                             /* extern */
s32 func_02087f14();                          /* extern */
M2C_UNK func_0209ab00();                      /* extern */
extern M2C_UNK data_02150bb8;

void func_020803e0(void *arg0) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r0_3;
    void *temp_r0_2;

    if (func_02087f14(arg0 + 0x10) != 1) {
        return;
    }
    do {
        temp_r0 = func_02087ed8(arg0 + 0x10);
        func_02087ecc(arg0 + 0x10, temp_r0);
        temp_r0_2 = func_02064fbc();
        func_02087e84(arg0 + 0x10, temp_r0, temp_r0_2);
        temp_r0_3 = M2C_FIELD(temp_r0_2, s32 *, 0);
        switch (temp_r0_3) {                        /* irregular */
        case 1:
            func_02082414(&data_02150bb8, 1, 1);
            sp0 = (s32) M2C_FIELD(temp_r0_2, u16 *, 4);
            func_02082564(&data_02150bb8, 1, temp_r0_2 + 6, &sp0);
            func_0208052c(arg0);
            break;
        case 2:
            func_020822cc(&data_02150bb8, temp_r0_2 + 4);
            if (M2C_FIELD(arg0, s32 *, 4) == 4) {
                M2C_FIELD(arg0, s32 *, 4) = 5;
            }
            break;
        case 3:
            func_0207036c(2, 0, 1);
            M2C_FIELD(arg0, s32 *, 4) = 7;
            break;
        }
        func_0209ab00(temp_r0_2);
    } while (func_02087f14(arg0 + 0x10) == 1);
}
