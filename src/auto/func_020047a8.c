#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000e8c();
extern void func_020855ec();
extern char data_020b5320[];
extern char data_020b532c[];
// clang-format off
asm void func_020047a8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0xa4]
    ldr r1, =data_020b5320
    add r0, r0, #0x4
    bl func_02000e8c
    ldr r0, [r4, #0xa4]
    ldr r1, =data_020b532c
    add r0, r0, #0x1c
    bl func_02000e8c
    add r2, r4, #0x1c
    ldrb r0, [r2, #0x0]
    mov r1, #0x7
    bic r0, r0, #0x20
    swpb r0, r0, [r2]
    ldrb r0, [r2, #0x0]
    orr r0, r0, #0x80
    swpb r0, r0, [r2]
    str r1, [r4, #0x1b8]
    ldrb r0, [r4, #0x10]
    cmp r0, #0x0
    beq L_02004810
    ldr r0, [r4, #0xbc]
    mov r1, #0x1
    mov r2, #0x3c
    bl func_020855ec
L_02004810:
    add r1, r4, #0x1d
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x40
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
