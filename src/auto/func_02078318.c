#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02078318(void) {
    mov r1, #0x0
    str r1, [r0, #0x0]
    str r1, [r0, #0x4]
    add r2, r0, #0x8
    mov r3, #0x1
    swpb r1, r3, [r2]
    add r2, r0, #0x9
    swpb r1, r3, [r2]
    add r1, r0, #0xa
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
