/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208c404(M2C_UNK, M2C_UNK);
void func_0208c470(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020911d0(void *, void *, void *);

void func_0208c41c(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp0[16];

    func_0208c470(arg0, func_0208c404(arg0, arg1), arg2);
    func_0208c470(arg0, arg1, (s32) sp0);
    func_020911d0((void *) arg2, sp0, (void *) arg2);
}
