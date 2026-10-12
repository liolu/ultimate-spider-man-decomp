#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02150aa0[];
extern char data_02150aa4[];
extern char data_02150aa8[];
extern char data_02150aac[];
extern char data_02150ab0[];
extern char data_02150ab4[];
extern char data_02150ab8[];
extern char data_02150abc[];
// clang-format off
asm void func_0207deec(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r1, =data_02150ab4
    mov r2, #0x0
    ldr r0, =data_02150ab8
    str r2, [r1, #0x0]
    str r2, [r0, #0x0]
    ldr r0, =data_02150abc
    mov lr, r2
L_0207df10:
    str lr, [r0, r2, lsl #0x2]
    add r2, r2, #0x1
    cmp r2, #0xc
    blt L_0207df10
    ldr r1, =data_02150aa0
    mov r0, #0x1
    ldr r3, =data_02150ab0
    ldr r2, =data_02150aac
    swpb r0, r0, [r1]
    ldr r1, =data_02150aa8
    mov ip, #0x10
    ldr r0, =data_02150aa4
    str lr, [r3, #0x0]
    str lr, [r2, #0x0]
    str ip, [r1, #0x0]
    str ip, [r0, #0x0]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
