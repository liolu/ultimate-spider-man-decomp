#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern char data_020efa10[];
extern char data_02118144[];
// clang-format off
asm void func_020599f0(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_020efa10
    mov r4, r0
    ldr r2, =data_02118144
    str r3, [r4, #0x0]
    str r2, [r4, #0x0]
    mov r2, #0x0
    str r2, [r4, #0x4]
    add r2, r4, #0x14
    swpb r1, r1, [r2]
    bl func_0202f64c
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
