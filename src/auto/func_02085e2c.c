#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb540();
extern void func_01ffb558();
extern void func_02064fd4();
extern void func_0207c604();
extern void func_0207c67c();
extern void func_02086020();
extern char data_020d93c4[];
extern char data_0211cb20[];
extern char data_0211cb30[];
extern char data_02150bb8[];
// clang-format off
asm void func_02085e2c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x124
    mov r5, r0
    ldrb r0, [r5, #0xd8]
    mov r4, r1
    cmp r0, #0x0
    beq L_02085e5c
    ldr r0, [r5, #0xd4]
    bl func_0207c604
    mvn r0, #0x0
    str r0, [r5, #0x10]
    str r0, [r5, #0x24]
L_02085e5c:
    mov r0, #0x0
    bl func_01ffb558
    ldr r0, =data_02150bb8
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    bne L_02085e88
    ldr r1, =data_0211cb20
    add r0, sp, #0x0
    mov r2, r4
    bl func_02064fd4
    b L_02085ec0
L_02085e88:
    cmp r4, #0x0
    blt L_02085eb0
    cmp r4, #0x96
    bge L_02085eb0
    ldr r2, =data_020d93c4
    ldr r1, =data_0211cb30
    add r0, sp, #0x0
    add r2, r2, r4, lsl #0x2
    bl func_02064fd4
    b L_02085ec0
L_02085eb0:
    ldr r1, =data_0211cb20
    add r0, sp, #0x0
    mov r2, r4
    bl func_02064fd4
L_02085ec0:
    ldr r1, [r5, #0x90]
    add r0, sp, #0x20
    add r2, sp, #0x0
    mov r3, #0x1
    bl func_02086020
    add r0, sp, #0x20
    mov r1, #0x1
    bl func_0207c67c
    str r0, [r5, #0xd4]
    add r1, r5, #0xd8
    mov r0, #0x1
    swpb r0, r0, [r1]
    bl func_01ffb540
    add sp, sp, #0x124
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
