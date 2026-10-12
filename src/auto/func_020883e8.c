#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020883e8(void) {
    stmfd sp!, {r4, lr}
    mov r4, #0x0
    strh r4, [r1, #0x0]
    mov r3, r4
    mov ip, r4
L_020883fc:
    strh ip, [r1, #0x12]
    strh ip, [r1, #0x14]
    strh ip, [r1, #0x16]
    strh ip, [r1, #0x18]
    mov lr, ip
    strh ip, [r1, #0x1a]
L_02088414:
    add r0, r1, lr
    add r2, r0, #0x2
    add lr, lr, #0x1
    cmp lr, #0x10
    swpb r0, r3, [r2]
    blt L_02088414
    add r4, r4, #0x1
    cmp r4, #0x2
    add r1, r1, #0x1a
    blt L_020883fc
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
