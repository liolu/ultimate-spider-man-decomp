#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02033a8c();
extern void func_02055030();
// clang-format off
asm void func_02033ba4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    add r1, r4, #0xc
    mov r2, #0x0
    swpb r0, r2, [r1]
    ldr r0, =0x15d
    ldr r3, [r4, #0x4]
    ldr r1, [r3, #0xbc]
    add r3, r3, r0
    ldr r1, [r1, #0xcc]
    swpb r0, r2, [r3]
    ldr r0, [r4, #0x8]
    bl func_02033a8c
    mov r0, r4
    add r2, r4, #0xd
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02055030
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
