#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020034bc();
extern void func_02008770();
extern void func_02049e24();
extern void func_02049f28();
extern void func_0204a238();
extern void func_02057bc8();
extern void func_02058688();
extern void func_0208c03c();
extern char data_02150c78[];
// clang-format off
asm void func_0204a2c0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r2, [r4, #0x4c]
    cmp r2, #0x1f40
    bge L_0204a320
    ldr r1, [r4, #0x6f4]
    ldr r1, [r1, #0x4c]
    cmp r1, r2
    blt L_0204a320
    bl func_02057bc8
    ldr r1, =0x1770
    cmp r0, r1
    bge L_0204a320
    ldr r0, =0x15e
    mov r1, #0x0
    add ip, r4, r0
    swpb r3, r1, [ip]
    mov r0, r4
    mov r2, r1
    bl func_02049e24
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204a320:
    ldr r0, =data_02150c78
    ldr r5, [r4, #0x4c]
    bl func_0208c03c
    sub r0, r0, #0x3e80
    cmp r5, r0
    ble L_0204a38c
    ldr r1, [r4, #0x6f4]
    ldr r0, [r4, #0x4c]
    ldr r1, [r1, #0x4c]
    cmp r1, r0
    bge L_0204a38c
    mov r0, r4
    bl func_02057bc8
    ldr r1, =0x1770
    cmp r0, r1
    bge L_0204a38c
    ldr r3, =0x15e
    mov r0, r4
    add r4, r4, r3
    mov r3, #0x1
    mov r1, #0x0
    swpb r3, r3, [r4]
    mov r2, r1
    bl func_02049e24
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204a38c:
    mov r0, r4
    mov r1, #0xb4
    bl func_02049f28
    cmp r0, #0x3
    blt L_0204a3cc
    mov r1, #0x0
    mov r0, r4
    mov r2, r1
    bl func_02049e24
    ldr r0, =0x754
    mov r1, #0x1
    add r0, r4, r0
    bl func_02008770
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204a3cc:
    mov r0, r4
    bl func_02058688
    cmp r0, #0x0
    bne L_0204a3fc
    ldr r0, [r4, #0x1b8]
    cmp r0, #0x0
    bne L_0204a3fc
    mov r0, r4
    bl func_0204a238
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204a3fc:
    mov r0, r4
    bl func_020034bc
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
