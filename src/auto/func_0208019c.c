#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0208019c(void) {
    ldrb r1, [r0, #0x534]
    cmp r1, #0x0
    bxne lr
    ldr r1, =0x534
    ldr r3, =0x535
    add r2, r0, r1
    mov ip, #0x1
    swpb r1, ip, [r2]
    add r1, r0, r3
    swpb r0, ip, [r1]
    bx lr
}
// clang-format on
