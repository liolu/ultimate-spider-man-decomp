#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020272e0();
// clang-format off
asm void func_02027400(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldr r2, [r4, #0x20]
    cmp r2, #0x0
    beq L_02027428
    cmp r2, #0x1
    beq L_020274c8
    cmp r2, #0x2
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02027428:
    add r3, r4, #0x28
    ldr r2, [r3, #0x0]
    add r1, r2, r1
    str r1, [r3, #0x0]
    ldr r1, [r4, #0x24]
    bl func_020272e0
    ldr r1, [r4, #0x28]
    cmp r1, r0, lsl #0x2
    ldmlefd sp!, {r4, r5, r6, lr}
    bxle lr
    ldrb r0, [r4, #0x1c]
    cmp r0, #0x0
    beq L_020274a0
    ldr r5, [r4, #0x24]
    mov r0, r4
    ldrh r6, [r5, #0x4]
    mov r1, r5
    bl func_020272e0
    cmp r6, r0
    movls r0, r6, lsl #0x2
    strls r0, [r4, #0x28]
    ldmlsfd sp!, {r4, r5, r6, lr}
    bxls lr
    mov r0, r4
    mov r1, r5
    bl func_020272e0
    mov r0, r0, lsl #0x2
    str r0, [r4, #0x28]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020274a0:
    ldr r1, [r4, #0x24]
    mov r0, r4
    bl func_020272e0
    mov r0, r0, lsl #0x2
    str r0, [r4, #0x28]
    add r1, r4, #0x1d
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020274c8:
    add r3, r4, #0x28
    ldr r2, [r3, #0x0]
    sub r1, r2, r1
    str r1, [r3, #0x0]
    ldr r5, [r4, #0x24]
    ldr r1, [r4, #0x28]
    ldrh r6, [r5, #0x4]
    cmp r1, r6, lsl #0x2
    ldmgefd sp!, {r4, r5, r6, lr}
    bxge lr
    ldrb r1, [r4, #0x1c]
    cmp r1, #0x0
    beq L_02027514
    mov r1, r5
    bl func_020272e0
    mov r0, r0, lsl #0x2
    str r0, [r4, #0x28]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02027514:
    mov r1, r5
    bl func_020272e0
    cmp r6, r0
    movls r0, r6, lsl #0x2
    strls r0, [r4, #0x28]
    bls L_02027540
    mov r0, r4
    mov r1, r5
    bl func_020272e0
    mov r0, r0, lsl #0x2
    str r0, [r4, #0x28]
L_02027540:
    add r1, r4, #0x1d
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
