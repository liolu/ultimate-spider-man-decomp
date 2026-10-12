#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200bfdc();
extern void func_02024c20();
extern void func_02055758();
extern void func_02064fc8();
extern char data_020b45f0[];
extern char data_020efe44[];
extern char data_021393a8[];
extern char data_0213d440[];
extern char data_02143e44[];
// clang-format off
asm void func_0200c194(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r0, #0x40
    bl func_02064fc8
    movs r1, r0
    beq L_0200c1bc
    ldr r1, =data_021393a8
    mov r2, #0x1
    bl func_02024c20
    mov r1, r0
L_0200c1bc:
    ldr r2, =data_020b45f0
    mov r0, r4
    bl func_02055758
    ldr r1, =data_020efe44
    ldr r0, =data_02143e44
    str r1, [r4, #0x0]
    ldr r1, [r0, #0x14]
    ldr r0, =data_0213d440
    str r1, [r4, #0x28]
    ldrb r1, [r0, #0x38]
    add r2, r4, #0x2c
    mov r0, r4
    swpb r1, r1, [r2]
    bl func_0200bfdc
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
