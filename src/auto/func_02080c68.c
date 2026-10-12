#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_02065678();
extern void func_02070344();
extern void func_0208bc60();
extern void func_0208bfbc();
extern char data_0211c31c[];
extern char data_0211c38c[];
extern char data_02150b7c[];
extern char data_ov000_0215605c[];
// clang-format off
asm void func_02080c68(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl func_0208bfbc
    ldr r0, [r0, #0x8]
    cmp r0, #0x1
    beq L_02080c98
    cmp r0, #0x5
    beq L_02080cac
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
L_02080c98:
    bl func_0208bfbc
    bl func_0208bc60
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
L_02080cac:
    mov r1, #0x1
    mov r0, #0x2
    mov r2, r1
    str r0, [r4, #0x4]
    bl func_02070344
    ldr r0, =data_02150b7c
    ldr r1, =data_0211c38c
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_0211c31c
    ldr r3, =data_02150b7c
    ldr lr, =data_ov000_0215605c
    add ip, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, ip
    str lr, [r3, #0x14]
    bl func_0202f5f0
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
