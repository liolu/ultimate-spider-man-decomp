#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern char data_020f7504[];
// clang-format off
asm void func_0200f8a8(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr r1, =data_020f7504
    add r3, sp, #0x0
    mov r4, r0
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x14]
    mov r0, r3
    str r1, [sp, #0x8]
    bl func_0202f5f0
    mov r0, #0x1
    add r1, r4, #0x18
    str r0, [r4, #0x10]
    swpb r0, r0, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
