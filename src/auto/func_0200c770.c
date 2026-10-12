#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200cd68();
extern void func_02046fcc();
extern void func_02064fc8();
extern char data_020efa10[];
extern char data_020efeac[];
extern char data_0213d440[];
extern char data_02143e44[];
extern char data_02150bb8[];
// clang-format off
asm void func_0200c770(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_020efa10
    mov r4, r0
    ldr r0, =data_020efeac
    str r1, [r4, #0x0]
    str r0, [r4, #0x0]
    mov r3, #0x0
    str r3, [r4, #0x4]
    mov r0, #0x80000000
    str r0, [r4, #0x8]
    str r3, [r4, #0xc]
    add r1, r4, #0x10
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, =data_0213d440
    ldr r0, =data_02150bb8
    str r3, [r4, #0x14]
    ldrb r2, [r0, #0x1]
    add r1, r1, #0x38
    swpb r0, r3, [r1]
    cmp r2, #0x0
    bne L_0200c7f0
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    beq L_0200c7f0
    mov r0, #0xb0
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0200c7ec
    bl func_0200cd68
L_0200c7ec:
    str r0, [r4, #0xc]
L_0200c7f0:
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
