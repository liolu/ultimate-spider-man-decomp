#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02063598();
// clang-format off
asm void func_02064374(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4c
    mov r10, r0
    add r0, r10, #0x108
    str r0, [sp, #0x20]
    mov r0, #0x0
    mov r6, r10
    add r11, r10, #0x10c
    str r0, [sp, #0x1c]
    str r0, [sp, #0x24]
    str r0, [sp, #0x28]
    str r0, [sp, #0x2c]
    str r0, [sp, #0x30]
    str r0, [sp, #0x34]
    str r0, [sp, #0x38]
    str r0, [sp, #0x3c]
    str r0, [sp, #0x40]
    str r0, [sp, #0x44]
    mov r5, #0x1
    mov r4, #0x2
    str r0, [sp, #0x48]
L_020643c8:
    ldr r0, [sp, #0x1c]
    ldr r2, [r10, #0x4c4]
    cmp r0, #0x0
    moveq r1, r5
    ldrb r0, [r10, #0x4b4]
    ldrne r1, [sp, #0x24]
    cmp r0, r1
    moveq r0, r5
    ldrne r0, [sp, #0x28]
    ldr r1, [r10, #0x4b8]
    rsb r7, r0, #0x0
    add r0, r7, #0x1
    mla r8, r0, r2, r1
    ldrb r0, [r10, #0x4d7]
    mla r9, r7, r2, r1
    cmp r0, #0x0
    beq L_02064480
    mvn r0, #0x0
    cmp r7, r0
    moveq r1, r4
    movne r1, r5
    cmp r7, #0x0
    moveq r3, r5
    ldr r2, [r10, #0x4]
    ldr r0, =0x5dc
    ldrne r3, [sp, #0x2c]
    add r0, r2, r0
    str r0, [sp, #0x0]
    str r1, [sp, #0x4]
    str r3, [sp, #0x8]
    ldr r0, [sp, #0x30]
    str r5, [sp, #0xc]
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    mov r0, r10
    mov r1, r9
    mov r3, r8
    bl func_02063598
    str r0, [r6, #0xe8]
    mvn r0, #0x0
    cmp r7, r0
    moveq r0, r5
    ldrne r0, [sp, #0x34]
    add r1, r6, #0xf0
    swpb r0, r0, [r1]
L_02064480:
    ldrb r0, [r10, #0x4d8]
    cmp r0, #0x0
    beq L_02064500
    mvn r0, #0x0
    ldr r1, [r10, #0x8]
    cmp r7, r0
    ldr r0, =0xfffffa24
    str r1, [sp, #0x0]
    add r2, r1, r0
    moveq r0, r4
    movne r0, r5
    cmp r7, #0x0
    moveq r3, r5
    str r0, [sp, #0x4]
    ldrne r3, [sp, #0x38]
    ldr r0, [sp, #0x3c]
    str r3, [sp, #0x8]
    str r0, [sp, #0xc]
    str r5, [sp, #0x10]
    str r0, [sp, #0x14]
    str r0, [sp, #0x18]
    mov r0, r10
    mov r1, r9
    mov r3, r8
    bl func_02063598
    str r0, [r6, #0xf4]
    mvn r0, #0x0
    cmp r7, r0
    moveq r0, r5
    ldrne r0, [sp, #0x40]
    add r1, r6, #0xfc
    swpb r0, r0, [r1]
L_02064500:
    ldrb r0, [r10, #0x4d9]
    cmp r0, #0x0
    beq L_02064570
    mvn r0, #0x0
    cmp r7, r0
    ldr r1, [r10, #0x4bc]
    ldr r0, =0xffffe4a8
    add r2, r1, r0
    sub r0, r1, #0x1
    moveq r1, r5
    movne r1, r4
    str r0, [sp, #0x0]
    cmp r7, #0x0
    moveq r3, r5
    str r1, [sp, #0x4]
    ldrne r3, [sp, #0x44]
    ldr r0, [sp, #0x48]
    str r3, [sp, #0x8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x20]
    mov r1, r9
    str r0, [sp, #0x14]
    mov r3, r8
    mov r0, r10
    str r11, [sp, #0x18]
    bl func_02063598
    str r0, [r6, #0x100]
L_02064570:
    ldr r0, [sp, #0x20]
    add r6, r6, #0x128
    add r0, r0, #0x128
    str r0, [sp, #0x20]
    ldr r0, [sp, #0x1c]
    add r11, r11, #0x128
    add r0, r0, #0x1
    str r0, [sp, #0x1c]
    cmp r0, #0x2
    blt L_020643c8
    add sp, sp, #0x4c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
