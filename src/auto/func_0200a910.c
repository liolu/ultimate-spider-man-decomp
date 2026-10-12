#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff807c();
extern void func_01ff8114();
extern void func_01ff9acc();
extern void func_01ff9b20();
extern void func_02000e8c();
extern void func_0202eabc();
extern void func_02059f5c();
extern void func_02062fc0();
extern void func_02064fc8();
extern void r1();
extern char data_020b532c[];
extern char data_020ef510[];
// clang-format off
asm void func_0200a910(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldrb r3, [sp, #0x30]
    mov r2, #0x0
    mov r4, r1
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [sp, #0x2c]
    ldr r1, [r4, #0x0]
    add r2, sp, #0x20
    mov r5, r0
    bl func_02062fc0
    ldr r1, =data_020ef510
    ldr r0, [sp, #0x28]
    str r1, [r5, #0x0]
    str r4, [r5, #0x178]
    ldr r2, [r4, #0x14]
    add r1, r5, #0x188
    str r2, [r5, #0x180]
    ldrsh r2, [r0, #0x8]
    mov r0, #0x0
    str r2, [r5, #0x184]
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x10]
    cmp r1, #0x0
    beq L_0200a994
    mov r0, r5
    bl func_01ff9acc
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
L_0200a994:
    mov r0, r5
    mov r1, #0x1
    bl func_01ff807c
    ldrb r0, [r4, #0x18]
    cmp r0, #0x0
    beq L_0200a9e8
    mov r0, #0x34
    bl func_02064fc8
    movs r1, r0
    beq L_0200a9c4
    bl func_0202eabc
    mov r1, r0
L_0200a9c4:
    mov r0, r5
    bl func_01ff9b20
    ldr r0, [r5, #0xa4]
    ldr r1, =data_020b532c
    add r0, r0, #0x1c
    bl func_02000e8c
    mov r0, r5
    mov r1, #0x1
    bl func_01ff8114
L_0200a9e8:
    add r1, r5, #0x1d
    ldrb r2, [r1, #0x0]
    ldrb r0, [r4, #0x19]
    add r3, r5, #0xa8
    bic r2, r2, #0x4
    and r0, r0, #0x1
    orr r0, r2, r0, lsl #0x2
    swpb r0, r0, [r1]
    mov r0, #0x14
    ldrb ip, [r1, #0x0]
    ldrb r2, [r4, #0x1a]
    bic ip, ip, #0x2
    and r2, r2, #0x1
    orr r2, ip, r2, lsl #0x1
    swpb r2, r2, [r1]
    ldrb r1, [r4, #0x18]
    swpb r1, r1, [r3]
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0200aa40
    mov r1, r5
    bl func_02059f5c
L_0200aa40:
    str r0, [r5, #0x17c]
    mov r0, r5
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
