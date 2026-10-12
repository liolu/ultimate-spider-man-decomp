#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_021164e0[];
// clang-format off
asm void func_0204ed04(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r2, [r0, #0xc]
    cmp r2, #0xb
    addge sp, sp, #0x4
    ldmgefd sp!, {lr}
    bxge lr
    add ip, r0, #0xc
    ldr r3, [ip, #0x0]
    mov r2, #0x14
    add r3, r3, #0x1
    str r3, [ip, #0x0]
    ldr lr, [r0, #0x18]
    ldr r3, [r0, #0xc]
    ldr ip, =data_021164e0
    mla r2, r3, r2, lr
    str r2, [r0, #0x14]
    ldr r2, [r0, #0x14]
    mov r3, #0x0
    str r1, [r2, #0x0]
    ldr r1, [r0, #0x14]
    str ip, [r1, #0xc]
    ldr r1, [r0, #0x14]
    str r3, [r1, #0x4]
    ldr r1, [r0, #0x14]
    add r2, r1, #0x8
    swpb r1, r3, [r2]
    ldr r0, [r0, #0x14]
    str r3, [r0, #0x10]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
