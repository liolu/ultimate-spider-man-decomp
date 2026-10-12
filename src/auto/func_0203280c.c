/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020328f8(void *);                      /* extern */
s32 func_02046fcc(M2C_UNK *);                       /* extern */
M2C_UNK func_0205af2c(void *);                      /* extern */
extern M2C_UNK data_02143e44;

void func_0203280c(void *arg0) {
    if (func_02046fcc(&data_02143e44) != 0) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u8 *, 0x97) == 0) {
            return;
        }
        func_020328f8(arg0);
        return;
    }
    func_0205af2c(arg0);
}
