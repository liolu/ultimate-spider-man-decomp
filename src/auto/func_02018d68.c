#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0213bf4c[];
// clang-format off
asm void func_02018d68(void) {
    ldr r2, =data_0213bf4c
    mov r1, #0x14
    mla r1, r0, r1, r2
    mov r0, #0x0
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
