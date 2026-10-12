/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064fbc(s32);                             /* extern */
M2C_UNK func_020840ec(s32, s32, s32);               /* extern */

s32 func_02083f94(s32 arg0, s32 arg1) {
    func_020840ec(arg0, arg1, func_02064fbc(arg1 * 6));
    return arg0;
}
