#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02048074(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r3, [r0, #0x8]
    ldr r0, [r0, #0xc]
    movs r4, r1, lsr #0x2
    add r5, r3, r0
    beq L_020480bc
L_02048090:
    ldrb r3, [r5, #0x0]
    ldrb r0, [r5, #0x1]
    ldrb ip, [r5, #0x2]
    ldrb lr, [r5, #0x3]
    add r0, r3, r0, lsl #0x8
    add r0, r0, ip, lsl #0x10
    add r0, r0, lr, lsl #0x18
    str r0, [r2], #0x4
    add r5, r5, #0x4
    subs r4, r4, #0x1
    bne L_02048090
L_020480bc:
    ands r1, r1, #0x3
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
L_020480cc:
    ldrb r0, [r5], #0x1
    subs r1, r1, #0x1
    swpb r0, r0, [r2]
    add r2, r2, #0x1
    bne L_020480cc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
