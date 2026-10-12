#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201388c();
extern void func_020138bc();
extern void func_020139ec();
// clang-format off
asm void func_02013824(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r2
    ldr r2, [r4, #0x0]
    mov r6, r0
    mov r5, r1
    bl func_0201388c
    cmp r0, #0x0
    beq L_02013870
    mov r0, r6
    bl func_020139ec
    ldr r2, [r4, #0x4]
    ldr r0, [r6, #0x24]
    add r1, r6, #0x30
    sub r0, r2, r0
    swpb r0, r0, [r1]
    mov r0, r6
    ldr r2, [r4, #0x0]
    mov r1, r5
    bl func_020138bc
L_02013870:
    ldr r0, [r6, #0x8]
    ldr r1, [r4, #0x0]
    ldrb r0, [r0, r5]
    add r0, r1, r0
    str r0, [r4, #0x0]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
