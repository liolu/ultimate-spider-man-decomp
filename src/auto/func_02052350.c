#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fc8();
extern void func_0207b7ec();
extern void func_0207b9d0();
extern char data_0213d440[];
// clang-format off
asm void func_02052350(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r0, #0x1c
    mov r4, r1
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02052398
    ldrb r1, [r5, #0x40]
    ldr r3, [r5, #0x3c]
    cmp r1, #0x0
    moveq r1, #0x1
    movne r1, #0x0
    str r1, [sp, #0x0]
    ldr r2, [r3, #0x38]
    ldr r3, [r3, #0x2c]
    mov r1, r4
    bl func_0207b9d0
L_02052398:
    str r0, [r5, #0x74]
    ldr r0, [r5, #0x74]
    bl func_0207b7ec
    ldr r0, =data_0213d440
    mov r2, #0x1
    add r1, r0, #0x28
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
