#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbf4c();
extern void func_01ffbfdc();
extern void func_01ffc03c();
extern void func_01ffc068();
extern void func_0202718c();
extern void func_02036a9c();
extern void r1();
// clang-format off
asm void func_02037268(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    add r0, r5, #0x190
    mov r1, #0x13
    bl func_0202718c
    ldr r4, [r0, #0x8]
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_020372f4
    ldr r0, =0x15e
    mov r2, #0x1
    add r1, r5, r0
    swpb r0, r2, [r1]
    ldr r1, [r4, #0x8]
    ldr r0, [r5, #0xa4]
    rsb r1, r1, #0x0
    ldr r0, [r0, #0x10]
    cmp r1, r0
    addge sp, sp, #0x4
    ldmgefd sp!, {r4, r5, lr}
    bxge lr
    mov r0, r5
    mov r1, r4
    bl func_01ffc068
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    bl func_01ffbfdc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020372f4:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_02037360
    ldr r0, =0x15e
    mov r2, #0x0
    add r1, r5, r0
    swpb r0, r2, [r1]
    ldr r1, [r4, #0x8]
    ldr r0, [r5, #0xa4]
    ldr r0, [r0, #0x10]
    cmp r1, r0
    addle sp, sp, #0x4
    ldmlefd sp!, {r4, r5, lr}
    bxle lr
    mov r0, r5
    mov r1, r4
    bl func_01ffc068
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_01ffbfdc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02037360:
    ldr r1, [r5, #0x14]
    mov r3, #0x1
    ldr r0, [r1, #0x210]
    cmp r0, #0x0
    bne L_02037398
    ldr r0, [r5, #0x18]
    mov r2, #0x0
    cmp r0, #0x0
    beq L_02037390
    ldr r0, [r0, #0x210]
    cmp r0, #0x0
    movne r2, r3
L_02037390:
    cmp r2, #0x0
    moveq r3, #0x0
L_02037398:
    cmp r3, #0x0
    bne L_020373dc
    ldr r0, [r1, #0x214]
    mov r2, #0x1
    cmp r0, #0x0
    bne L_020373d4
    ldr r0, [r5, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_020373cc
    ldr r0, [r0, #0x214]
    cmp r0, #0x0
    movne r1, r2
L_020373cc:
    cmp r1, #0x0
    moveq r2, #0x0
L_020373d4:
    cmp r2, #0x0
    beq L_020373f8
L_020373dc:
    mov r0, r5
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a9c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020373f8:
    mov r0, r5
    mov r1, #0x1
    bl func_01ffc03c
    mov r1, #0x0
    mov r0, r5
    mov r2, r1
    bl func_01ffbf4c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
