#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024c20();
extern void func_0202f64c();
extern void func_02054b18();
extern void func_02055758();
extern void func_02064fc8();
extern void func_02086e7c();
extern char data_0211abe0[];
extern char data_0211abe4[];
extern char data_0211abf8[];
// clang-format off
asm void func_02069428(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x14
    mov r6, r0
    mov r0, #0x40
    mov r7, r1
    mov r5, r2
    mov r4, r3
    bl func_02064fc8
    movs r1, r0
    beq L_02069464
    ldr r1, =data_0211abe0
    mov r2, r7
    ldr r1, [r1, #0x0]
    bl func_02024c20
    mov r1, r0
L_02069464:
    mov r0, r6
    mov r2, r5
    bl func_02055758
    ldr r0, =data_0211abf8
    add r1, r6, #0x26
    str r0, [r6, #0x0]
    mov r2, #0x0
    swpb r0, r2, [r1]
    ldr r1, =data_0211abe4
    str r2, [r6, #0x38]
    str r4, [r6, #0x3c]
    ldr r2, [r1, #0x0]
    mov r0, #0x24
    str r2, [r6, #0x40]
    ldr r2, [r1, #0x4]
    str r2, [r6, #0x44]
    ldr r1, [r1, #0x8]
    str r1, [r6, #0x48]
    ldr r1, [r6, #0x3c]
    str r1, [r6, #0x48]
    ldr r2, [r6, #0x20]
    ldr r1, [r5, #0x0]
    ldr r2, [r2, #0x14]
    ldrh r4, [r2, #0x10]
    sub r3, r1, r4, lsr #0x1
    str r3, [sp, #0x0]
    ldrh r2, [r2, #0x12]
    ldr r1, [r5, #0x4]
    sub r1, r1, r2, lsr #0x1
    str r1, [sp, #0x4]
    str r4, [sp, #0x8]
    str r2, [sp, #0xc]
    str r3, [r6, #0x28]
    str r1, [r6, #0x2c]
    ldr r2, [sp, #0x8]
    ldr r1, [sp, #0xc]
    str r2, [r6, #0x30]
    str r1, [r6, #0x34]
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02069514
    add r1, r6, #0x40
    add r2, r6, #0x28
    bl func_02086e7c
L_02069514:
    ldr r1, =data_0211abe0
    str r0, [r6, #0x4c]
    ldr r0, [r6, #0x20]
    ldr r1, [r1, #0x0]
    mov r2, #0x0
    bl func_02054b18
    mov r0, r6
    bl func_0202f64c
    mov r0, r6
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
