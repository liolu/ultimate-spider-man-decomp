#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0205c7a4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    cmp r3, #0x8
    mov ip, #0x0
    bne L_0205c7f8
    ldrb r4, [r0, #0x0]
    cmp r1, #0x1
    add r3, ip, #0x1
    swpb ip, r4, [r2]
    mov r5, #0x1
    bls L_0205c84c
L_0205c7cc:
    add ip, r2, r5
    ldrb r4, [r0, r5]
    ldrb ip, [ip, #-0x1]
    add lr, r2, r3
    add r5, r5, #0x1
    add r4, r4, ip
    cmp r5, r1
    swpb ip, r4, [lr]
    add r3, r3, #0x1
    blo L_0205c7cc
    b L_0205c84c
L_0205c7f8:
    ldrh r3, [r0, #0x0]
    mov r5, r1, lsr #0x1
    cmp r5, #0x1
    strh r3, [r2, #0x0]
    add r3, ip, #0x2
    mov r4, #0x1
    bls L_0205c84c
    add r1, r3, r3, lsr #0x1f
    mov r6, r1, asr #0x1
L_0205c81c:
    mov ip, r4, lsl #0x1
    add r1, r2, r4, lsl #0x1
    ldrh lr, [r0, ip]
    ldrh ip, [r1, #-0x2]
    mov r1, r6, lsl #0x1
    add r4, r4, #0x1
    add ip, lr, ip
    strh ip, [r2, r1]
    cmp r4, r5
    add r6, r6, #0x1
    add r3, r3, #0x2
    blo L_0205c81c
L_0205c84c:
    ands r0, r3, #0x3
    mov r4, #0x0
    beq L_0205c87c
    mov r5, r3
    add r2, r2, r3
    mov r1, r4
L_0205c864:
    add r5, r5, #0x1
    swpb r0, r1, [r2]
    add r2, r2, #0x1
    add r4, r4, #0x1
    ands r0, r5, #0x3
    bne L_0205c864
L_0205c87c:
    mov r0, r3
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
