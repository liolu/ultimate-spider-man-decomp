#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02009db4();
extern void r1();
extern char data_020b91a0[];
extern char data_02105148[];
extern char data_02105174[];
// clang-format off
asm void func_0204a660(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, [sp, #0x18]
    ldr r4, =data_02105148
    str ip, [sp, #0x0]
    str r4, [sp, #0x4]
    mov r4, #0x3
    str r4, [sp, #0x8]
    mov ip, #0x1
    mov r4, r0
    str ip, [sp, #0xc]
    bl func_02009db4
    ldr r1, =data_02105174
    ldr r0, =0x77c
    ldr r2, =0x77d
    ldr r3, =0x77e
    str r1, [r4, #0x0]
    mov ip, #0x0
    str ip, [r4, #0x778]
    add r1, r4, r0
    swpb r0, ip, [r1]
    add r1, r4, r2
    swpb r0, ip, [r1]
    add r1, r4, r3
    swpb r0, ip, [r1]
    ldr r3, =data_020b91a0
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
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
