#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02046e7c();
// clang-format off
asm void func_02046ff4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, #0x1
    str r0, [r4, #0x1c]
    mov r2, #0x0
    str r2, [r4, #0x20]
    str r2, [r4, #0x18]
    str r2, [r4, #0x24]
    mvn r1, #0x0
L_02047018:
    add r0, r4, r2, lsl #0x2
    add r2, r2, #0x1
    str r1, [r0, #0x28]
    cmp r2, #0x3
    blt L_02047018
    mov r0, r4
    mov r1, #0x0
    bl func_02046e7c
    mov r0, r4
    mov r1, #0x1
    bl func_02046e7c
    mov r0, r4
    mov r1, #0x2
    bl func_02046e7c
    mov r0, r4
    mov r1, #0x3
    bl func_02046e7c
    mov r0, r4
    mov r1, #0x4
    bl func_02046e7c
    mov r2, #0x0
    str r2, [r4, #0x14]
    str r2, [r4, #0xc]
    str r2, [r4, #0x10]
    str r2, [r4, #0x4]
    str r2, [r4, #0x8]
    add r1, r4, #0x34
    swpb r0, r2, [r1]
    add r1, r4, #0x1
    swpb r0, r2, [r4]
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
