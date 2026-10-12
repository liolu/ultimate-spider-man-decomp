#include "m2c.h"

s32 func_0206ba94(u32 arg0) {
    return ((arg0 << 8) & 0xFF0000) | (((arg0 >> 8) & 0xFF00) | (arg0 >> 0x18)) | (arg0 << 0x18);
}
