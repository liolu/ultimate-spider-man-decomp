#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020037f8();
// clang-format off
asm void func_02055c70(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r1
    bl func_020037f8
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, [r4, #0x4]
    cmp r1, #0xb
    addls pc, pc, r1, lsl #0x2
    b L_02055cec
L_02055ca4:
    b L_02055cec
    b L_02055cd4
    b L_02055cd4
    b L_02055cd4
    b L_02055cd4
    b L_02055cec
    b L_02055cec
    b L_02055cec
    b L_02055cec
    b L_02055cd4
    b L_02055cd4
    b L_02055cd4
L_02055cd4:
    ldr r1, =0x751
    mov r2, #0x3c
    str r2, [r5, #0x748]
    add r2, r5, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
L_02055cec:
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
