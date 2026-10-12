#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02065440();
// clang-format off
asm void func_02087e84(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r1
    add r1, r5, r4, lsl #0x2
    mov r0, r2
    ldr r2, [r1, #0x500]
    add r1, r5, r4, lsl #0x8
    bl func_02065440
    ldr r0, =0x514
    add r1, r5, r4
    add r1, r1, r0
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
