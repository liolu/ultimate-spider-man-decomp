/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207c604(s32);                         /* extern */
M2C_UNK func_0209ab0c(s32 *);                       /* extern */
extern s32 *data_0214617c;

void func_0205d5a0(void) {
    func_0207c604(*data_0214617c);
    *data_0214617c = 0;
    func_0209ab0c(data_0214617c);
    data_0214617c = NULL;
}
