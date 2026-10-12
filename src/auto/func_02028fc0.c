#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02028fc0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, [r0, #0x18]
    cmp r1, r2
    bge L_02029064
    add r1, r0, r1, lsl #0x2
    ldr r1, [r1, #0x8]
    ldr r5, [r0, #0x4]
    ldr r0, [r1, #0x0]
    add r2, r5, #0x18
    str r0, [r5, #0x0]
    ldr r0, [r1, #0x4]
    add r3, r5, #0x19
    str r0, [r5, #0x4]
    ldr r0, [r1, #0x8]
    add r4, r1, #0x1a
    str r0, [r5, #0x8]
    ldr r0, [r1, #0xc]
    add lr, r5, #0x1a
    str r0, [r5, #0xc]
    ldr r0, [r1, #0x10]
    mov ip, #0x800
    str r0, [r5, #0x10]
    ldr r0, [r1, #0x14]
    str r0, [r5, #0x14]
    ldrb r0, [r1, #0x18]
    swpb r0, r0, [r2]
    ldrb r0, [r1, #0x19]
    swpb r0, r0, [r3]
L_02029034:
    ldrb r0, [r4], #0x1
    ldrb r1, [r4], #0x1
    subs ip, ip, #0x1
    swpb r0, r0, [lr]
    add lr, lr, #0x1
    swpb r0, r1, [lr]
    add lr, lr, #0x1
    bne L_02029034
    add sp, sp, #0x4
    mov r0, #0x1
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02029064:
    mov r0, #0x0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
