#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088834();
// clang-format off
asm void func_02088350(void) {
    stmfd sp!, {r4, lr}
    add lr, r0, #0x700
    strh r1, [lr, #0x8c]
    ldrh r3, [lr, #0x8c]
    mov r1, #0x36
    mla r1, r3, r1, r0
    add r1, r1, #0x600
    ldrh r1, [r1, #0x7c]
    cmp r2, r1
    bne L_020883a8
    ldr r1, =0x78e
    mov r4, #0x1
    add r3, r0, r1
    swpb r1, r4, [r3]
    ldr ip, =0x791
    add r1, r0, ip
    swpb r0, r4, [r1]
    ldrh r0, [lr, #0x9a]
    sub r0, r0, r2
    strh r0, [lr, #0x92]
    ldmfd sp!, {r4, lr}
    bx lr
L_020883a8:
    mov r1, #0x9
    bl func_02088834
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
