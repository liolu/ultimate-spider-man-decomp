#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020012d0();
extern void func_02004024();
extern void func_02057bc8();
extern void func_02058688();
extern void func_0205b58c();
extern void func_0205bbd4();
extern void func_0205e174();
extern void func_0205e5dc();
extern void func_0205eef8();
extern void func_0205ef7c();
extern void func_0205f530();
extern void func_0208c03c();
extern void r1();
extern char data_021183d4[];
extern char data_02150c78[];
// clang-format off
asm void func_0205efd8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r1, [r4, #0x700]
    cmp r1, #0x3
    bne L_0205f000
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x204]
    blx r1
    b L_0205f19c
L_0205f000:
    bl func_0205ef7c
    cmp r0, #0x0
    beq L_0205f018
    mov r0, r4
    bl func_0205e174
    b L_0205f19c
L_0205f018:
    mov r0, r4
    bl func_0205e5dc
    cmp r0, #0x0
    beq L_0205f048
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x104]
    blx r1
    ldr r0, =data_021183d4
    ldr r0, [r0, #0x0]
    str r0, [r4, #0x9d4]
    b L_0205f19c
L_0205f048:
    mov r0, r4
    bl func_0205eef8
    cmp r0, #0x0
    beq L_0205f06c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x20c]
    blx r1
    b L_0205f19c
L_0205f06c:
    ldr r1, [r4, #0x4c]
    cmp r1, #0xfa0
    bge L_0205f0c0
    ldr r0, [r4, #0x6f4]
    ldr r0, [r0, #0x4c]
    cmp r0, r1
    blt L_0205f0c0
    mov r0, r4
    bl func_02057bc8
    cmp r0, #0xfa0
    bge L_0205f0c0
    ldr r0, =0x15e
    mov r1, #0x0
    add ip, r4, r0
    mov r0, r4
    mov r2, r1
    swpb r3, r1, [ip]
    bl func_0205b58c
    add r0, r4, #0x9c0
    bl func_0205f530
    b L_0205f19c
L_0205f0c0:
    ldr r0, =data_02150c78
    ldr r5, [r4, #0x4c]
    bl func_0208c03c
    sub r0, r0, #0xfa0
    cmp r5, r0
    ble L_0205f128
    ldr r1, [r4, #0x6f4]
    ldr r0, [r4, #0x4c]
    ldr r1, [r1, #0x4c]
    cmp r1, r0
    bge L_0205f128
    mov r0, r4
    bl func_02057bc8
    cmp r0, #0xfa0
    bge L_0205f128
    ldr r3, =0x15e
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    add ip, r4, r3
    mov r3, #0x1
    swpb r3, r3, [ip]
    bl func_0205b58c
    add r0, r4, #0x9c0
    bl func_0205f530
    b L_0205f19c
L_0205f128:
    ldr r0, [r4, #0x6f4]
    cmp r0, #0x0
    beq L_0205f194
    mov r0, r4
    bl func_02058688
    cmp r0, #0x0
    bne L_0205f180
    ldr r0, [r4, #0x1b8]
    cmp r0, #0x0
    bne L_0205f180
    ldrb r0, [r4, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    b L_0205f19c
L_0205f180:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x1d4]
    blx r1
    b L_0205f19c
L_0205f194:
    mov r0, r4
    bl func_0205bbd4
L_0205f19c:
    ldr r0, [r4, #0x178]
    add r0, r0, #0x4
    bl func_020012d0
    mov r1, r0
    mov r0, r4
    bl func_02004024
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
