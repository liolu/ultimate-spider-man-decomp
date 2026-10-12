#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020782ec(void) {
    ldrb r3, [r1, #0x8]
    add ip, r0, #0x8
    swpb r3, r3, [ip]
    ldr r1, [r1, #0x0]
    str r1, [r0, #0x0]
    ldr r3, [r0, #0x4]
    ldr r1, [r0, #0x0]
    sub r2, r3, r2
    cmp r1, r2
    strgt r2, [r0, #0x0]
    bx lr
}
// clang-format on
