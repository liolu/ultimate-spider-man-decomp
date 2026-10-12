#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064e64();
// clang-format off
asm void func_02065440(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r7, r0
    mov r6, r1
    and r1, r7, #0x3
    and r0, r6, #0x3
    mov r5, r2
    mov r4, r7
    cmp r1, r0
    bne L_020654e0
    rsb r0, r1, #0x4
    and r1, r0, #0x3
    b L_0206547c
L_02065470:
    ldrb r0, [r6], #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
L_0206547c:
    cmp r1, #0x0
    sub r1, r1, #0x1
    beq L_02065494
    cmp r5, #0x0
    sub r5, r5, #0x1
    bne L_02065470
L_02065494:
    cmp r5, #0x1f
    bls L_020654c0
    and r0, r5, #0x1f
    sub r8, r5, r0
    mov r0, r4
    mov r1, r6
    mov r2, r8
    bl func_02064e64
    add r4, r4, r8
    add r6, r6, r8
    sub r5, r5, r8
L_020654c0:
    cmp r5, #0x3
    bls L_02065534
L_020654c8:
    ldr r0, [r6], #0x4
    sub r5, r5, #0x4
    cmp r5, #0x3
    str r0, [r4], #0x4
    bhi L_020654c8
    b L_02065534
L_020654e0:
    add r0, r1, r0
    ands r0, r0, #0x1
    bne L_02065534
    and r1, r1, #0x1
    b L_02065500
L_020654f4:
    ldrb r0, [r6], #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
L_02065500:
    cmp r1, #0x0
    sub r1, r1, #0x1
    beq L_02065518
    cmp r5, #0x0
    sub r5, r5, #0x1
    bne L_020654f4
L_02065518:
    cmp r5, #0x1
    bls L_02065534
L_02065520:
    ldrsh r0, [r6], #0x2
    sub r5, r5, #0x2
    cmp r5, #0x1
    strh r0, [r4], #0x2
    bhi L_02065520
L_02065534:
    cmp r5, #0x0
    sub r5, r5, #0x1
    beq L_02065558
L_02065540:
    ldrb r0, [r6], #0x1
    cmp r5, #0x0
    sub r5, r5, #0x1
    swpb r0, r0, [r4]
    add r4, r4, #0x1
    bne L_02065540
L_02065558:
    mov r0, r7
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
