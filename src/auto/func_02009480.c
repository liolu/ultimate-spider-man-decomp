/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02062c54(void *);                      /* extern */
M2C_UNK func_0209ab0c(s32);                         /* extern */
extern M2C_UNK data_020ecfb8;

void *func_02009480(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020ecfb8;
    func_0209ab0c(M2C_FIELD(arg0, s32 *, 0x1CC));
    func_02062c54(arg0);
    return arg0;
}
