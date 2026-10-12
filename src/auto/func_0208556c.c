#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0208556c(void) {
    mov r3, #0x0
    swpb r1, r3, [r0]
    add r2, r0, #0x1
    mov r1, #0x7f
    swpb r1, r1, [r2]
    mov r1, #0x8000
    str r1, [r0, #0x4]
    add r2, r0, #0x9
    swpb r1, r3, [r2]
    add r2, r0, #0x8
    swpb r1, r3, [r2]
    bx lr
}
// clang-format on
