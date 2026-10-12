#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020883c0(void) {
    ldr r1, =0x78f
    mov r2, #0xb
    str r2, [r0, #0xc]
    add r2, r0, r1
    mov r3, #0x1
    swpb r1, r3, [r2]
    add r1, r0, #0x790
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
