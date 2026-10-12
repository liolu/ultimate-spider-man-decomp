#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202c3bc(void) {
    add r2, r0, #0x5
    swpb r0, r1, [r2]
    bx lr
}
// clang-format on
