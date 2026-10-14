/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02046c6c(M2C_UNK *);                       /* extern */
s32 func_02046cc8(M2C_UNK *, s32, M2C_UNK);         /* extern */
void *func_02046d38(M2C_UNK *, s32);                /* extern */
s32 func_02065628(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_02065668(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020656cc(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_020f8778;
extern M2C_UNK data_020f8784;
extern M2C_UNK data_020f8788;
extern M2C_UNK data_020f8790;
extern M2C_UNK data_0213b6e8;
extern M2C_UNK data_02143e44;

void func_02013b94(void *arg0, M2C_UNK *arg1) {
    void *temp_r5;
    void *temp_r5_2;

    if (func_02065628(arg1, &data_020f8778) == 0) {
        temp_r5 = func_02046d38(&data_02143e44, func_02046c6c(&data_02143e44));
        func_02065668(&data_0213b6e8, &data_020f8784);
        func_020656cc(&data_0213b6e8, M2C_FIELD(temp_r5, M2C_UNK **, 0));
        func_020656cc(&data_0213b6e8, &data_020f8788);
        M2C_FIELD(arg0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r5, M2C_UNK **, 0);
        M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213b6e8;
        M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(temp_r5, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(temp_r5, s8 *, 8);
        return;
    }
    if (func_02065628(arg1, &data_020f8790) == 0) {
        temp_r5_2 = func_02046d38(&data_02143e44, func_02046cc8(&data_02143e44, M2C_FIELD(&data_02143e44, s32 *, 4), 1));
        func_02065668(&data_0213b6e8, &data_020f8784);
        func_020656cc(&data_0213b6e8, M2C_FIELD(temp_r5_2, M2C_UNK **, 0));
        func_020656cc(&data_0213b6e8, &data_020f8788);
        M2C_FIELD(arg0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(temp_r5_2, M2C_UNK **, 0);
        M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213b6e8;
        M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(temp_r5_2, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0xC)    = (s32) M2C_FIELD(temp_r5_2, s8 *, 8);
        return;
    }
    func_02065668(&data_0213b6e8, &data_020f8784);
    func_020656cc(&data_0213b6e8, arg1);
    func_020656cc(&data_0213b6e8, &data_020f8788);
    M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0213b6e8;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0xC)    = -1;
}
