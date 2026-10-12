#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020277a4();
extern void func_0202f358();
extern void func_0202f550();
extern void func_0202f66c();
extern void func_0204e9a8();
extern void func_0204f77c();
extern void func_0205c8f8();
extern void func_0205c918();
extern void func_0205c920();
extern void func_0205c940();
extern void func_02064fc8();
extern char data_020f0068[];
extern char data_02146128[];
// clang-format off
asm void func_0200d934(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r6, r2
    mov r7, r1
    mov r5, r3
    bl func_0202f66c
    mov r2, r0
    mov r0, r4
    mov r1, r6
    bl func_0204f77c
    ldr r2, =data_020f0068
    add r0, r4, #0x2c
    mov r1, #0x1
    str r2, [r4, #0x0]
    bl func_0202f550
    add r1, r4, #0x4c
    swpb r0, r5, [r1]
    mov r0, #0x4
    bl func_02064fc8
    movs r1, r0
    beq L_0200d994
    bl func_0204e9a8
    mov r1, r0
L_0200d994:
    add r0, r4, #0x2c
    mov r2, #0x1
    bl func_0202f358
    mov r0, #0x3c
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0200d9b8
    mov r1, r7
    bl func_020277a4
L_0200d9b8:
    str r0, [r4, #0x28]
    ldr r1, [r4, #0x28]
    add r0, r4, #0x2c
    mov r2, #0x1
    bl func_0202f358
    ldrb r0, [r4, #0x4c]
    cmp r0, #0x0
    beq L_0200da08
    ldr r0, =data_02146128
    bl func_0205c940
    str r0, [r4, #0x44]
    ldr r0, =data_02146128
    bl func_0205c918
    str r0, [r4, #0x48]
    ldr r0, =data_02146128
    mov r1, #0x7f
    bl func_0205c920
    ldr r0, =data_02146128
    mov r1, #0x7f
    bl func_0205c8f8
L_0200da08:
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
