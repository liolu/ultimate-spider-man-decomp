#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02047144(void) {
    add r3, r0, #0x1c
    ldrb r2, [r3, #0x0]
    and r0, r1, #0x1
    bic r1, r2, #0x80
    orr r0, r1, r0, lsl #0x7
    swpb r0, r0, [r3]
    bx lr
}
// clang-format on
