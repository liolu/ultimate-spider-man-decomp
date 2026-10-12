#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02013a70();
extern char data_020f7b1c[];
extern char data_0213b320[];
// clang-format off
asm void func_02013b24(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr ip, =data_020f7b1c
    mov r4, r0
    str ip, [r4, #0x0]
    str r2, [r4, #0x20]
    ldr r0, [sp, #0x10]
    ldrb ip, [sp, #0x14]
    str r0, [r4, #0x24]
    add r2, r4, #0x28
    mov r0, #0x0
    swpb r0, r0, [r2]
    cmp ip, #0x0
    ldrne r0, =data_0213b320
    mov r5, r3
    strne r4, [r0, ip, lsl #0x2]
    mov r0, r4
    bl func_02013a70
    cmp r5, #0x0
    ldr r1, [sp, #0x18]
    strne r5, [r4, #0xc]
    mov r0, r4
    str r1, [r4, #0x2c]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
