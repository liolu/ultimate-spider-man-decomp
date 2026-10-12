/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020926fc(u16);                         /* extern */
extern u16 data_02151b24;

u16 func_02091b9c(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0 = 0;
    data_02151b24 |= temp_r4;
    func_020926fc(temp_r4);
    return temp_r4;
}
