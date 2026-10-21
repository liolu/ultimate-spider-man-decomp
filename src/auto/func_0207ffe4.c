/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02052b20(void *);                      /* extern */
M2C_UNK func_02087ff0(void *);                      /* extern */
M2C_UNK func_0208bc14(s32, M2C_UNK);                /* extern */
s32 func_0208bfbc();                                /* extern */
s32 func_0208bfcc();                                /* extern */
extern M2C_UNK data_020efaf8;
extern s32 data_02119eb0;
extern M2C_UNK data_0211c2a4;
extern s32 data_02147ad0;

void *func_0207ffe4(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211c2a4;
    if ((M2C_FIELD(arg0, u8 *, 0x610) == 1) && (func_0208bfcc() == 1)) {
        func_0208bc14(func_0208bfbc(), 3);
    }
    data_02119eb0 = 1;
    data_02147ad0 = 0;
    temp_r0       = M2C_FIELD(arg0, void ***, 0xE4);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0xF0);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 4)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x638);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(*temp_r0_3, M2C_UNK(**)(), 4)(temp_r0_3);
    }
    func_02087ff0(arg0 + 0xF4);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020efaf8;
    func_02052b20(arg0);
    return arg0;
}
