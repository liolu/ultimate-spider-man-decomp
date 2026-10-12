#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0208a28c(void) {
    ldr r2, =0x4fc
    str r1, [r0, #0x4f8]
    add r1, r0, r2
    mov r0, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
