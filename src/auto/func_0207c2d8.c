#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207ba78();
extern void func_020863a0();
extern void func_0209ab00();
extern void func_0209ae8c();
extern void r2();
extern char func_0207c3d0[];
// clang-format off
asm void func_0207c2d8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    add r7, r5, #0x8000
    ldrb r0, [r7, #0x2dc]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    ldr r1, [r7, #0x268]
    ldr r0, [r7, #0x26c]
    cmp r1, r0
    beq L_0207c348
    ldr r0, =0x8268
    mov r8, #0x0
    add r4, r5, r0
    mov r6, #0x78
L_0207c314:
    ldr r0, [r7, #0x264]
    mla r0, r1, r6, r0
    bl func_020863a0
    ldr r0, [r4, #0x0]
    add r0, r0, #0x1
    str r0, [r4, #0x0]
    ldr r0, [r7, #0x268]
    cmp r0, #0x6
    strge r8, [r7, #0x268]
    ldr r1, [r7, #0x268]
    ldr r0, [r7, #0x26c]
    cmp r1, r0
    bne L_0207c314
L_0207c348:
    mov r4, #0x0
L_0207c34c:
    mov r0, r5
    mov r1, r4
    bl func_0207ba78
    cmp r0, #0x0
    beq L_0207c374
    mov r0, r5
    ldr r2, [r0, #0x0]
    mov r1, r4
    ldr r2, [r2, #0x0]
    blx r2
L_0207c374:
    add r4, r4, #0x1
    cmp r4, #0xc
    blt L_0207c34c
    add r0, r5, #0x8000
    ldr r0, [r0, #0x264]
    ldr r3, =func_0207c3d0
    mov r1, #0x78
    mov r2, #0x8
    bl func_0209ae8c
    add r0, r5, #0x8000
    ldr r0, [r0, #0x278]
    bl func_0209ab00
    add r0, r5, #0x8000
    ldr r0, [r0, #0x274]
    bl func_0209ab00
    add r0, r5, #0x8000
    add r1, r0, #0x2dc
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
