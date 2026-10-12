/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200d6e8(M2C_UNK, M2C_UNK *, s32);         /* extern */
s32 func_02046fa4(M2C_UNK *);                       /* extern */
s32 func_0206570c(M2C_UNK *);                       /* extern */
M2C_UNK func_02084df0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02101564;
extern M2C_UNK data_02101570;
extern M2C_UNK data_0210157c;
extern M2C_UNK data_02101588;
extern M2C_UNK data_02143e44;
extern M2C_UNK data_0214876c;

void func_0202c544(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0xDC) == func_0200d6e8(0, &data_02101564, func_0206570c(&data_02101564))) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0xDC) == func_0200d6e8(0, &data_02101570, func_0206570c(&data_02101570))) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0xDC) == func_0200d6e8(0, &data_0210157c, func_0206570c(&data_0210157c))) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0xDC) == func_0200d6e8(0, &data_02101588, func_0206570c(&data_02101588))) {
        if (func_02046fa4(&data_02143e44) != 0) {
            func_02084df0(&data_0214876c, 0x14, 0);
            return;
        }
        func_02084df0(&data_0214876c, 0x15, 0);
        return;
    }
    func_02084df0(&data_0214876c, 0, 1);
}
