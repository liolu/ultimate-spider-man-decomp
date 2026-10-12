#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0209618c(void) {
    swp r0, r0, [r1]
    bx lr
}
// clang-format on
