/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028fb4(M2C_UNK *);                       /* extern */
extern s32 data_020b46b0;
extern M2C_UNK data_020b4c10;
extern M2C_UNK data_020b4d0c;
extern M2C_UNK data_020b4d24;
extern M2C_UNK data_020b4e18;

s32 func_02081f60(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x34);
    if (temp_r2 == (data_020b46b0 - 4)) {
        return func_02028fb4(&data_020b4d0c);
    }
    if (temp_r2 == (data_020b46b0 - 3)) {
        return func_02028fb4(&data_020b4c10);
    }
    if (temp_r2 == (data_020b46b0 - 2)) {
        return func_02028fb4(&data_020b4e18);
    }
    if (temp_r2 != (data_020b46b0 - 1)) {
        return 0;
    }
    return func_02028fb4(&data_020b4d24);
}
