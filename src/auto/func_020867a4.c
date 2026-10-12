#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020867a4(void) {
    add r2, r0, #0x53
    mov r1, #0x0
    swpb r1, r1, [r2]
L_020867b0:
    ldrb r1, [r0, #0x52]
    cmp r1, #0x0
    bne L_020867b0
    bx lr
}
// clang-format on
