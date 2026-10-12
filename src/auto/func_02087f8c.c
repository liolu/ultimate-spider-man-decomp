#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02065440();
extern void func_02087f50();
// clang-format off
asm void func_02087f8c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r7, r0
    mov r6, r1
    mov r5, r2
    bl func_02087f50
    movs r4, r0
    addmi sp, sp, #0x4
    ldmmifd sp!, {r4, r5, r6, r7, lr}
    bxmi lr
    mov r1, r6
    mov r2, r5
    add r0, r7, r4, lsl #0x8
    bl func_02065440
    add r2, r7, r4, lsl #0x2
    ldr r0, =0x514
    add r1, r7, r4
    str r5, [r2, #0x500]
    add r1, r1, r0
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
