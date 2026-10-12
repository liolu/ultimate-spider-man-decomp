#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0206feac(void) {
    add r2, r0, #0x3e
    swpb r0, r1, [r2]
    bx lr
}
// clang-format on
