#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024c20();
extern void func_020556d8();
extern void func_02064fc8();
extern void func_020690d4();
extern void r2();
extern char data_0211ab78[];
extern char data_0211ab84[];
// clang-format off
asm void func_02068d30(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    mov r10, r0
    mov r5, r1
    mov r4, r2
    bl func_020690d4
    ldr r0, =data_0211ab84
    add r1, r10, #0x34
    mov r9, #0x0
    str r0, [r10, #0x0]
    swpb r0, r9, [r1]
    add r7, sp, #0x0
    str r5, [r10, #0x38]
    mvn r0, #0x0
    str r0, [r10, #0x3c]
    str r9, [r10, #0x40]
    str r4, [r10, #0x44]
    str r9, [r7, #0x0]
    ldr r11, =data_0211ab78
    str r9, [r7, #0x4]
    mov r4, #0x1
    mov r5, #0x40
    mov r6, #0x28
L_02068d8c:
    mov r0, r6
    bl func_02064fc8
    movs r8, r0
    beq L_02068dcc
    mov r0, r5
    bl func_02064fc8
    movs r1, r0
    beq L_02068dbc
    ldr r1, [r11, #0x0]
    mov r2, r4
    bl func_02024c20
    mov r1, r0
L_02068dbc:
    mov r0, r8
    mov r2, r7
    bl func_020556d8
    mov r8, r0
L_02068dcc:
    add r0, r10, r9, lsl #0x2
    str r8, [r0, #0x48]
    ldr r0, [r0, #0x48]
    mov r1, r4
    ldr r0, [r0, #0x20]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x18]
    blx r2
    add r9, r9, #0x1
    cmp r9, #0x5
    blt L_02068d8c
    mov r0, r10
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
