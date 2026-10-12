#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_01ffbcb8();
extern void func_0202718c();
extern void func_02036994();
extern void func_020369e8();
extern void func_02036afc();
// clang-format off
asm void func_020383c4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    add r0, r4, #0x190
    mov r1, #0x2
    bl func_0202718c
    mov r5, r0
    mov r0, r4
    mov r1, r5
    mov r2, #0x1
    mov r3, #0x0
    bl func_02036afc
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    bl func_020369e8
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    bl func_02036994
    mov r0, #0x0
    str r0, [r4, #0x78]
    mov r0, r4
    bl func_01ffbcb8
    str r0, [r4, #0x1a8]
    mov r3, #0x0
    ldr r0, =0x1f9
    mov r2, #0x3
    add r1, r4, r0
    swpb r0, r3, [r1]
    mov r0, r4
    str r3, [r4, #0x194]
    str r2, [r4, #0x30]
    add r1, r4, #0x1b4
    bl func_01ff9acc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
