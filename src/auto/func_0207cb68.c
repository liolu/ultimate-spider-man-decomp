#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206e704();
extern void func_0207cce0();
extern void func_0207ccec();
// clang-format off
asm void func_0207cb68(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r7, r0
    ldr r0, =0x3e6c
    mov r4, r1
    mov r6, r2
    mov r5, r3
    bl func_0207ccec
    mov r3, #0x0
    str r3, [sp, #0x18]
    ldrb r2, [r7, #0x0]
    add r9, sp, #0x18
    add r1, sp, #0x19
    swpb r2, r2, [r9]
    sub r8, r4, #0x4
    ldrb r2, [r7, #0x1]
    add r11, sp, #0x1a
    add r9, r7, #0x4
    swpb r2, r2, [r1]
    add lr, sp, #0x1b
    ldrb ip, [r7, #0x2]
    mov r10, #0x2
    ldr r1, =0x3e6c
    swpb ip, ip, [r11]
    mov r4, r0
    ldrb r7, [r7, #0x3]
    mov r2, #0x3
    swpb r7, r7, [lr]
    str r10, [sp, #0x0]
    str r9, [sp, #0x4]
    str r8, [sp, #0x8]
    str r6, [sp, #0xc]
    ldr r6, [sp, #0x18]
    str r6, [sp, #0x10]
    str r5, [sp, #0x14]
    bl func_0206e704
    mov r5, r0
    mov r0, r4
    bl func_0207cce0
    cmp r5, #0x0
    moveq r0, #0x0
    movne r0, #0x15
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
