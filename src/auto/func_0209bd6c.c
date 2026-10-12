/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02094e68(void *, M2C_UNK);             /* extern */
extern void *data_02154620;

u16 func_0209bd6c(void) {
    func_02094e68(data_02154620, 0x280);
    return M2C_FIELD(data_02154620, u16 *, 8);
}
