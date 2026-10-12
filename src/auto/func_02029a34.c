/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02065628(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_02100f04;
extern M2C_UNK data_02100f08;
extern M2C_UNK data_02100f10;
extern M2C_UNK data_02100f18;
extern M2C_UNK data_02100f24;
extern M2C_UNK data_02100f2c;

s32 func_02029a34(s32 arg0, M2C_UNK arg1) {
    if (func_02065628(arg1, &data_02100f04) == 0) {
        return 0;
    }
    if (func_02065628(arg1, &data_02100f08) == 0) {
        return 0;
    }
    if (func_02065628(arg1, &data_02100f10) == 0) {
        return 1;
    }
    if (func_02065628(arg1, &data_02100f18) == 0) {
        return 3;
    }
    if (func_02065628(arg1, &data_02100f24) == 0) {
        return 2;
    }
    if (func_02065628(arg1, &data_02100f2c) == 0) {
        return 5;
    }
    return 4;
}
