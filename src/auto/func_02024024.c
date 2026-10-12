#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02001ce4();
extern void func_02009db4();
extern void func_02011444();
extern void r1();
extern char data_020b4430[];
extern char data_020b4464[];
extern char data_020f8c08[];
// clang-format off
asm void func_02024024(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    ldr r5, [sp, #0x20]
    ldr r4, =data_020b4464
    str r5, [sp, #0x0]
    str r4, [sp, #0x4]
    mov r4, #0x5
    str r4, [sp, #0x8]
    mov r5, #0x1
    mov r4, r0
    str r5, [sp, #0xc]
    bl func_02009db4
    ldr r0, =data_020f8c08
    ldr r1, =0x776
    ldr lr, =0x777
    ldr r5, =0x784
    str r0, [r4, #0x0]
    ldr r0, =0x785
    add ip, r4, r1
    mov r3, #0x0
    ldr r1, =0x786
    swpb r2, r3, [ip]
    add ip, r4, lr
    swpb r2, r3, [ip]
    ldr lr, =0x787
    str r3, [r4, #0x778]
    str r3, [r4, #0x77c]
    ldr r2, =0x788
    str r3, [r4, #0x780]
    add ip, r4, r5
    swpb r5, r3, [ip]
    add r5, r4, r0
    swpb r0, r3, [r5]
    add r1, r4, r1
    swpb r0, r3, [r1]
    add r1, r4, lr
    swpb r0, r3, [r1]
    add r0, r4, r2
    bl func_02011444
    ldr r3, =data_020b4430
    add r2, r4, #0x100
    ldrsh r5, [r3, #0x0]
    mov r0, r4
    add r1, r4, #0x1d0
    strh r5, [r2, #0xd0]
    ldrsh r5, [r3, #0x2]
    strh r5, [r2, #0xd2]
    ldrh r5, [r3, #0x4]
    strh r5, [r2, #0xd4]
    ldrh r3, [r3, #0x6]
    strh r3, [r2, #0xd6]
    bl func_01ff9acc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r0, r4
    bl func_02001ce4
    ldr r0, =0x775
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    mov r0, r4
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
