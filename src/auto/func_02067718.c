#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f310();
extern void func_02069288();
extern void func_020699dc();
extern void func_0207c284();
extern char data_0214876c[];
// clang-format off
asm void func_02067718(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x4
    mov r9, r0
    bl func_0202f310
    mov r8, #0x0
    ldr r4, =data_0214876c
    mov r7, r8
    mov r5, r8
    add r6, r9, #0x18
L_0206773c:
    add r2, r9, r8, lsl #0x2
    ldr r1, [r2, #0x1c]
    ldrb r0, [r1, #0x26]
    cmp r0, #0x0
    beq L_0206778c
    add r1, r1, #0x26
    swpb r0, r7, [r1]
    ldr r0, [r2, #0x1c]
    bl func_02069288
    ldr r1, [r6, #0x0]
    mov r0, r9
    add r1, r1, #0x1
    str r1, [r6, #0x0]
    bl func_020699dc
    str r5, [sp, #0x0]
    mov r0, r4
    ldr r1, [r9, #0x48]
    mov r2, r5
    mov r3, r5
    bl func_0207c284
L_0206778c:
    add r8, r8, #0x1
    cmp r8, #0x9
    blt L_0206773c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
