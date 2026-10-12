#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02009db4();
extern void func_02011444();
extern void func_020114f8();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_02062a70();
extern void func_02085d78();
extern void r1();
extern char data_020b36cc[];
extern char data_020d41c4[];
extern char data_020f758c[];
extern char data_020f7604[];
extern char data_0211d284[];
extern char data_0211e1a4[];
extern char data_0211e1c4[];
extern char data_0211f11c[];
// clang-format off
asm void func_020112e4(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, [sp, #0x18]
    ldr r4, =data_020f758c
    str ip, [sp, #0x0]
    str r4, [sp, #0x4]
    mov r4, #0x2
    str r4, [sp, #0x8]
    mov ip, #0x1
    mov r4, r0
    str ip, [sp, #0xc]
    bl func_02009db4
    ldr r1, =data_020f7604
    ldr r0, =0x78c
    ldr r2, =0x78d
    ldr r3, =0x78e
    str r1, [r4, #0x0]
    mov ip, #0x0
    str ip, [r4, #0x778]
    str ip, [r4, #0x77c]
    str ip, [r4, #0x780]
    str ip, [r4, #0x788]
    add r1, r4, r0
    swpb r0, ip, [r1]
    add r1, r4, r2
    swpb r0, ip, [r1]
    add r1, r4, r3
    swpb r0, ip, [r1]
    add r0, r4, #0x790
    bl func_02011444
    ldr r3, =data_020b36cc
    add r2, r4, #0x100
    ldrsh ip, [r3, #0x0]
    mov r0, r4
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
    ldr r0, [r4, #0xbc]
    mov r1, #0x1
    ldr r2, =data_0211e1a4
    ldr r2, [r2, #0x8]
    bl func_02085d78
    ldr r0, [r4, #0xbc]
    mov r1, #0x2
    ldr r2, =data_0211e1c4
    ldr r2, [r2, #0x8]
    bl func_02085d78
    mov r0, r4
    ldr r1, =data_0211f11c
    mov r2, #0x1
    bl func_02062a70
    ldr r0, [r4, #0x164]
    mov r1, #0x1
    ldr r0, [r0, #0xbc]
    ldr r2, =data_0211d284
    ldr r2, [r2, #0x8]
    bl func_02085d78
    bl func_0204eb30
    ldr r1, =data_020d41c4
    bl func_0204eab0
    add r0, r4, #0x790
    mov r1, #0x1
    bl func_020114f8
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
