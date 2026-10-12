#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb5b0();
extern void func_01ffb5c8();
extern void func_0202f17c();
extern char data_023c0004[];
// clang-format off
asm void func_02083460(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    mov r0, #0x0
    str r0, [r5, #0x0]
    str r0, [r5, #0x4]
    str r0, [r5, #0x8]
    add r2, r5, #0xc
    mov r4, r1
    swpb r0, r0, [r2]
    ldr r2, =data_023c0004
    mov r0, #0x1c
    mov r1, #0x1
    str r5, [r2, #0x0]
    bl func_01ffb5b0
    str r0, [r5, #0x0]
    mov r8, #0x0
    mov r7, #0x10
    mov r6, #0x1
L_020834a8:
    mov r0, r7
    mov r1, r6
    bl func_01ffb5c8
    cmp r0, #0x0
    beq L_020834c4
    ldr r1, [r4, r8, lsl #0x2]
    bl func_0202f17c
L_020834c4:
    ldr r1, [r5, #0x0]
    str r0, [r1, r8, lsl #0x2]
    add r8, r8, #0x1
    cmp r8, #0x7
    blt L_020834a8
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
