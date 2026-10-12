#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffaeb4();
extern void func_01ffbcc4();
extern void func_01ffd554();
extern void func_02068280();
extern void func_02085700();
// clang-format off
asm void func_02068360(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r5, r0
    ldr r0, [r5, #0x3cc]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02068488
L_0206837c:
    b L_02068488
    b L_0206838c
    b L_02068404
    b L_02068488
L_0206838c:
    add r2, r5, #0x1d
    ldrb r0, [r2, #0x0]
    mov r1, #0x4
    bic r0, r0, #0x4
    swpb r0, r0, [r2]
    ldr r0, [r5, #0xbc]
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ble L_02068488
    bl func_01ffaeb4
    ldrb r1, [r5, #0x15e]
    mov r4, r0
    add r0, sp, #0x0
    cmp r1, #0x0
    ldr r1, =0x15e
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r2, #0x4
    mov r1, r5
    mov r3, #0x0
    bl func_01ffbcc4
    ldrh r0, [r4, #0x38]
    ldr r1, [sp, #0x0]
    sub r0, r1, r0, lsr #0x1
    str r0, [r4, #0x3c]
    str r1, [r4, #0x4c]
    b L_02068488
L_02068404:
    add r1, r5, #0x3c8
    ldr r0, [r1, #0x0]
    ldr r2, =0x51eb851f
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r5, #0x3c8]
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r5, #0x3c8]
    ldr r0, [r5, #0xbc]
    ldr r4, [r5, #0x3c8]
    ldr r1, [r0, #0x9c]
    ldr ip, [r0, #0x9c]
    ldrh r3, [r1, #0x6]
    ldrh r1, [r1, #0x4]
    ldrh ip, [ip, #0x4]
    sub r1, r3, r1
    mul r3, r4, r1
    smull r1, r4, r2, r3
    mov r4, r4, asr #0x5
    mov r1, r3, lsr #0x1f
    add r4, r1, r4
    add r1, ip, r4
    mov r1, r1, lsl #0x2
    str r1, [r0, #0xb4]
    ldr r0, [r5, #0x3c8]
    cmp r0, #0x0
    bne L_02068488
    mov r2, #0x0
    mov r0, r5
    mov r1, #0x2
    str r2, [r5, #0x3cc]
    bl func_02068280
L_02068488:
    mov r0, r5
    bl func_01ffd554
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
