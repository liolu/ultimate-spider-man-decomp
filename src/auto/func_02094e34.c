#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02094e34(void) {
    mov r1, #0x0
L_02094e38:
    mov r0, #0x0
L_02094e3c:
    orr r2, r1, r0
    mcr p15, 0, r2, c7, c10, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_02094e3c
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_02094e38
    mov r0, #0x0
    mcr p15, 0, r0, c7, c6, 0
    bx lr
}
// clang-format on
