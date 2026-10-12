#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0203e5b8(void) {
    sub sp, sp, #0x10
    ldr r3, [r1, #0x4c]
    ldr r1, [r1, #0x50]
    str r3, [sp, #0x0]
    str r1, [sp, #0x4]
    ldr r2, [r0, #0x4c]
    ldr r1, [r0, #0x50]
    str r2, [sp, #0x8]
    str r1, [sp, #0xc]
    ldrb ip, [r0, #0x15e]
    cmp ip, #0x0
    beq L_0203e610
    cmp r3, r2
    blt L_0203e610
    ldr r1, =0x15e
    cmp ip, #0x0
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r0, r1
    swpb r0, r2, [r1]
    add sp, sp, #0x10
    bx lr
L_0203e610:
    cmp ip, #0x0
    addne sp, sp, #0x10
    bxne lr
    ldr r2, [sp, #0x0]
    ldr r1, [sp, #0x8]
    cmp r2, r1
    addge sp, sp, #0x10
    bxge lr
    ldr r1, =0x15e
    cmp ip, #0x0
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r0, r1
    swpb r0, r2, [r1]
    add sp, sp, #0x10
    bx lr
}
// clang-format on
