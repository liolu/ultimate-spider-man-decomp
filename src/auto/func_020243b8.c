#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020243b8(void) {
    add r3, r0, #0x34
    swpb r2, r1, [r3]
    add r3, r0, #0x38
    ldr r2, [r3, #0x0]
    and r0, r1, #0x1
    bic r1, r2, #0x10000000
    orr r0, r1, r0, lsl #0x1c
    str r0, [r3, #0x0]
    bx lr
}
// clang-format on
