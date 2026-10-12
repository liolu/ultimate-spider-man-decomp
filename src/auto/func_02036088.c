#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_0202718c();
extern void func_02036994();
extern void func_020369e8();
extern void func_02036afc();
// clang-format off
asm void func_02036088(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r0, [r4, #0x30]
    cmp r0, #0x0
    bne L_020360bc
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_020360bc:
    mov r0, #0x4
    str r0, [r4, #0x30]
    mov r2, #0xa
    add r0, r4, #0x190
    mov r1, #0x8
    str r2, [r4, #0x194]
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
    mov r2, #0x1
    bl func_02036994
    mov r0, r4
    add r1, r4, #0x1bc
    bl func_01ff9acc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
