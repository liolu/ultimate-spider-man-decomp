#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02009db4();
extern void func_02028dbc();
extern void func_02059a80();
extern void func_0205f510();
extern void func_0205f530();
extern void func_0205f5b8();
extern void func_020611f0();
extern void func_02061cc4();
extern void r1();
extern char data_020d4124[];
extern char data_02118440[];
extern char data_02121900[];
// clang-format off
asm void func_0205f3c4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    ldr r4, [sp, #0x20]
    ldr ip, [sp, #0x24]
    str r4, [sp, #0x0]
    ldr r4, [sp, #0x28]
    str ip, [sp, #0x4]
    str r4, [sp, #0x8]
    mov ip, #0x1
    mov r4, r0
    mov r5, r2
    str ip, [sp, #0xc]
    bl func_02009db4
    ldr r0, =0x778
    ldr r3, =data_02118440
    ldr r1, =data_02121900
    mov r2, r5
    add r0, r4, r0
    str r3, [r4, #0x0]
    bl func_02061cc4
    ldr r0, =0x9a4
    add r0, r4, r0
    bl func_0205f5b8
    add r0, r4, #0x9c0
    bl func_0205f510
    ldr r0, =0x9c8
    add r0, r4, r0
    bl func_0205f510
    mov r1, #0x0
    ldr r0, =0x9dc
    str r1, [r4, #0x9d0]
    add r0, r4, r0
    str r1, [r4, #0x9d4]
    str r1, [r4, #0x9d8]
    bl func_02028dbc
    mov r0, #0x0
    str r0, [r4, #0x9e4]
    mov ip, #0x1
    add r1, r4, #0x15c
    swpb r0, ip, [r1]
    ldr r3, =data_020d4124
    ldr r0, [r4, #0xbc]
    add r2, r4, #0x100
    add r1, r0, #0xd9
    swpb r0, ip, [r1]
    mov r0, r4
    ldrsh ip, [r3, #0x0]
    add r1, r4, #0x1d0
    strh ip, [r2, #0xd0]
    ldrsh ip, [r3, #0x2]
    strh ip, [r2, #0xd2]
    ldrh ip, [r3, #0x4]
    strh ip, [r2, #0xd4]
    ldrh r3, [r3, #0x6]
    strh r3, [r2, #0xd6]
    bl func_01ff9acc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    ldr r0, =0x778
    mov r1, #0x0
    add r0, r4, r0
    bl func_020611f0
    ldr r0, =0x94c
    mov r1, #0x32
    add r0, r4, r0
    bl func_02059a80
    ldr r0, =0x9c8
    add r0, r4, r0
    bl func_0205f530
    mov r0, r4
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
