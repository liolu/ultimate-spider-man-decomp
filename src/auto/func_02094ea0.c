#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02094ea0(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02094ea8:
    mrs r2, cpsr
    orr r3, r2, #0x80
    and r2, r2, #0x80
    msr cpsr_c, r3
    mcr p15, 0, r0, c7, c10, 1
    mcr p15, 0, r0, c7, c6, 1
    mrs r3, cpsr
    bic r3, r3, #0x80
    orr r3, r3, r2
    msr cpsr_c, r3
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02094ea8
    bx lr
}
// clang-format on
