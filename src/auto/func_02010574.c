#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020f754c[];
extern char data_0213b6e0[];
// clang-format off
asm void func_02010574(void) {
    cmp r1, #0x0
    beq L_02010590
    cmp r1, #0x1
    beq L_02010590
    cmp r1, #0x2
    beq L_020105b4
    b L_020105e0
L_02010590:
    cmp r1, #0x1
    moveq r2, #0x1
    movne r2, #0x0
    add r3, r0, #0xa8
    swpb r2, r2, [r3]
    add r3, r0, #0x1d8
    mov r2, #0x1
    swpb r2, r2, [r3]
    b L_020105e0
L_020105b4:
    add r3, r0, #0xa8
    mov ip, #0x0
    swpb r2, ip, [r3]
    add r3, r0, #0x1d8
    swpb r2, ip, [r3]
    ldr r3, =data_0213b6e0
    ldr r2, =data_020f754c
    ldr r3, [r3, #0x0]
    ldr r2, [r2, #0x0]
    add r2, r3, r2
    str r2, [r0, #0x784]
L_020105e0:
    str r1, [r0, #0x778]
    ldr r1, [r0, #0x778]
    ldr r0, [r0, #0xbc]
    str r1, [r0, #0xb0]
    bx lr
}
// clang-format on
