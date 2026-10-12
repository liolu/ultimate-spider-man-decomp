#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_020133cc[];
// clang-format off
asm void func_0204a0e8(void) {
    ldr r1, [r0, #0x1b8]
    mov r3, #0x0
    cmp r1, #0x5
    beq L_0204a110
    cmp r1, #0x20
    bne L_0204a120
    ldr r1, [r0, #0x180]
    cmp r1, #0x41
    moveq r3, #0x1
    b L_0204a120
L_0204a110:
    ldr r2, [r0, #0x180]
    ldr r1, =0x193
    cmp r2, r1
    moveq r3, #0x1
L_0204a120:
    cmp r3, #0x0
    beq L_0204a144
    ldrb r1, [r0, #0x15e]
    cmp r1, #0x0
    ldr r1, =0x15e
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r0, r1
    swpb r1, r3, [r2]
L_0204a144:
    ldr ip, =func_020133cc
    bx ip
}
// clang-format on
