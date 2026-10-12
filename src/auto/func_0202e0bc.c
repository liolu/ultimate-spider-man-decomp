#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020efa10[];
extern char data_021016c0[];
// clang-format off
asm void func_0202e0bc(void) {
    ldr r2, =data_020efa10
    ldr r1, =data_021016c0
    str r2, [r0, #0x0]
    str r1, [r0, #0x0]
    add r2, r0, #0x4
    mov r1, #0x1
    swpb r1, r1, [r2]
    add r2, r0, #0x5
    mov r3, #0x0
    swpb r1, r3, [r2]
    add r2, r0, #0x6
    swpb r1, r3, [r2]
    bx lr
}
// clang-format on
