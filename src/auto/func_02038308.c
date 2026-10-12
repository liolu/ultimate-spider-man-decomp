#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_0202718c();
extern void func_02036994();
extern void func_020369e8();
extern void func_02036afc();
extern void r1();
// clang-format off
asm void func_02038308(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    add r0, r5, #0x190
    mov r1, #0xe
    bl func_0202718c
    mov r4, r0
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    mov r3, #0x0
    bl func_02036afc
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    ldr r1, =0x15e
    movne r3, #0x1
    moveq r3, #0x0
    add r2, r5, r1
    swpb r1, r3, [r2]
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    movne r2, #0x1
    moveq r2, #0x0
    mov r0, r5
    mov r1, r4
    bl func_020369e8
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_02036994
    mov r2, #0x5
    mov r0, r5
    add r1, r5, #0x1b4
    str r2, [r5, #0x194]
    bl func_01ff9acc
    mov r0, #0x3
    str r0, [r5, #0x30]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
