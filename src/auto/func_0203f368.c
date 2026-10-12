#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0203f368(void) {
    ldr r2, [r0, #0x30]
    cmp r2, #0x2
    bne L_0203f380
    ldrb r1, [r0, #0x15e]
    cmp r1, #0x0
    beq L_0203f394
L_0203f380:
    cmp r2, #0x1
    bxne lr
    ldrb r1, [r0, #0x15e]
    cmp r1, #0x0
    bxeq lr
L_0203f394:
    cmp r1, #0x0
    ldr r1, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r0, r1
    swpb r0, r2, [r1]
    bx lr
}
// clang-format on
