/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 *func_0200166c(void *);                         /* extern */
s32 *func_0200168c();                               /* extern */

void func_02001988(void *arg0) {
    *func_0200168c() = *M2C_FIELD(arg0, s32 **, 0xBC);
    *func_0200166c(arg0) = 0;
}
