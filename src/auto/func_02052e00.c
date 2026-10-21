/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014d54(void *);                      /* extern */
M2C_UNK func_020155d4();                            /* extern */
M2C_UNK func_0202053c();                            /* extern */
M2C_UNK func_02021d00();                            /* extern */
M2C_UNK func_02024c6c(M2C_UNK);                     /* extern */
M2C_UNK func_02026768();                            /* extern */
M2C_UNK func_0202f91c();                            /* extern */
M2C_UNK func_0204eb40();                            /* extern */
M2C_UNK func_0204fed4(M2C_UNK);                     /* extern */
M2C_UNK func_020522e8(void *);                      /* extern */
M2C_UNK func_020537a8();                            /* extern */
M2C_UNK func_02055688(void *);                      /* extern */
M2C_UNK func_0205d5a0();                            /* extern */
M2C_UNK func_02066d28();                            /* extern */
M2C_UNK func_0207bf5c(M2C_UNK *);                   /* extern */
M2C_UNK func_0207c604();                            /* extern */
s32 func_0207d818();                                /* extern */
M2C_UNK func_0207d838(M2C_UNK);                     /* extern */
M2C_UNK func_02083d1c();                            /* extern */
M2C_UNK func_020862fc(M2C_UNK);                     /* extern */
M2C_UNK func_02086374();                            /* extern */
s32 func_02086bc8();                                /* extern */
M2C_UNK func_02086c78();                            /* extern */
s32 func_02086cb0();                                /* extern */
M2C_UNK func_02086d7c();                            /* extern */
M2C_UNK func_0208c5d4(M2C_UNK *);                   /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
extern M2C_UNK data_02116a7c;
extern M2C_UNK data_0214876c;
extern M2C_UNK data_02150c78;

void *func_02052e00(void *arg0) {
    s32 temp_r0_4;
    s32 temp_r0_5;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02116a7c;
    func_020862fc(-1);
    func_020522e8(arg0);
    func_0204eb40();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x44);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x74);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x78);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    if (M2C_FIELD(arg0, s32 *, 0x6C) != 0) {
        func_0207c604();
    }
    if (M2C_FIELD(arg0, s32 *, 0x70) != 0) {
        func_02086374();
    }
    func_020155d4();
    func_0202053c();
    func_0209ab0c(M2C_FIELD(arg0, s32 *, 0x48));
    func_0209ab0c(M2C_FIELD(arg0, s32 *, 0x50));
    func_0209ab0c(M2C_FIELD(arg0, s32 *, 0x4C));
    func_0208c5d4(&data_02150c78);
    func_02026768();
    func_020537a8();
    func_02021d00();
    func_02083d1c();
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0x24) != 0) {
        func_0204fed4(0);
    }
    func_0205d5a0();
    func_02066d28();
    temp_r0_4 = func_02086cb0();
    if (temp_r0_4 != 0) {
        func_02086d7c();
        func_0209ab0c(temp_r0_4);
    }
    temp_r0_5 = func_02086bc8();
    if (temp_r0_5 != 0) {
        func_02086c78();
        func_0209ab0c(temp_r0_5);
    }
    func_0202f91c();
    func_02024c6c(2);
    if (func_0207d818() != 0) {
        func_0207d838(0);
    }
    func_0207bf5c(&data_0214876c);
    func_02055688(arg0 + 0x7C);
    func_02014d54(arg0);
    return arg0;
}
