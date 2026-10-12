#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02087ff4(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    mov lr, #0x0
    ldr r1, =0x514
    mov ip, lr
L_02088008:
    add r2, r0, lr
    add r3, r2, r1
    swpb r2, ip, [r3]
    add r2, r0, lr, lsl #0x2
    add lr, lr, #0x1
    str ip, [r2, #0x500]
    cmp lr, #0x5
    blt L_02088008
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
