#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205d0cc();
extern void func_0205d79c();
// clang-format off
asm void func_02034328(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x238
    mov r8, r0
    ldr r0, [r8, #0x4c]
    add r1, sp, #0x18
    str r0, [sp, #0x8]
    ldr r0, [r8, #0x50]
    mov r2, #0x0
    str r0, [sp, #0xc]
    ldr r0, [r8, #0x19c]
    str r0, [sp, #0x10]
    ldr r0, [r8, #0x1a0]
    str r0, [sp, #0x14]
    add r0, sp, #0x218
L_02034360:
    str r2, [r1], #0x8
    cmp r1, r0
    bne L_02034360
    mov r0, #0x40
    str r0, [sp, #0x220]
    add r0, sp, #0x8
    add r1, sp, #0x18
    str r2, [sp, #0x220]
    str r2, [sp, #0x218]
    str r2, [sp, #0x21c]
    str r2, [sp, #0x224]
    str r2, [sp, #0x230]
    str r2, [sp, #0x228]
    str r2, [sp, #0x22c]
    str r2, [sp, #0x234]
    bl func_0205d0cc
    str r0, [sp, #0x220]
    cmp r0, #0x0
    mov r7, #0x0
    ble L_0203443c
    add r5, sp, #0x18
    add r6, sp, #0x8
    add r4, sp, #0x0
L_020343bc:
    ldr r1, [r5, r7, lsl #0x3]
    mov r0, r6
    mov r2, r4
    bl func_0205d79c
    ldr r1, [r8, #0x4c]
    ldr r0, [r8, #0x19c]
    subs r2, r0, r1
    ldr r0, [sp, #0x0]
    rsbmi r2, r2, #0x0
    subs r1, r0, r1
    rsbmi r1, r1, #0x0
    cmp r1, r2
    strlt r0, [r8, #0x19c]
    ldrlt r0, [r5, r7, lsl #0x3]
    ldrlt r0, [r0, #0x10]
    strlt r0, [r8, #0x198]
    ldr r1, [r8, #0x50]
    ldr r0, [r8, #0x1a0]
    subs r2, r0, r1
    ldr r0, [sp, #0x4]
    rsbmi r2, r2, #0x0
    subs r1, r0, r1
    rsbmi r1, r1, #0x0
    cmp r1, r2
    strlt r0, [r8, #0x1a0]
    ldrlt r0, [r5, r7, lsl #0x3]
    add r7, r7, #0x1
    ldrlt r0, [r0, #0x10]
    strlt r0, [r8, #0x198]
    ldr r0, [sp, #0x220]
    cmp r7, r0
    blt L_020343bc
L_0203443c:
    cmp r0, #0x0
    movgt r0, #0x1
    movle r0, #0x0
    add r1, r8, #0x1a4
    swpb r0, r0, [r1]
    ldrb r0, [r8, #0x1a4]
    add sp, sp, #0x238
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
