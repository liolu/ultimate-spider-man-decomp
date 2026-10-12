#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020012d0();
extern void func_02001c0c();
extern void func_02001c58();
extern void func_02001c78();
extern void func_02002dc0();
extern void func_0202718c();
extern void func_020579cc();
extern void func_02057b80();
extern void func_02057bc8();
extern void func_02058114();
extern void func_02058688();
extern void func_0205b58c();
extern void func_02064fc8();
extern void func_0207c284();
extern void func_0208c03c();
extern void r1();
extern void r4();
extern char data_020f8e0c[];
extern char data_020f8e24[];
extern char data_0213b6e0[];
extern char data_0214876c[];
extern char data_02150c78[];
// clang-format off
asm void func_020232a8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r6, r0
    ldr r1, [r6, #0x700]
    cmp r1, #0x0
    bne L_020235ac
    ldr r0, [r6, #0x748]
    cmp r0, #0x0
    moveq r4, #0x1f40
    ldr r0, [r6, #0x1b8]
    ldrne r4, =0x2710
    cmp r0, #0x0
    beq L_020232ec
    mov r0, r6
    bl func_02001c0c
    cmp r0, #0x0
    beq L_020233a8
L_020232ec:
    mov r0, r6
    bl func_02058688
    cmp r0, #0x0
    beq L_020233a8
    mov r0, r6
    bl func_02057bc8
    cmp r0, r4
    ble L_020233a8
    ldr r0, =data_0213b6e0
    ldr r1, [r6, #0x778]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    bgt L_020233a8
    ldr r0, [r6, #0x748]
    cmp r0, #0x4
    ldr r0, =0x777
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r6, r0
    swpb r0, r2, [r1]
    mov r1, #0x0
    ldrb r0, [r6, #0x777]
    cmp r0, #0x0
    ldr r0, =0x776
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r6, r0
    swpb r0, r3, [r2]
    mov r2, r1
    mov r0, r6
    bl func_0205b58c
    ldrb r0, [r6, #0x776]
    mov r2, #0x0
    mov r3, r2
    cmp r0, #0x0
    ldrne r1, =data_020f8e0c
    ldr r0, =data_0214876c
    ldreq r1, =data_020f8e24
    str r2, [sp, #0x0]
    bl func_0207c284
    ldr r0, =data_0213b6e0
    add sp, sp, #0x8
    ldr r0, [r0, #0x0]
    add r0, r0, #0xdc
    str r0, [r6, #0x778]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020233a8:
    ldr r0, [r6, #0x1b8]
    cmp r0, #0x0
    bne L_02023418
    mov r0, r6
    bl func_02058688
    cmp r0, #0x0
    bne L_02023418
    mov r0, #0x4
    bl func_02064fc8
    movs r5, r0
    movne r0, #0x0
    strne r0, [r5, #0x0]
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x5d
    bl func_0202718c
    mov r1, r0
    mov r0, r6
    ldr r4, [r0, #0x0]
    mov r2, r5
    ldr r4, [r4, #0x10c]
    mov r3, #0x1
    blx r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02023418:
    mov r0, r6
    bl func_02057bc8
    mov r5, r0
    mov r0, r6
    bl func_02057b80
    ldr r1, [r6, #0x14]
    mov r3, #0x1
    ldr r0, [r1, #0x210]
    cmp r0, #0x0
    bne L_02023464
    ldr r0, [r6, #0x18]
    mov r2, #0x0
    cmp r0, #0x0
    beq L_0202345c
    ldr r0, [r0, #0x210]
    cmp r0, #0x0
    movne r2, r3
L_0202345c:
    cmp r2, #0x0
    moveq r3, #0x0
L_02023464:
    cmp r3, #0x0
    bne L_020234e8
    ldr r0, [r1, #0x214]
    mov r2, #0x1
    cmp r0, #0x0
    bne L_020234a0
    ldr r0, [r6, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_02023498
    ldr r0, [r0, #0x214]
    cmp r0, #0x0
    movne r1, r2
L_02023498:
    cmp r1, #0x0
    moveq r2, #0x0
L_020234a0:
    cmp r2, #0x0
    bne L_020234e8
    ldrh r0, [r6, #0x38]
    ldr r1, [r6, #0x4c]
    mov r4, #0x1
    sub r0, r1, r0, lsr #0x1
    cmp r0, #0xa
    ble L_020234e0
    ldr r0, =data_02150c78
    bl func_0208c03c
    ldrh r1, [r6, #0x38]
    ldr r2, [r6, #0x4c]
    sub r3, r0, #0xa
    add r0, r2, r1, lsr #0x1
    cmp r0, r3
    movlt r4, #0x0
L_020234e0:
    cmp r4, #0x0
    beq L_02023510
L_020234e8:
    ldr r0, [r6, #0x1b8]
    cmp r0, #0x0
    beq L_02023510
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02023510:
    ldr r0, [r6, #0x714]
    cmp r5, r0
    ble L_02023548
    mov r0, r6
    bl func_02001c0c
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, r6
    bl func_020579cc
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02023548:
    mov r0, r6
    bl func_02001c58
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x1bc]
    blx r1
    movs r1, r0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r6
    bl func_02002dc0
    ldr r0, [r6, #0x708]
    add r0, r0, #0x20
    bl func_020012d0
    mov r1, r0
    mov r0, r6
    bl func_02001c78
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020235ac:
    bl func_02058114
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
