/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018bcc(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0211f494;
extern M2C_UNK data_0211f5cc;
extern M2C_UNK data_02121900;
extern M2C_UNK data_02121978;

void func_02051dcc(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_02018bcc(&data_02121900);
        return;
    }
    func_02018bcc(&data_02121978);
    func_02018bcc(&data_0211f494);
    func_02018bcc(&data_0211f5cc);
}
