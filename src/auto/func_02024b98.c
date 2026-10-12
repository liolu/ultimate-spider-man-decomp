/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202ed44(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0213d9b4;
extern M2C_UNK data_0213ddc0;

void func_02024b98(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x36) != 0) {
        func_0202ed44(&data_0213ddc0);
        return;
    }
    func_0202ed44(&data_0213d9b4);
}
