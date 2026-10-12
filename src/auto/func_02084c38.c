#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02084308();
extern void func_02084f00();
extern void func_0209c6cc();
// clang-format off
asm void func_02084c38(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r9, r1
    cmp r3, #0x0
    ldreq r3, [r9, #0x8]
    mov r8, r2
    mov r10, r0
    cmp r8, #0x0
    add r0, r3, #0x24
    addeq r8, r9, #0x10
    str r0, [sp, #0x18]
    ldrb r0, [r8, #0x8]
    ldrb r6, [r3, #0x18]
    ldrh r11, [r3, #0x1a]
    cmp r0, #0x0
    movne r7, #0x8
    moveq r7, #0x0
    ldr r1, [r3, #0x20]
    cmp r6, #0x0
    beq L_02084c9c
    cmp r6, #0x1
    beq L_02084ca4
    cmp r6, #0x2
    beq L_02084cac
    b L_02084cb4
L_02084c9c:
    mov r5, r1, lsl #0x2
    b L_02084cb8
L_02084ca4:
    mov r5, r1, lsl #0x1
    b L_02084cb8
L_02084cac:
    mov r5, r1, lsl #0x3
    b L_02084cb8
L_02084cb4:
    mov r5, #0x0
L_02084cb8:
    ldrb r1, [r8, #0x0]
    mov r0, r10
    bl func_02084f00
    mov r4, r0
    mvn r0, #0x0
    cmp r4, r0
    addeq sp, sp, #0x1c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    str r7, [sp, #0x0]
    str r5, [sp, #0x4]
    str r11, [sp, #0x8]
    ldrb r1, [r8, #0x1]
    mov r0, #0x1c
    mul r5, r4, r0
    str r1, [sp, #0xc]
    ldr r1, [r8, #0x4]
    mov r0, #0x40
    str r1, [sp, #0x10]
    str r0, [sp, #0x14]
    add r0, r10, r5
    ldrb r3, [r8, #0x8]
    ldr r0, [r0, #0xc]
    ldr r2, [sp, #0x18]
    mov r1, r6
    bl func_0209c6cc
    add r5, r10, r5
    ldrb r0, [r8, #0x0]
    add r1, r5, #0x10
    add r6, r5, #0x11
    swpb r0, r0, [r1]
    add r7, r5, #0x18
    ldrb r0, [r8, #0x1]
    add r2, r5, #0x19
    add r3, r10, #0x8000
    swpb r0, r0, [r6]
    ldr r6, [r8, #0x4]
    mov r0, r10
    str r6, [r5, #0x14]
    ldrb r6, [r8, #0x8]
    mov r1, r4
    swpb r6, r6, [r7]
    ldrb r6, [r8, #0x9]
    swpb r6, r6, [r2]
    str r9, [r5, #0x1c]
    ldr r2, [r3, #0x258]
    str r2, [r5, #0x20]
    ldrb r5, [r8, #0x1]
    ldr r2, [r3, #0x24c]
    mul r2, r5, r2
    mov r2, r2, asr #0xc
    and r2, r2, #0xff
    bl func_02084308
    mov r0, r4
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
