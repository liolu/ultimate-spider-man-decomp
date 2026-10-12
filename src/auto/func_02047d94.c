#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8114();
extern void func_01ff9acc();
extern void func_01ff9b20();
extern void func_01ffbcc4();
extern void func_0202eabc();
extern void func_020470b8();
extern void func_02047144();
extern void func_02047160();
extern void func_020479dc();
extern void func_02062fc0();
extern void func_02064fc8();
extern void func_02085700();
extern void r1();
extern char data_02104bac[];
// clang-format off
asm void func_02047d94(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x1c
    ldrb r3, [sp, #0x3c]
    mov r2, #0x0
    mov r4, r1
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [sp, #0x38]
    ldr r1, [r4, #0x0]
    add r2, sp, #0x30
    mov r5, r0
    bl func_02062fc0
    ldr r0, =data_02104bac
    mov r2, #0x0
    str r0, [r5, #0x0]
    str r4, [r5, #0x178]
    str r2, [r5, #0x17c]
    str r2, [r5, #0x180]
    str r2, [r5, #0x184]
    ldrb r1, [sp, #0x40]
    mov r0, r5
    str r2, [r5, #0x188]
    bl func_01ff8114
    add r3, r5, #0x1c
    ldrb r2, [r3, #0x0]
    mov r0, r5
    mov r1, #0x1
    orr r2, r2, #0x20
    swpb r2, r2, [r3]
    bl func_02047144
    ldrb r0, [r4, #0x54]
    mov r1, r0, lsl #0x1e
    movs r1, r1, lsr #0x1f
    movne r0, #0x2
    strne r0, [r5, #0x184]
    bne L_02047e48
    mov r0, r0, lsl #0x1d
    movs r0, r0, lsr #0x1f
    beq L_02047e48
    mov r0, r5
    mov r1, #0x0
    bl func_01ff8114
    mov r0, #0x3
    str r0, [r5, #0x184]
L_02047e48:
    mov r0, #0x34
    bl func_02064fc8
    movs r1, r0
    beq L_02047e60
    bl func_0202eabc
    mov r1, r0
L_02047e60:
    mov r0, r5
    bl func_01ff9b20
    ldr r1, [r4, #0x14]
    add r0, r4, #0x1c
    str r1, [r5, #0x74]
    ldr r1, [r4, #0x18]
    add r3, r5, #0x7c
    str r1, [r5, #0x78]
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r0, r4, #0x28
    add r3, r5, #0x88
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldrb r1, [r4, #0x54]
    add r2, r5, #0xa8
    mov r0, r5
    mov r1, r1, lsl #0x18
    mov r1, r1, lsr #0x1f
    swpb r1, r1, [r2]
    add r1, r4, #0x34
    add r2, r4, #0x40
    bl func_02047160
    ldrb r0, [r4, #0x54]
    mov r0, r0, lsl #0x1b
    movs r0, r0, lsr #0x1f
    beq L_02047ed4
    mov r0, r5
    bl func_020479dc
L_02047ed4:
    ldr r0, [r5, #0x178]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    beq L_02047f44
    ldr r1, [sp, #0x30]
    ldr r0, [sp, #0x34]
    str r1, [sp, #0x8]
    str r0, [sp, #0xc]
    ldr r0, [r5, #0xbc]
    mov r1, #0x4
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_02047f30
    add r0, sp, #0x10
    mov r1, r5
    mov r2, #0x4
    mov r3, #0x0
    bl func_01ffbcc4
    ldr r1, [sp, #0x10]
    ldr r0, [sp, #0x14]
    str r1, [sp, #0x8]
    str r0, [sp, #0xc]
L_02047f30:
    ldr r0, [r5, #0x178]
    add r2, sp, #0x8
    ldr r1, [r0, #0x8]
    mov r0, r5
    bl func_020470b8
L_02047f44:
    ldr r0, [r5, #0x178]
    ldr r1, [r0, #0x4c]
    cmp r1, #0x0
    beq L_02047f6c
    mov r0, r5
    bl func_01ff9acc
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
L_02047f6c:
    ldr r0, [r5, #0x178]
    add r3, r5, #0x1d
    ldrb r1, [r0, #0x54]
    ldrb r2, [r3, #0x0]
    mov r0, r5
    mov r1, r1, lsl #0x19
    mov r1, r1, lsr #0x1f
    bic r2, r2, #0x80
    and r1, r1, #0x1
    orr r1, r2, r1, lsl #0x7
    swpb r1, r1, [r3]
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
