/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_02076c80(s32);                         /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
extern M2C_UNK data_020efa10;
extern M2C_UNK data_0211aeb4;
extern M2C_UNK data_0211be90;

void *func_0207b504(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211be90;
    func_0202f630();
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x478);
    if (temp_r4 != 0) {
        func_02076c80(temp_r4);
        func_0209ab0c(temp_r4);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211aeb4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efa10;
    return arg0;
}
