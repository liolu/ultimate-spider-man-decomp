#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0207d2b0(void) {
    mov r3, #0x1c
L_0207d2b4:
    mov r2, r1, lsr r3
    and r2, r2, #0xf
    cmp r2, #0xa
    addlt r2, r2, #0x30
    addge r2, r2, #0x57
    swpb r2, r2, [r0]
    add r0, r0, #0x1
    subs r3, r3, #0x4
    bpl L_0207d2b4
    mov r1, #0x0
    swpb r1, r1, [r0]
    bx lr
}
// clang-format on
