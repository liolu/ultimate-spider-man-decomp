/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630(void *);                      /* extern */
M2C_UNK func_02062c54(void *);                      /* extern */
M2C_UNK func_0209ab0c(void *);                      /* extern */
extern M2C_UNK data_020f7424;
extern s32 data_0213b2fc;

void *func_0200f53c(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020f7424;
    data_0213b2fc -= 1;
    temp_r0 = M2C_FIELD(arg0, void ***, 0x17C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0202f630(arg0);
    func_02062c54(arg0);
    func_0209ab0c(arg0);
    return arg0;
}
