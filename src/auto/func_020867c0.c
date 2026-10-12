#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_020867e0[];
// clang-format off
asm void func_020867c0(void) {
    mov r1, #0x4
    str r1, [r0, #0x54]
    ldr ip, =func_020867e0
    add r2, r0, #0x53
    mov r1, #0x1
    swpb r1, r1, [r2]
    bx ip
}
// clang-format on
