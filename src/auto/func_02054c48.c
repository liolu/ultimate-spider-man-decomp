#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02054d48();
extern char data_02146124[];
// clang-format off
asm void func_02054c48(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    ldrb r2, [r5, #0x4]
    mov r4, r1
    cmp r2, #0x0
    beq L_02054d34
    ldr r1, =data_02146124
    cmp r4, #0x0
    ldr r1, [r1, #0x0]
    beq L_02054c88
    cmp r4, #0x1
    beq L_02054cd8
    cmp r4, #0x2
    beq L_02054d28
    b L_02054d34
L_02054c88:
    ldr r2, [r5, #0x8]
    cmp r2, #0x0
    beq L_02054d34
    cmp r2, #0x1
    beq L_02054ca8
    cmp r2, #0x2
    beq L_02054cbc
    b L_02054d34
L_02054ca8:
    bl func_02054d48
    add r1, r5, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02054d34
L_02054cbc:
    add r3, r5, #0x1c
    ldr r0, [r5, #0x20]
    ldr r2, [r3, #0x0]
    sub r0, r1, r0
    add r0, r2, r0
    str r0, [r3, #0x0]
    b L_02054d34
L_02054cd8:
    ldr r2, [r5, #0x8]
    cmp r2, #0x0
    beq L_02054cf8
    cmp r2, #0x1
    beq L_02054d34
    cmp r2, #0x2
    beq L_02054d0c
    b L_02054d34
L_02054cf8:
    bl func_02054d48
    add r1, r5, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02054d34
L_02054d0c:
    add r3, r5, #0x1c
    ldr r0, [r5, #0x20]
    ldr r2, [r3, #0x0]
    sub r0, r1, r0
    add r0, r2, r0
    str r0, [r3, #0x0]
    b L_02054d34
L_02054d28:
    ldr r0, [r5, #0x8]
    cmp r0, #0x2
    strne r1, [r5, #0x20]
L_02054d34:
    str r4, [r5, #0x8]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
