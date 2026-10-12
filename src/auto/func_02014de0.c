#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5a0();
extern void func_0202f64c();
extern void func_020313a0();
extern char data_020f8870[];
// clang-format off
asm void func_02014de0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r1
    mov r1, #0x1
    mov r4, r0
    bl func_0202f5a0
    ldr r0, =data_020f8870
    add r1, r4, #0x15
    str r0, [r4, #0x0]
    mov r3, #0x0
    swpb r0, r3, [r1]
    mov r0, r4
    str r3, [r4, #0x18]
    str r3, [r4, #0x1c]
    str r3, [r4, #0x24]
    str r3, [r4, #0x28]
    str r3, [r4, #0x2c]
    str r5, [r4, #0x30]
    add r2, r4, #0x34
    swpb r1, r3, [r2]
    bl func_0202f64c
    mov r0, #0x40
    bl func_020313a0
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
