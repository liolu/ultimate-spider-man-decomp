#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fc8();
// clang-format off
asm void func_02029074(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r0, =0x101c
    bl func_02064fc8
    ldr r1, [r4, #0x18]
    mov ip, #0x800
    add r1, r4, r1, lsl #0x2
    str r0, [r1, #0x8]
    ldr r0, [r4, #0x4]
    ldr r2, [r4, #0x18]
    ldr r1, [r0, #0x0]
    add r2, r4, r2, lsl #0x2
    ldr r6, [r2, #0x8]
    add r5, r0, #0x1a
    str r1, [r6, #0x0]
    ldr r1, [r0, #0x4]
    add r2, r6, #0x18
    str r1, [r6, #0x4]
    ldr r1, [r0, #0x8]
    add r3, r6, #0x19
    str r1, [r6, #0x8]
    ldr r1, [r0, #0xc]
    add lr, r6, #0x1a
    str r1, [r6, #0xc]
    ldr r1, [r0, #0x10]
    str r1, [r6, #0x10]
    ldr r1, [r0, #0x14]
    str r1, [r6, #0x14]
    ldrb r1, [r0, #0x18]
    swpb r1, r1, [r2]
    ldrb r0, [r0, #0x19]
    swpb r0, r0, [r3]
L_020290f4:
    ldrb r0, [r5], #0x1
    ldrb r1, [r5], #0x1
    subs ip, ip, #0x1
    swpb r0, r0, [lr]
    add lr, lr, #0x1
    swpb r0, r1, [lr]
    add lr, lr, #0x1
    bne L_020290f4
    add r1, r4, #0x18
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x18]
    sub r0, r0, #0x1
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
