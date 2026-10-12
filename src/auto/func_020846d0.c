#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char func_020843b0[];
// clang-format off
asm void func_020846d0(void) {
    ldr r2, =0x249
    add r3, r0, #0x8000
    cmp r1, #0x7f
    movhs r1, #0x7f
    add r2, r3, r2
    swpb r1, r1, [r2]
    add r2, r0, #0x8000
    ldrb r3, [r3, #0x249]
    ldr r1, =0x249
    ldr ip, =func_020843b0
    cmp r3, #0x0
    moveq r3, #0x0
    add r2, r2, r1
    swpb r1, r3, [r2]
    bx ip
}
// clang-format on
