/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088834(void *, M2C_UNK);             /* extern */
s32 func_020981b4(M2C_UNK *, s32, u16, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK func_020882ac;

void func_020881a0(void *arg0, void *arg1) {
    if (M2C_FIELD(arg1, u16 *, 2) == 0) {
        if (M2C_FIELD(arg0, s32 *, 4) == 1) {
            M2C_FIELD(arg0, s32 *, 0x10) =
                func_020981b4(&func_020882ac, M2C_FIELD(arg0, s32 *, 0x614), (u16) M2C_FIELD(arg0, s32 *, 0x624),
                              M2C_FIELD(arg0, s32 *, 0x610), (s32) (u16) M2C_FIELD(arg0, s32 *, 0x620), 1, 0, 0, 0, 0, 0);
        } else {
            M2C_FIELD(arg0, s32 *, 0x10) =
                func_020981b4(&func_020882ac, M2C_FIELD(arg0, s32 *, 0x60C), (u16) M2C_FIELD(arg0, s32 *, 0x61C),
                              M2C_FIELD(arg0, s32 *, 0x608), (s32) (u16) M2C_FIELD(arg0, s32 *, 0x618), 1, 0, 0, 0, 0, 0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x10) == 2) {
            return;
        }
        func_02088834(arg0, 9);
        return;
    }
    func_02088834(arg0, 9);
}
