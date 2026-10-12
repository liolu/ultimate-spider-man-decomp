#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02060414(void) {
    cmp r1, #0x0
    beq L_02060440
    ldrb r1, [r0, #0xc8]
    cmp r1, #0x0
    bxne lr
    add r2, r0, #0xc8
    mov r3, #0x1
    swpb r1, r3, [r2]
    add r1, r0, #0xd4
    swpb r0, r3, [r1]
    bx lr
L_02060440:
    ldrb r1, [r0, #0xc8]
    cmp r1, #0x0
    bxeq lr
    add r2, r0, #0xc8
    mov r1, #0x0
    swpb r1, r1, [r2]
    add r1, r0, #0xd5
    mov r0, #0x1
    swpb r0, r0, [r1]
    bx lr
}
// clang-format on
