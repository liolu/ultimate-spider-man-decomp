#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02034460();
extern void func_02036010();
extern void func_02036088();
extern void func_02040d6c();
extern void func_020546f4();
extern void func_02085700();
extern void r1();
// clang-format off
asm void func_0203e770(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    ldrb r1, [r4, #0x264]
    cmp r1, #0x0
    bne L_0203e7a8
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x40
    movne r0, #0x1
    moveq r0, #0x0
    add r1, r4, #0x264
    swpb r0, r0, [r1]
L_0203e7a8:
    ldr r0, [r4, #0x254]
    cmp r0, #0x0
    beq L_0203e80c
    ldr r0, [r4, #0xbc]
    mov r1, #0x4
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ble L_0203e80c
    add r0, sp, #0x0
    mov r1, r4
    bl func_02040d6c
    ldr r3, [r4, #0x254]
    ldr r1, [sp, #0x0]
    ldrh r0, [r3, #0x38]
    ldr r2, [sp, #0x4]
    sub r0, r1, r0, lsr #0x1
    str r0, [r3, #0x3c]
    ldr r0, [sp, #0x0]
    str r0, [r3, #0x4c]
    ldrh r0, [r3, #0x3a]
    sub r0, r2, r0
    str r0, [r3, #0x40]
    str r2, [r3, #0x50]
    b L_0203e838
L_0203e80c:
    ldr r0, [r4, #0x254]
    cmp r0, #0x0
    beq L_0203e838
    ldr r1, [r0, #0x1d0]
    cmp r1, #0x5
    bne L_0203e838
    ldrb r1, [r4, #0x264]
    bl func_020546f4
    add r1, r4, #0x264
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0203e838:
    ldr r0, [r4, #0xbc]
    ldrb r0, [r0, #0x97]
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    bl func_02034460
    cmp r0, #0x0
    beq L_0203e8c8
    ldr r0, [r4, #0x30]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0203e8d8
L_0203e870:
    b L_0203e8d8
    b L_0203e8ac
    b L_0203e8ac
    b L_0203e884
    b L_0203e898
L_0203e884:
    mov r0, r4
    bl func_02036010
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203e898:
    mov r0, r4
    bl func_02036088
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203e8ac:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x110]
    blx r1
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203e8c8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
L_0203e8d8:
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
