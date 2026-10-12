#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cd8();
extern void func_02003dc8();
extern void func_02003eec();
extern void func_02003efc();
extern void func_020047a8();
extern void func_0202718c();
extern void func_0202f7f4();
extern void ip();
extern void r1();
extern void r2();
// clang-format off
asm void func_02004980(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldrb r1, [r4, #0xa9]
    cmp r1, #0x0
    beq L_020049b0
    bl func_0202f7f4
    add r1, r4, #0xa8
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0xa9
    swpb r0, r2, [r1]
L_020049b0:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x120]
    blx r1
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, #0x0
    ldr r2, [r2, #0x8c]
    blx r2
    mov r0, r4
    mov r1, #0x0
    bl func_02003dc8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x28
    bl func_0202718c
    movs r5, r0
    beq L_02004a68
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    bl func_02003cd8
    mov r0, r4
    ldr ip, [r0, #0x0]
    mov r2, #0x0
    ldr ip, [ip, #0xc8]
    mov r1, r5
    mov r3, r2
    blx ip
    ldrb r2, [r4, #0x15e]
    mov r0, r4
    mov r1, r5
    mov r3, #0x0
    bl func_02003efc
    mov r2, #0x0
    mov r1, r5
    mov r0, r4
    mov r3, r2
    bl func_02003eec
    mov r0, #0x6
    add sp, sp, #0x4
    str r0, [r4, #0x1b8]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02004a68:
    mov r0, r4
    bl func_020047a8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
