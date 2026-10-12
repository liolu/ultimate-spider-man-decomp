#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02029654(void) {
    str r1, [r0, #0x0]
    str r2, [r0, #0x4]
    ldr r1, [r0, #0x4]
    mov r3, #0x0
    str r1, [r0, #0x8]
    str r3, [r0, #0xc]
    mvn r1, #0x0
    str r1, [r0, #0x10]
    str r3, [r0, #0x14]
    add r2, r0, #0x18
    swpb r1, r3, [r2]
    add r1, r0, #0x19
    ldrb r0, [r0, #0x18]
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
