#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0205c958(void) {
    mov r3, #0x0
    str r3, [r0, #0x0]
    mov r1, #0x7f
    str r1, [r0, #0x4]
    str r1, [r0, #0x8]
    add r2, r0, #0xc
    swpb r1, r3, [r2]
    add r2, r0, #0xd
    swpb r1, r3, [r2]
    bx lr
}
// clang-format on
