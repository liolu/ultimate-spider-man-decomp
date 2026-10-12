#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064e90();
// clang-format off
asm void func_02065388(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    and r0, r7, #0x3
    mov r6, r1
    rsb r0, r0, #0x4
    mov r5, r2
    mov r4, r7
    and r2, r0, #0x3
    and r1, r6, #0xff
    b L_020653b8
L_020653b0:
    swpb r0, r1, [r4]
    add r4, r4, #0x1
L_020653b8:
    cmp r2, #0x0
    sub r2, r2, #0x1
    beq L_020653d0
    cmp r5, #0x0
    sub r5, r5, #0x1
    bne L_020653b0
L_020653d0:
    cmp r5, #0x1f
    bls L_020653f8
    and r0, r5, #0x1f
    sub r8, r5, r0
    mov r0, r4
    mov r1, r6
    mov r2, r8
    bl func_02064e90
    add r4, r4, r8
    sub r5, r5, r8
L_020653f8:
    cmp r5, #0x3
    bls L_02065410
L_02065400:
    sub r5, r5, #0x4
    cmp r5, #0x3
    str r6, [r4], #0x4
    bhi L_02065400
L_02065410:
    cmp r5, #0x0
    sub r5, r5, #0x1
    beq L_02065434
    and r1, r6, #0xff
L_02065420:
    swpb r0, r1, [r4]
    cmp r5, #0x0
    add r4, r4, #0x1
    sub r5, r5, #0x1
    bne L_02065420
L_02065434:
    mov r0, r7
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
