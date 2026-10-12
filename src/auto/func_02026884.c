/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02026834(void *);                      /* extern */
s32 func_02064fbc(s32);                             /* extern */

void *func_02026884(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = func_02064fbc(arg1 * 4);
    func_02026834(arg0);
    return arg0;
}
