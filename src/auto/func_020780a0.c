#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020780a0(void) {
    str r1, [r0, #0x0]
    str r2, [r0, #0x4]
    add r2, r0, #0x8
    swpb r1, r3, [r2]
    ldrb r1, [sp, #0x0]
    add r2, r0, #0x9
    ldrb r3, [sp, #0x4]
    swpb r1, r1, [r2]
    add r1, r0, #0xa
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
