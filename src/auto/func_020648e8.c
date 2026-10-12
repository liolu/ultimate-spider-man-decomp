#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020648e8(void) {
    ldr ip, =0x4b4
    add ip, r0, ip
    swpb r1, r1, [ip]
    ldr r1, [r2, #0x0]
    str r1, [r0, #0x4b8]
    ldr r1, [r2, #0x4]
    str r1, [r0, #0x4bc]
    str r3, [r0, #0x4c0]
    bx lr
}
// clang-format on
