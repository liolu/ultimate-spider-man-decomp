/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020219fc(s32);                         /* extern */
M2C_UNK func_02024c6c(M2C_UNK);                     /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
extern s32 data_0213d34c;

void func_02021d00(void) {
    s32 temp_r4;

    temp_r4 = data_0213d34c;
    if (temp_r4 != 0) {
        func_020219fc(temp_r4);
        func_0209ab0c(temp_r4);
    }
    data_0213d34c = 0;
    func_02024c6c(3);
}
