/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02005d54(void *, s32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0208580c(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02120748;
extern M2C_UNK data_02120760;

void func_02051154(void *arg0, s32 *arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_ip;

    temp_ip = *arg1;
    switch (temp_ip) {                              /* irregular */
        case 0x1AF:
            func_0208580c(M2C_FIELD(M2C_FIELD(arg0, void **, 0x164), s32 *, 0xBC), &data_02120748, 0, 0);
            break;
        case 0x1B1:
            func_0208580c(M2C_FIELD(M2C_FIELD(arg0, void **, 0x164), s32 *, 0xBC), &data_02120760, 0, 0);
            break;
    }
    func_02005d54(arg0, arg1, arg2, arg3);
}
