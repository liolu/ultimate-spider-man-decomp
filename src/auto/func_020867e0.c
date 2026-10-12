#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208685c();
extern void func_020868c0();
// clang-format off
asm void func_020867e0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r1, r4
    add r3, r4, #0x52
    mov r2, #0x0
    swpb r2, r2, [r3]
    bl func_0208685c
    mov r0, r4
    add r1, r4, #0x28
    bl func_0208685c
    ldr r0, =0x4000004
    ldrh r0, [r0, #0x0]
    ands r0, r0, #0x1
    beq L_02086844
    mov r0, r4
    add r1, r4, #0x28
    bl func_020868c0
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    mov r1, r4
    bl func_020868c0
    ldmfd sp!, {r4, lr}
    bx lr
L_02086844:
    mov r0, r4
    mov r1, r4
    bl func_020868c0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
