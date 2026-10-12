#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020efa10[];
extern char data_0211c138[];
// clang-format off
asm void func_0207d148(void) {
    ldr r3, =data_020efa10
    ldr r2, =data_0211c138
    str r3, [r0, #0x0]
    str r2, [r0, #0x0]
    add r3, r0, #0x8
    mov r2, #0x0
    swpb r2, r2, [r3]
    mov r3, #0x1
    str r1, [r0, #0x4]
    ldr r1, [r0, #0x4]
    add r2, r1, #0xda
    swpb r1, r3, [r2]
    bx lr
}
// clang-format on
