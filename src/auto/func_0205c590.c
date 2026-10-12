#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0205c590(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x4
    mov r8, #0x0
    mov r9, r8
    cmp r1, #0x0
    bls L_0205c65c
    mov r3, r8
    mov lr, r8
L_0205c5b0:
    ldrb r7, [r0, r8]
    mov r5, lr
    add r8, r8, #0x1
L_0205c5bc:
    ands r4, r7, #0x80
    beq L_0205c62c
    ldrb ip, [r0, r8]
    add r4, r0, r8
    ldrb r6, [r4, #0x1]
    and r4, ip, #0xf
    mov r4, r4, lsl #0x18
    orr r4, r6, r4, lsr #0x10
    add r4, r4, #0x1
    mov r4, r4, lsl #0x10
    mov r6, ip, asr #0x4
    mov r7, r7, lsl #0x1
    sub r11, r9, r4, lsr #0x10
    add r10, r6, #0x3
    mov r4, r3
    add r8, r8, #0x2
    and r7, r7, #0xff
    add r6, r2, r11
    ands ip, r10, #0xff
    beq L_0205c648
L_0205c60c:
    ldrb r10, [r6, r4]
    add r11, r2, r9
    add r9, r9, #0x1
    swpb r10, r10, [r11]
    add r4, r4, #0x1
    cmp r4, ip
    blo L_0205c60c
    b L_0205c648
L_0205c62c:
    ldrb r4, [r0, r8]
    add r6, r2, r9
    mov r7, r7, lsl #0x1
    swpb r4, r4, [r6]
    add r8, r8, #0x1
    add r9, r9, #0x1
    and r7, r7, #0xff
L_0205c648:
    add r5, r5, #0x1
    cmp r5, #0x8
    blo L_0205c5bc
    cmp r9, r1
    blo L_0205c5b0
L_0205c65c:
    ands r0, r9, #0x3
    mov r3, #0x0
    beq L_0205c688
    add r4, r2, r9
    mov r2, r3
L_0205c670:
    add r3, r3, #0x1
    add r1, r9, r3
    swpb r0, r2, [r4]
    add r4, r4, #0x1
    ands r0, r1, #0x3
    bne L_0205c670
L_0205c688:
    mov r0, r9
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
