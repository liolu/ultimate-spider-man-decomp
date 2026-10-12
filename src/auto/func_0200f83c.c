#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0200f83c(void) {
    ldr r3, [r1, #0x0]
    add r2, r0, #0x18
    str r3, [r0, #0x4]
    ldr r3, [r1, #0x4]
    mov r1, #0x1
    str r3, [r0, #0x8]
    swpb r0, r1, [r2]
    bx lr
}
// clang-format on
