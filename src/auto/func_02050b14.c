#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_0202719c();
extern void func_020337b4();
extern void func_02058114();
extern void func_02058b1c();
extern void r1();
extern char data_020cea68[];
extern char data_02116590[];
extern char data_021165b0[];
// clang-format off
asm void func_02050b14(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr ip, [sp, #0x1c]
    ldr r4, =data_02116590
    mov r5, r2
    mov r2, r3
    str ip, [sp, #0x0]
    ldr r3, [sp, #0x18]
    str r4, [sp, #0x4]
    mov ip, #0x2
    mov r4, r0
    str ip, [sp, #0x8]
    bl func_020337b4
    ldr r0, =0x754
    ldr r2, =data_021165b0
    mov r1, r5
    add r0, r4, r0
    str r2, [r4, #0x0]
    bl func_0202719c
    ldr r1, =0x30d40
    mov r0, r4
    bl func_02058b1c
    ldr r3, =data_020cea68
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
    mov r0, r4
    bl func_02058114
    ldr r0, =0x6fc
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    mov r0, r4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
