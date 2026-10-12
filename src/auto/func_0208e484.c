/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208e1b4();                            /* extern */
M2C_UNK func_0208e2bc();                            /* extern */
M2C_UNK func_02096244();                            /* extern */
s32 func_02096428(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02096450(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_021519d0;
extern s32 data_021519d4;
extern M2C_UNK func_0208e220;
extern M2C_UNK func_0208e280;

void func_0208e484(void) {
    if (data_021519d0 != 0) {
        return;
    }
    data_021519d0 = 1;
    func_0208e1b4();
    func_02096244();
    do {

    } while (func_02096428(0xD, 1) == 0);
    func_02096450(0xD, &func_0208e280);
    func_0208e2bc();
    func_02096450(0xD, NULL);
    func_02096450(0xD, &func_0208e220);
    data_021519d4 = 0;
}
