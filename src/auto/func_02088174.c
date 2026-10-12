#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02088174(void) {
    mov ip, #0x0
    mov r3, ip
L_0208817c:
    add r1, r0, ip
    add r2, r1, #0x328
    swpb r1, r3, [r2]
    add r1, r0, ip, lsl #0x2
    add ip, ip, #0x1
    str r3, [r1, #0x32c]
    cmp ip, #0x4
    blt L_0208817c
    bx lr
}
// clang-format on
