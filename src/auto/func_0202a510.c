/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028fb4(M2C_UNK *);                   /* extern */
void *func_02046e94(M2C_UNK *);                     /* extern */
extern M2C_UNK data_020b4bcc;
extern M2C_UNK data_020b4e5c;
extern M2C_UNK data_0213d440;
extern M2C_UNK data_02143e44;

void func_0202a510(void) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_0213d440, s32 *, 0x34);
    if (temp_r4 < 0) {
        func_02028fb4(&data_020b4bcc);
        return;
    }
    if (temp_r4 >= 0x64) {
        func_02028fb4(&data_020b4e5c);
        return;
    }
    func_02028fb4(M2C_FIELD(((temp_r4 * 0x24) + M2C_FIELD(func_02046e94(&data_02143e44), s32 *, 0x64)), M2C_UNK **, 0x20));
}
