#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbcb8();
extern void func_0200b370();
extern void func_0200b3a4();
extern void func_02033864();
extern void func_0203637c();
extern void func_0203d0c4();
extern void func_0203d2a4();
extern void func_0207c284();
extern void r1();
extern char data_0213b110[];
extern char data_0214876c[];
// clang-format off
asm void func_0203cb0c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    mov r4, r0
    ldrb r1, [r4, #0x23c]
    cmp r1, #0x0
    beq L_0203cb38
    bl func_0203637c
    add r1, r4, #0x23c
    mov r2, #0x0
    swpb r0, r2, [r1]
    str r2, [r4, #0x240]
L_0203cb38:
    ldr r0, [r4, #0x1e8]
    cmp r0, #0x0
    addgt r1, r4, #0x1e8
    ldrgt r0, [r1, #0x0]
    subgt r0, r0, #0x1
    strgt r0, [r1, #0x0]
    ldrb r3, [r4, #0x15e]
    ldr r2, [r4, #0x30]
    ldr r5, [r4, #0x4c]
    ldr lr, [r4, #0x50]
    add r1, sp, #0x4
    str r5, [sp, #0xc]
    str lr, [sp, #0x10]
    ldrh ip, [r4, #0x3a]
    add r0, r4, #0x1ec
    sub ip, lr, ip, lsr #0x1
    str ip, [sp, #0x10]
    str r5, [sp, #0x4]
    str ip, [sp, #0x8]
    bl func_02033864
    add r0, r4, #0x1fc
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    ldrb r0, [r4, #0x1c]
    mov r0, r0, lsl #0x1b
    movs r0, r0, lsr #0x1f
    beq L_0203cc0c
    ldrb r0, [r4, #0x1c4]
    cmp r0, #0x0
    beq L_0203cc0c
    add r1, r4, #0x1ac
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x1ac]
    add r1, r4, #0x1c4
    cmp r0, #0x3
    moveq r0, #0x0
    streq r0, [r4, #0x1ac]
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r1, [r4, #0xbc]
    mov r0, r4
    ldr r1, [r1, #0x9c]
    ldrh r2, [r1, #0x6]
    ldrh r1, [r1, #0x4]
    sub r1, r2, r1
    add r5, r1, #0x1
    bl func_01ffbcb8
    add r0, r0, #0x14
    add r0, r0, r5
    str r0, [r4, #0x238]
L_0203cc0c:
    ldr r0, =data_0213b110
    ldr r0, [r0, #0x0]
    bl func_0200b3a4
    cmp r0, #0x0
    movne r0, #0x1800
    strne r0, [r4, #0x120]
    bne L_0203cc48
    ldr r0, =data_0213b110
    ldr r0, [r0, #0x0]
    bl func_0200b370
    cmp r0, #0x0
    movne r0, #0xc00
    strne r0, [r4, #0x120]
    moveq r0, #0x1000
    streq r0, [r4, #0x120]
L_0203cc48:
    ldr r0, [r4, #0x194]
    cmp r0, #0x18
    beq L_0203cc78
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc4]
    blx r1
    ldr r1, [r4, #0x188]
    ldr r0, [r0, #0x0]
    ands r0, r1, r0
    moveq r0, #0x0
    streq r0, [r4, #0x188]
L_0203cc78:
    mov r0, r4
    bl func_0203d2a4
    mov r0, r4
    bl func_0203d0c4
    cmp r0, #0x0
    beq L_0203ccb0
    ldr r1, [r4, #0x228]
    cmp r1, #0x0
    beq L_0203ccb0
    mov r2, #0x0
    ldr r0, =data_0214876c
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
L_0203ccb0:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x18c]
    blx r1
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x144]
    blx r1
    add r1, r4, #0x1f8
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
