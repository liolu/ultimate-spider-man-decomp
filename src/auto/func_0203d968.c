#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbcc4();
extern void func_0206f9f8();
extern void func_0207beac();
extern void func_020841d8();
extern void func_02085700();
extern void r1();
extern char data_02104720[];
extern char data_0214876c[];
// clang-format off
asm void func_0203d968(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    ldr r0, [r4, #0x260]
    cmp r0, #0x0
    addle sp, sp, #0x8
    ldmlefd sp!, {r4, lr}
    bxle lr
    add r1, r4, #0x260
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x260]
    cmp r0, #0x0
    bne L_0203d9fc
    ldr r0, =data_0214876c
    ldr r1, =data_02104720
    bl func_020841d8
    mov r1, r0
    mvn r0, #0x0
    cmp r1, r0
    beq L_0203d9c8
    ldr r0, =data_0214876c
    bl func_0207beac
L_0203d9c8:
    ldr r0, [r4, #0x244]
    cmp r0, #0x0
    beq L_0203d9e0
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_0203d9e0:
    mov r0, #0x0
    add r1, r4, #0x248
    str r0, [r4, #0x244]
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203d9fc:
    ldr r0, [r4, #0x244]
    cmp r0, #0x0
    beq L_0203da68
    ldr r0, [r4, #0xbc]
    mov r1, #0x0
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ble L_0203da68
    mov r2, #0x0
    add r0, sp, #0x0
    mov r1, r4
    mov r3, r2
    bl func_01ffbcc4
    ldr r0, [r4, #0x244]
    add r1, sp, #0x0
    bl func_0206f9f8
    ldr r0, [r4, #0x244]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    add r1, r4, #0x248
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203da68:
    add r1, r4, #0x248
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
