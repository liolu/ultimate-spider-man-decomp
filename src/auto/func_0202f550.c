#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024d8c();
extern char data_020efa10[];
extern char data_02102140[];
// clang-format off
asm void func_0202f550(void) {
    stmfd sp!, {r4, lr}
    ldr r3, =data_020efa10
    mov r4, r0
    ldr r2, =data_02102140
    str r3, [r4, #0x0]
    add r0, r4, #0x4
    str r2, [r4, #0x0]
    bl func_02024d8c
    mov r2, #0x0
    str r2, [r4, #0x8]
    add r0, r4, #0x8
    str r0, [r4, #0xc]
    str r0, [r4, #0x10]
    add r1, r4, #0x14
    swpb r0, r2, [r1]
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
