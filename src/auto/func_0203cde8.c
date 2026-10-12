#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_01ffbcb8();
extern void func_01ffbe48();
extern void func_0200c770();
extern void func_02027100();
extern void func_0202718c();
extern void func_0202719c();
extern void func_02028dbc();
extern void func_020339f8();
extern void func_02036a3c();
extern void func_0203d460();
extern void func_02046d8c();
extern void func_02083d0c();
extern void r1();
extern void r2();
extern char data_020b5730[];
extern char data_020b5738[];
extern char data_020b5768[];
extern char data_020b5770[];
extern char data_02102a24[];
extern char data_02143e44[];
// clang-format off
asm void func_0203cde8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldrb ip, [sp, #0x10]
    mov r5, r1
    mov r4, r0
    str ip, [sp, #0x0]
    ldr r1, [r5, #0x4]
    bl func_0203d460
    ldr r2, =data_02102a24
    mov r1, r5
    add r0, r4, #0x190
    str r2, [r4, #0x0]
    bl func_0202719c
    add r1, r4, #0x1c4
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r0, r4, #0x1c8
    bl func_02028dbc
    ldr r0, [r5, #0x0]
    mov r2, #0x0
    str r0, [r4, #0x1d0]
    str r2, [r4, #0x1d4]
    add r1, r4, #0x1d8
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, =data_020b5730
    str r2, [r4, #0x1dc]
    str r2, [r4, #0x1e8]
    ldr r2, [r0, #0x0]
    ldr r1, =data_020b5738
    add r0, r4, #0x1ec
    bl func_020339f8
    mov r3, #0x0
    add r1, r4, #0x1f8
    swpb r0, r3, [r1]
    ldr r1, =0x1f9
    add r0, r4, #0x1fc
    add r2, r4, r1
    swpb r1, r3, [r2]
    bl func_0200c770
    mov r2, #0x0
    str r2, [r4, #0x220]
    str r2, [r4, #0x224]
    str r2, [r4, #0x228]
    str r2, [r4, #0x22c]
    str r2, [r4, #0x238]
    add r1, r4, #0x23c
    swpb r0, r2, [r1]
    ldr ip, =data_020b5768
    str r2, [r4, #0x240]
    ldrsh r0, [ip, #0x0]
    add r2, r4, #0x100
    ldr r3, =data_020b5770
    strh r0, [r2, #0xb4]
    ldrsh lr, [ip, #0x2]
    mov r0, r4
    add r1, r4, #0x1b4
    strh lr, [r2, #0xb6]
    ldrh lr, [ip, #0x4]
    strh lr, [r2, #0xb8]
    ldrh ip, [ip, #0x6]
    strh ip, [r2, #0xba]
    ldrsh ip, [r3, #0x0]
    strh ip, [r2, #0xbc]
    ldrsh ip, [r3, #0x2]
    strh ip, [r2, #0xbe]
    ldrh ip, [r3, #0x4]
    strh ip, [r2, #0xc0]
    ldrh r3, [r3, #0x6]
    strh r3, [r2, #0xc2]
    bl func_01ff9acc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r1, #0x1
    ldr r2, [r4, #0xbc]
    mov r0, r4
    add r3, r2, #0xda
    swpb r2, r1, [r3]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x54]
    blx r2
    mov r2, #0x0
    str r2, [r4, #0x1ac]
    mov r0, r4
    mov r1, #0x14
    bl func_02036a3c
    mov r0, #0x0
    str r0, [r4, #0x194]
    mov r0, r4
    bl func_01ffbcb8
    str r0, [r4, #0x1a8]
    mov r0, #0x0
    str r0, [r4, #0x214]
    ldr r0, =data_02143e44
    bl func_02046d8c
    mov r1, r0
    mov r0, r4
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x180]
    blx r2
    add r0, r4, #0x190
    mov r1, #0x88
    bl func_02027100
    add r0, r4, #0x190
    mov r1, #0x87
    bl func_02027100
    cmp r0, #0x0
    beq L_0203cfc0
    add r0, r4, #0x190
    mov r1, #0x87
    bl func_0202718c
    ldr r0, [r0, #0x1c]
    bl func_02083d0c
    mov r1, r0
    mov r0, r4
    bl func_01ffbe48
L_0203cfc0:
    mov r0, #0x0
    str r0, [r4, #0x230]
    str r0, [r4, #0x234]
    str r0, [r4, #0x18c]
    add r1, r4, #0x1a4
    swpb r0, r0, [r1]
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
