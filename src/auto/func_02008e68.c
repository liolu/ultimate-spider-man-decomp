#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd920();
extern void func_02009038();
extern void func_02009044();
extern void func_0208c544();
extern void func_020909c4();
extern void func_02090a48();
extern void func_02090b9c();
extern void func_02091204();
extern char data_02150c78[];
// clang-format off
asm void func_02008e68(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x9c
    mov r8, r2
    mov r5, r0
    mov r4, r1
    ldr r1, [r8, #0x0]
    ldr r0, =data_02150c78
    add r2, sp, #0x0
    bl func_0208c544
    add r7, sp, #0x0
    add r1, r5, #0x124
    mov r0, r7
    mov r2, r7
    add r6, r1, #0x24
    bl func_020909c4
    mov r1, r6
    mov r0, r7
    mov r2, r7
    bl func_02091204
    ldr r7, [sp, #0x0]
    ldr lr, [sp, #0x4]
    ldr r1, [r8, #0x4]
    ldr r0, [sp, #0x8]
    mov r3, #0x0
    sub r10, r1, r0
    ldr r1, =0x1451
    mov r6, r7, asr #0x1f
    umull r9, r8, r7, r1
    mla r8, r7, r3, r8
    mov r2, #0x800
    adds r7, r9, r2
    mla r8, r6, r1, r8
    adc r6, r8, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r6, lsl #0x14
    str r7, [sp, #0x0]
    umull r7, r6, lr, r1
    adds r7, r7, r2
    mla r6, lr, r3, r6
    mov ip, lr, asr #0x1f
    mla r6, ip, r1, r6
    adc r6, r6, #0x0
    mov r7, r7, lsr #0xc
    orr r7, r7, r6, lsl #0x14
    str r7, [sp, #0x4]
    umull r7, r6, r10, r1
    adds r2, r7, r2
    mla r6, r10, r3, r6
    mov r11, r10, asr #0x1f
    mla r6, r11, r1, r6
    adc r1, r6, #0x0
    mov r2, r2, lsr #0xc
    str r10, [sp, #0x8]
    orr r2, r2, r1, lsl #0x14
    add r0, sp, #0xc
    str r2, [sp, #0x8]
    bl func_02090a48
    add r0, sp, #0x0
    add r1, sp, #0xc
    bl func_01ffd920
    ldr r1, [r5, #0x1c0]
    ldr r2, [r5, #0x1bc]
    add r0, sp, #0x3c
    bl func_02009038
    add r1, sp, #0xc
    add r0, sp, #0x3c
    mov r2, r1
    bl func_02090b9c
    mov r2, #0x1000
    add r0, sp, #0x6c
    mov r1, #0x0
    rsb r2, r2, #0x0
    bl func_02009044
    add r1, sp, #0xc
    add r0, sp, #0x6c
    mov r2, r1
    bl func_02090b9c
    ldr r3, [r5, #0xbc]
    mov r0, #0x14
    ldr r2, [r3, #0x88]
    mov r1, #0x0
    mul r0, r2, r0
    mov r2, #0x28
    mul r7, r4, r2
    ldr r0, [r3, r0]
    add r6, sp, #0xc
L_02008fc0:
    ldr r2, [r0, #0x4]
    ldr r3, [r6, r1, lsl #0x2]
    add r2, r2, r7
    add r2, r2, r1, lsl #0x2
    add r1, r1, #0x1
    str r3, [r2, #0x4]
    cmp r1, #0x9
    blt L_02008fc0
    ldr r2, [sp, #0x30]
    ldr r1, [r0, #0xc]
    rsb r2, r2, #0x0
    add r1, r1, r4, lsl #0x4
    str r2, [r1, #0x4]
    ldr r1, [r0, #0xc]
    ldr r2, [sp, #0x34]
    add r1, r1, r4, lsl #0x4
    str r2, [r1, #0x8]
    ldr r0, [r0, #0xc]
    ldr r1, [sp, #0x38]
    add r0, r0, r4, lsl #0x4
    str r1, [r0, #0xc]
    ldr r0, [r5, #0xbc]
    mov r2, #0x1
    add r1, r0, #0x94
    swpb r0, r2, [r1]
    add sp, sp, #0x9c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
