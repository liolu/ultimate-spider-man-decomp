/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f630();                            /* extern */
M2C_UNK func_02062c54(void *);                      /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
extern M2C_UNK data_020eb5e8;
extern M2C_UNK data_020ecb08;

void *func_02007338(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ecb08;
    func_0202f630();
    temp_r0 = M2C_FIELD(arg0, void ***, 0x1C8);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_0209ab0c(M2C_FIELD(arg0, s32 *, 0x18C));
    if (M2C_FIELD(arg0, u8 *, 0x1E0) != 0) {
        func_0209ab0c(M2C_FIELD(arg0, s32 *, 0x1DC));
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020eb5e8;
    func_02062c54(arg0);
    return arg0;
}
