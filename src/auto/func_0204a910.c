#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0204a910(void) {
    ldr r1, =0xc0de608d
    add r2, r0, #0x4
    str r1, [r0, #0x0]
    mov r3, #0x7f
    swpb r1, r3, [r2]
    add r2, r0, #0x5
    swpb r1, r3, [r2]
    add r2, r0, #0x6
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r2, r0, #0x7
    swpb r1, r3, [r2]
    add r1, r0, #0x8
    swpb r0, r3, [r1]
    bx lr
}
// clang-format on
