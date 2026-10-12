#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026b3c();
extern void func_02046d7c();
extern void func_02046d84();
extern void func_02046d8c();
extern char data_02143e44[];
// clang-format off
asm void func_02026bac(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r3, #0x0
    mov r2, r3
L_02026bbc:
    add r0, r4, r3
    add r1, r0, #0x39
    add r3, r3, #0x1
    cmp r3, #0x8
    swpb r0, r2, [r1]
    blt L_02026bbc
    ldr r0, =data_02143e44
    bl func_02046d8c
    str r0, [r4, #0x0]
    ldr r0, =data_02143e44
    bl func_02046d84
    str r0, [r4, #0xc]
    ldr r0, =data_02143e44
    bl func_02046d7c
    str r0, [r4, #0x10]
    ldr r0, =data_02143e44
    bl func_02046d8c
    str r0, [r4, #0x4]
    ldr r0, =data_02143e44
    bl func_02046d8c
    str r0, [r4, #0x8]
    mov r1, #0x0
    mov r0, r4
    str r1, [r4, #0x2c]
    mov r1, #0x1
    str r1, [r4, #0x30]
    bl func_02026b3c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
