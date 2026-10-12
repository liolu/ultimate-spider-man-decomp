#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038dc();
extern void func_0205585c();
extern void func_020558d0();
// clang-format off
asm void func_02055dac(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x750]
    cmp r1, #0x0
    bne L_02055e00
    bl func_0205585c
    cmp r0, #0x0
    bne L_02055e00
    ldr r0, =0x748
    add r1, r4, r0
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x748]
    cmp r0, #0x0
    bgt L_02055e00
    mov r0, r4
    bl func_020558d0
    add r1, r4, #0x750
    mov r0, #0x1
    swpb r0, r0, [r1]
L_02055e00:
    mov r0, r4
    bl func_020038dc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
