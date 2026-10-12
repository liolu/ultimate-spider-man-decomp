#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02014a90(void) {
    add r1, r0, #0x34
    mov r0, #0x0
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
