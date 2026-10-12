#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0213b318[];
// clang-format off
asm void func_02011798(void) {
    add r2, r0, #0x2bc
    mov r1, #0x0
    swpb r1, r1, [r2]
    ldr r1, =data_0213b318
    ldr r2, [r0, #0xa8]
    ldr r3, [r1, #0x0]
    mov r1, #0x3e8
    sub r2, r3, r2
    mul r3, r2, r1
    ldr r1, =0x88888889
    add r2, r0, #0xa4
    umull r0, r1, r3, r1
    ldr r0, [r2, #0x0]
    mov r1, r1, lsr #0x5
    add r0, r0, r1
    str r0, [r2, #0x0]
    bx lr
}
// clang-format on
