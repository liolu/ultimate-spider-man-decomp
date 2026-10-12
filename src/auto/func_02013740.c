#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201388c();
extern void func_020138bc();
extern void func_020139ec();
// clang-format off
asm void func_02013740(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r5, r2
    ldr r2, [r5, #0x4]
    mov r7, r0
    cmp r2, #0xc0
    mov r6, r1
    mov r4, r3
    addge sp, sp, #0x4
    ldmgefd sp!, {r4, r5, r6, r7, lr}
    bxge lr
    ldr r1, [r7, #0xc]
    add r1, r2, r1
    cmp r1, #0x0
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, r6, r7, lr}
    bxle lr
    bl func_020139ec
    add r2, r7, #0x34
    ldrh r1, [r2, #0x0]
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    bic r1, r1, #0xc00
    and r0, r0, #0x3
    orr r0, r1, r0, lsl #0xa
    strh r0, [r2, #0x0]
    ldr r2, [r5, #0x4]
    ldr r0, [r7, #0x24]
    add r1, r7, #0x30
    sub r0, r2, r0
    swpb r0, r0, [r1]
    ldrb r1, [r6, #0x0]
    cmp r1, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_020137d0:
    ldr r2, [r5, #0x0]
    mov r0, r7
    bl func_0201388c
    cmp r0, #0x0
    beq L_020137f4
    ldrb r1, [r6, #0x0]
    ldr r2, [r5, #0x0]
    mov r0, r7
    bl func_020138bc
L_020137f4:
    ldrb r0, [r6, #0x0]
    ldr r1, [r7, #0x8]
    ldr r2, [r5, #0x0]
    ldrb r0, [r1, r0]
    add r0, r2, r0
    str r0, [r5, #0x0]
    ldrb r1, [r6, #0x1]!
    cmp r1, #0x0
    bne L_020137d0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
