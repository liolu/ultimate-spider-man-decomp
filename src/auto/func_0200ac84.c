#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa7dc();
extern char data_020ef6bc[];
// clang-format off
asm void func_0200ac84(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r5, r3
    bl func_01ffa7dc
    ldr r1, =data_020ef6bc
    ldr r0, [sp, #0x10]
    str r1, [r4, #0x0]
    str r5, [r4, #0xbc]
    str r0, [r4, #0xc0]
    add r1, r4, #0xc4
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xc5
    swpb r0, r2, [r1]
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
