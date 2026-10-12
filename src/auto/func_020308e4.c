/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02030a4c(M2C_UNK *);                       /* extern */
M2C_UNK func_02064e64(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020932fc();                            /* extern */
M2C_UNK func_02093348(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020933bc();                            /* extern */
M2C_UNK func_020933e0();                            /* extern */
M2C_UNK func_02093438(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020934ac();                            /* extern */
M2C_UNK func_02094e84(M2C_UNK *, M2C_UNK);          /* extern */
extern s32 data_0213e224;
extern M2C_UNK data_0213e408;
extern M2C_UNK data_0213e5a0;
extern M2C_UNK data_0213f400;
extern M2C_UNK data_02141400;

void func_020308e4(void) {
    func_02064e64(0x05000000, data_0213e224, 0x800);
    if (func_02030a4c(&data_0213e408) == 0) {
        func_02094e84(&data_0213f400, 0x2000);
        func_020934ac();
        func_02093438(&data_0213f400, 0, 0x2000);
        func_020933e0();
    }
    if (func_02030a4c(&data_0213e5a0) != 0) {
        return;
    }
    func_02094e84(&data_02141400, 0x2000);
    func_020933bc();
    func_02093348(&data_02141400, 0, 0x2000);
    func_020932fc();
}
