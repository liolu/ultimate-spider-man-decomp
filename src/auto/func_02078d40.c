#include "m2c.h"

void func_02078d40(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x50C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x470), s32 *, 0x108);
    M2C_FIELD(arg0, s32 *, 0x510) = (s32) (0 - M2C_FIELD(M2C_FIELD(arg0, void **, 0x470), s32 *, 0x10C));
    M2C_FIELD(arg0, s32 *, 0x514) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x470), s32 *, 0x10C);
    M2C_FIELD(arg0, s32 *, 0x518) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x470), s32 *, 0x110);
}
