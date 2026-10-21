/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02062c54(void *);                      /* extern */
extern M2C_UNK data_020ef510;

void *func_0200a8d0(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ef510;
    temp_r0                        = M2C_FIELD(arg0, void ***, 0x17C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
    }
    func_02062c54(arg0);
    return arg0;
}
