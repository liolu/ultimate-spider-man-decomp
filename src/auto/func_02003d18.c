#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209ab0c();
// clang-format off
asm void func_02003d18(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x1e0]
    cmp r0, #0x0
    beq L_02003d3c
    ldr r0, [r4, #0x1dc]
    cmp r0, #0x0
    beq L_02003d3c
    bl func_0209ab0c
L_02003d3c:
    mov r0, #0x0
    str r0, [r4, #0x1dc]
    add r1, r4, #0x1e0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
