#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void r1();
// clang-format off
asm void func_0202e1bc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, [r1, #0x0]
    mov r4, #0x0
    mov r5, r0
    mov r3, r4
    mov r0, r4
    cmp r2, #0x0
    blt L_0202e1e8
    cmp r2, #0x100
    movlt r0, #0x1
L_0202e1e8:
    cmp r0, #0x0
    beq L_0202e1fc
    ldr r0, [r1, #0x4]
    cmp r0, #0x0
    movge r3, #0x1
L_0202e1fc:
    cmp r3, #0x0
    beq L_0202e210
    ldr r0, [r1, #0x4]
    cmp r0, #0xc0
    movlt r4, #0x1
L_0202e210:
    ldrb r0, [r5, #0x4]
    cmp r0, #0x0
    bne L_0202e238
    cmp r4, #0x0
    beq L_0202e238
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x2c]
    blx r1
    b L_0202e258
L_0202e238:
    cmp r0, #0x0
    beq L_0202e258
    cmp r4, #0x0
    bne L_0202e258
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x30]
    blx r1
L_0202e258:
    add r1, r5, #0x4
    swpb r0, r4, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
