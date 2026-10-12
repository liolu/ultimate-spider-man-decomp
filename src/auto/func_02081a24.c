/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02026a7c(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_02036338(void *, M2C_UNK);             /* extern */
s32 *func_02082640(M2C_UNK *, M2C_UNK);             /* extern */
extern M2C_UNK data_0213d440;
extern M2C_UNK data_02150bb8;

void func_02081a24(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x26E) == 0) {
        if ((*func_02082640(&data_02150bb8, 0) != 3) || (arg1 <= 0)) {
            func_02026a7c(&data_0213d440, 1, arg1);
        } else {
            func_02026a7c(&data_0213d440, 1, arg1 + 0x12C);
        }
        func_02036338(arg0, 1);
        return;
    }
    if ((*func_02082640(&data_02150bb8, 1) != 3) || (arg1 <= 0)) {
        func_02026a7c(&data_0213d440, 2, arg1);
    } else {
        func_02026a7c(&data_0213d440, 2, arg1 + 0x12C);
    }
    func_02036338(arg0, 2);
}
