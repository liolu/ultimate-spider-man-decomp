#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202549c();
extern void func_02025858();
extern void func_0202f358();
extern void func_0202f550();
extern void func_0202f5a0();
extern void func_02046fcc();
extern void func_02064fc8();
extern void func_02065ab8();
extern char data_020f8f70[];
extern char data_02143e44[];
// clang-format off
asm void func_02026154(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    mov r1, #0x0
    mov r5, r0
    bl func_0202f5a0
    ldr r0, =data_020f8f70
    add r1, r5, #0x15
    mov r2, #0x1
    str r0, [r5, #0x0]
    swpb r0, r2, [r1]
    add r3, r5, #0x16
    swpb r2, r2, [r3]
    add r0, r5, #0x18
    mov r1, #0x0
    bl func_0202f550
    mov r0, r5
    mov r1, r4
    bl func_02025858
    mov r0, #0x14
    bl func_02064fc8
    movs r1, r0
    beq L_020261b8
    bl func_0202549c
    mov r1, r0
L_020261b8:
    mov r0, r5
    mov r2, #0x1
    bl func_0202f358
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    beq L_020261f8
    mov r0, #0x34
    bl func_02064fc8
    movs r1, r0
    beq L_020261ec
    bl func_02065ab8
    mov r1, r0
L_020261ec:
    mov r0, r5
    mov r2, #0x1
    bl func_0202f358
L_020261f8:
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
