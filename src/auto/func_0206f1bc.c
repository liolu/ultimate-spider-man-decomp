#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206f2c8();
extern void func_0206f304();
// clang-format off
asm void func_0206f1bc(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    movs r7, r2
    mov r6, #0x1
    addeq sp, sp, #0x14
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r4, #0x0
    str r0, [sp, #0x0]
    add r3, r0, #0x1
    str r1, [sp, #0x4]
    add r2, r1, #0x1
    str r4, [sp, #0xc]
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r0, [r0, #0x0]
    cmp r7, #0x1
    swpb r0, r0, [r1]
    bls L_0206f2b8
    add r4, sp, #0x0
L_0206f210:
    mov r0, r4
    bl func_0206f304
    cmp r0, #0x0
    beq L_0206f28c
    mov r0, r4
    bl func_0206f2c8
    add r5, r0, #0x2
    mov r0, r4
    bl func_0206f2c8
    ldr r1, [sp, #0x0]
    sub r3, r0, #0x2
    add r0, r1, #0x1
    str r0, [sp, #0x0]
    ldrb r2, [r1, #0x0]
    ldr r1, [sp, #0x4]
    mov r0, r5
    add r2, r2, r3, lsl #0x8
    add r2, r2, #0x1
    cmp r5, #0x0
    sub r3, r1, r2
    ble L_0206f284
L_0206f264:
    ldr r2, [sp, #0x4]
    sub r0, r0, #0x1
    add r1, r2, #0x1
    str r1, [sp, #0x4]
    ldrb r1, [r3], #0x1
    cmp r0, #0x0
    swpb r1, r1, [r2]
    bgt L_0206f264
L_0206f284:
    add r6, r6, r5
    b L_0206f2b0
L_0206f28c:
    ldr r3, [sp, #0x0]
    ldr r1, [sp, #0x4]
    add r2, r3, #0x1
    add r0, r1, #0x1
    str r2, [sp, #0x0]
    str r0, [sp, #0x4]
    ldrb r0, [r3, #0x0]
    add r6, r6, #0x1
    swpb r0, r0, [r1]
L_0206f2b0:
    cmp r6, r7
    blo L_0206f210
L_0206f2b8:
    mov r0, r6
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
