#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202718c();
extern void func_02036994();
extern void func_020369e8();
extern void func_02036afc();
// clang-format off
asm void func_02043de8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =0x498
    mov r5, r0
    add r3, r5, r1
    mov r2, #0x0
    add r0, r5, #0x190
    mov r1, #0x82
    swpb r2, r2, [r3]
    bl func_0202718c
    mov r4, r0
    mov r2, #0x0
    mov r0, r5
    mov r1, r4
    mov r3, r2
    bl func_02036afc
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_020369e8
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_02036994
    mov r0, #0x28
    str r0, [r5, #0x194]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
