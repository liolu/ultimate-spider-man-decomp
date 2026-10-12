#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02063360(void) {
    mvn r1, #0x80000000
    str r1, [r0, #0x0]
    str r1, [r0, #0x4]
    add r1, r0, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
