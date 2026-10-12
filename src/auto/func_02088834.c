#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02088834(void) {
    ldr r2, =0x57e
    mov ip, #0x1
    add r3, r0, r2
    swpb r2, ip, [r3]
    str r1, [r0, #0x588]
    bx lr
}
// clang-format on
