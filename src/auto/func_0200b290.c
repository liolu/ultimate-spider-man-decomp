#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02009db4();
extern void r1();
extern char data_020af2d4[];
extern char data_020ef7a8[];
extern char data_020ef7d4[];
extern char data_0214868c[];
// clang-format off
asm void func_0200b290(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, [sp, #0x18]
    ldr r4, =data_020ef7a8
    str ip, [sp, #0x0]
    str r4, [sp, #0x4]
    mov r4, #0x3
    str r4, [sp, #0x8]
    mov ip, #0x1
    mov r4, r0
    str ip, [sp, #0xc]
    bl func_02009db4
    ldr r1, =data_020ef7d4
    mov r0, #0x0
    str r1, [r4, #0x0]
    ldr r3, =data_020af2d4
    str r0, [r4, #0x778]
    ldrsh r1, [r3, #0x0]
    add r2, r4, #0x100
    mov r0, r4
    strh r1, [r2, #0xd0]
    ldrsh ip, [r3, #0x2]
    add r1, r4, #0x1d0
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
    ldr r0, =0x76d
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldr r0, =data_0214868c
    add r1, r4, #0xa8
    str r2, [r0, #0x44]
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
