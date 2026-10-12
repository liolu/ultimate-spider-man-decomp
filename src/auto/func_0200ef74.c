#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200ef0c();
extern void func_0200f03c();
extern void func_0202f5f0();
extern char data_020af324[];
extern char data_020af33c[];
extern char data_020f612c[];
extern char data_020f70ec[];
extern char data_020f71a0[];
extern char data_0213b2f0[];
// clang-format off
asm void func_0200ef74(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    bl func_0200f03c
    mov r4, r0
    bl func_0200ef0c
    mov r6, #0x0
    mov r5, r6
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0200efe0
L_0200ef9c:
    b L_0200efd4
    b L_0200efc8
    b L_0200efb8
    b L_0200efac
L_0200efac:
    ldr r6, =data_020f70ec
    str r4, [r6, #0x44]
    b L_0200efe0
L_0200efb8:
    ldr r6, =data_020f71a0
    mov r5, #0x1
    str r4, [r6, #0x44]
    b L_0200efe0
L_0200efc8:
    ldr r6, =data_020f70ec
    str r4, [r6, #0x44]
    b L_0200efe0
L_0200efd4:
    ldr r6, =data_020f71a0
    mov r5, #0x1
    str r4, [r6, #0x44]
L_0200efe0:
    ldr ip, =data_0213b2f0
    ldr r0, =data_020f612c
    add r3, ip, #0x4
    add lr, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    swpb r1, r5, [r3]
    mov r0, lr
    str r6, [ip, #0x0]
    bl func_0202f5f0
    ldr r0, =data_020af33c
    bl func_0202f5f0
    ldr r0, =data_020af324
    bl func_0202f5f0
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
