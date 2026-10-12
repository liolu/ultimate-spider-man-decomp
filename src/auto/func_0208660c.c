#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0208660c(void) {
    add r2, r0, #0x45
    mov r1, #0x0
    swpb r1, r1, [r2]
    bx lr
}
// clang-format on
