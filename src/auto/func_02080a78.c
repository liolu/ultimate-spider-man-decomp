/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02080598(void *);                      /* extern */
void *func_0208bfbc();                              /* extern */

void func_02080a78(void *arg0) {
    if (M2C_FIELD(func_0208bfbc(), s32 *, 8) != 7) {
        return;
    }
    func_02080598(arg0);
    M2C_FIELD(arg0, s32 *, 4) = 4;
}
