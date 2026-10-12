#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020efa10[];
extern char data_020f8fc0[];
// clang-format off
asm void func_02026694(void) {
    ldr r3, =data_020efa10
    ldr r2, =data_020f8fc0
    str r3, [r0, #0x0]
    str r2, [r0, #0x0]
    add r2, r0, #0x24
    swpb r1, r1, [r2]
    add r2, r0, #0x4
    mov r1, #0x0
    swpb r1, r1, [r2]
    bx lr
}
// clang-format on
