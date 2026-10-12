#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8114();
extern void func_01ff9b28();
extern void func_02000e8c();
extern void func_020470b8();
extern void func_0207c284();
extern void func_0208580c();
extern char data_020b85c4[];
extern char data_0214876c[];
// clang-format off
asm void func_02047484(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x18
    mov r4, r0
    ldr r0, [r4, #0x178]
    ldr r1, [r0, #0x10]
    cmp r1, #0x0
    beq L_020474b4
    mov r2, #0x0
    ldr r0, =data_0214876c
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
L_020474b4:
    ldr r0, [r4, #0x178]
    ldr r1, [r0, #0x4]
    cmp r1, #0x0
    bne L_020474d8
    mov r0, r4
    bl func_01ff9b28
    add sp, sp, #0x18
    ldmfd sp!, {r4, lr}
    bx lr
L_020474d8:
    ldr r0, [r4, #0xbc]
    mov r2, #0x0
    mov r3, #0x1
    bl func_0208580c
    ldr r3, [r4, #0xbc]
    mov r2, #0x0
    add r1, r3, #0x96
    swpb r0, r2, [r1]
    add r1, r3, #0x97
    swpb r0, r2, [r1]
    mov r0, r4
    mov r1, #0x1
    bl func_01ff8114
    ldr r0, [r4, #0x178]
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    beq L_02047554
    ldr ip, [r4, #0x4c]
    ldr r3, [r4, #0x50]
    add r2, sp, #0x4
    str ip, [sp, #0xc]
    str r3, [sp, #0x10]
    ldrh r1, [r4, #0x3a]
    mov r0, r4
    sub r1, r3, r1, lsr #0x1
    str ip, [sp, #0x4]
    str r1, [sp, #0x10]
    str r1, [sp, #0x8]
    ldr r1, [r4, #0x178]
    ldr r1, [r1, #0xc]
    bl func_020470b8
L_02047554:
    ldr r0, [r4, #0x178]
    ldrb r0, [r0, #0x54]
    mov r0, r0, lsl #0x1a
    movs r0, r0, lsr #0x1f
    bne L_02047588
    ldr r0, [r4, #0xa4]
    ldr r1, =data_020b85c4
    add r0, r0, #0x4
    bl func_02000e8c
    ldr r0, [r4, #0xa4]
    ldr r1, =data_020b85c4
    add r0, r0, #0x1c
    bl func_02000e8c
L_02047588:
    mov r0, #0x1
    str r0, [r4, #0x184]
    add sp, sp, #0x18
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
