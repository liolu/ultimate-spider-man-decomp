#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204e6e4();
extern char data_0211aa88[];
// clang-format off
asm void func_0206863c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr r4, [sp, #0x18]
    ldr ip, [sp, #0x1c]
    str r4, [sp, #0x0]
    ldrb r4, [sp, #0x20]
    str ip, [sp, #0x4]
    mov ip, #0x0
    str r4, [sp, #0x8]
    mov r4, r0
    str ip, [sp, #0xc]
    bl func_0204e6e4
    ldr r0, =data_0211aa88
    ldr r2, =0x3c5
    str r0, [r4, #0x0]
    add r1, r4, #0x3c4
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r1, r4, r2
    swpb r0, r3, [r1]
    mov r0, r4
    str r3, [r4, #0x3c8]
    str r3, [r4, #0x3cc]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
