#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_020efa10[];
extern char data_021181c8[];
extern char data_0214611c[];
extern char data_02146120[];
// clang-format off
asm void func_02059fec(void) {
    ldr r1, =data_021181c8
    ldr r2, =data_0214611c
    str r1, [r0, #0x0]
    mov ip, #0x0
    ldr r3, =data_02146120
    swpb r1, ip, [r2]
    ldr r1, =data_020efa10
    str ip, [r3, #0x0]
    str r1, [r0, #0x0]
    bx lr
}
// clang-format on
