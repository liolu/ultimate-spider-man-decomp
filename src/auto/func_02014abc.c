#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f25c();
extern void func_0202f2c8();
// clang-format off
asm void func_02014abc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x15]
    cmp r1, #0x0
    beq L_02014ae0
    bl func_0202f25c
    add r1, r4, #0x15
    mov r0, #0x0
    swpb r0, r0, [r1]
L_02014ae0:
    mov r0, r4
    bl func_0202f2c8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
