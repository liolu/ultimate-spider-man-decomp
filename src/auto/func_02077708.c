#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02077708(void) {
    add ip, r0, r2, lsl #0x2
    add r0, r0, r2
    str r1, [ip, #0x8]
    add r1, r0, #0x14
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
