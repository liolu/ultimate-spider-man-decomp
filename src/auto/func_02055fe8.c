#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_021460e4[];
// clang-format off
asm void func_02055fe8(void) {
    ldr r2, =data_021460e4
    mov r3, #0x0
    mov r1, r3
L_02055ff4:
    add r3, r3, #0x1
    swpb r0, r1, [r2]
    cmp r3, #0x3
    add r2, r2, #0x1
    blt L_02055ff4
    bx lr
}
// clang-format on
