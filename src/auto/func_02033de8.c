#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern void func_02055278();
extern char data_021029a0[];
// clang-format off
asm void func_02033de8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02055278
    ldr r0, =data_021029a0
    add r1, r4, #0xc
    str r0, [r4, #0x0]
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r2, r4, #0xd
    mov r0, r4
    swpb r1, r3, [r2]
    bl func_0202f64c
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
