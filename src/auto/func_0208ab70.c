#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088350();
extern void func_0209605c();
// clang-format off
asm void func_0208ab70(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r1
    ldrh r1, [r4, #0x2]
    mov r5, r0
    cmp r1, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldrh r0, [r4, #0x4]
    cmp r0, #0x15
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r0, [r4, #0xc]
    add r1, sp, #0x0
    mov r2, #0x4
    bl func_0209605c
    ldr r0, [sp, #0x0]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_0208acc8
L_0208abc8:
    b L_0208acc8
    b L_0208abe4
    b L_0208ac08
    b L_0208ac1c
    b L_0208ac58
    b L_0208ac7c
    b L_0208aca4
L_0208abe4:
    ldrh r1, [r4, #0x12]
    ldr r0, =0x514
    mov r2, #0x1
    add r1, r5, r1
    add r1, r1, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0208ac08:
    mov r0, #0x5
    add sp, sp, #0x4
    str r0, [r5, #0xc]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0208ac1c:
    ldrh r1, [r4, #0x12]
    ldr r0, =0x514
    mov r2, #0x1
    add r1, r5, r1
    add r1, r1, r0
    swpb r0, r2, [r1]
    ldr r1, [r4, #0xc]
    ldrh r0, [r4, #0x12]
    ldrh r1, [r1, #0x4]
    add sp, sp, #0x4
    add r0, r5, r0, lsl #0x1
    add r0, r0, #0x500
    strh r1, [r0, #0x1a]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0208ac58:
    mov r0, #0x9
    str r0, [r5, #0xc]
    ldr r1, [r4, #0xc]
    add r0, r5, #0x500
    ldrh r1, [r1, #0x4]
    add sp, sp, #0x4
    strh r1, [r0, #0x1e]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0208ac7c:
    ldr r2, [r4, #0xc]
    mov r0, r5
    ldrh r1, [r2, #0x4]
    ldrh r2, [r2, #0x6]
    mov r3, #0xc
    str r3, [r5, #0xc]
    bl func_02088350
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0208aca4:
    add r1, r5, #0x790
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r0, r5, #0x700
    ldr r2, [r4, #0xc]
    mov r1, #0x0
    ldrh r2, [r2, #0x4]
    strh r2, [r0, #0x92]
    strh r1, [r0, #0x94]
L_0208acc8:
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
