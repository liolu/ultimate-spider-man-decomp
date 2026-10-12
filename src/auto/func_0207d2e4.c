#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_02150aa0[];
// clang-format off
asm void func_0207d2e4(void) {
    ldr r1, =data_02150aa0
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
