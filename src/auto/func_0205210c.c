#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01fff100();
// clang-format off
asm void func_0205210c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r0, [r5, #0x3c]
    mov r4, r1
    ldr r0, [r0, #0x18]
    mov r6, #0x0
    cmp r0, #0x0
    bls L_02052150
L_0205212c:
    ldr r0, [r5, #0x50]
    mov r1, r4
    ldr r0, [r0, r6, lsl #0x2]
    bl func_01fff100
    ldr r0, [r5, #0x3c]
    add r6, r6, #0x1
    ldr r0, [r0, #0x18]
    cmp r6, r0
    blo L_0205212c
L_02052150:
    add r1, r5, #0x68
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
