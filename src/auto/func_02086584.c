#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_0208c950[];
// clang-format off
asm void func_02086584(void) {
    add r2, r0, #0x44
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldr ip, =func_0208c950
    ldrh r0, [r0, #0x46]
    bx ip
}
// clang-format on
