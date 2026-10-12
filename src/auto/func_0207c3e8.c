#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fbc();
extern void func_02065388();
extern void func_0209af7c();
extern char func_0207c3d0[];
extern char func_0207c4d8[];
// clang-format off
asm void func_0207c3e8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    ldr r5, =func_0207c3d0
    mov r4, r0
    ldr r3, =func_0207c4d8
    mov r0, #0x6
    mov r1, #0x78
    mov r2, #0x8
    str r5, [sp, #0x0]
    bl func_0209af7c
    add r1, r4, #0x8000
    str r0, [r1, #0x264]
    ldr r0, [r1, #0x264]
    mov r1, #0x0
    mov r2, #0x2d0
    bl func_02065388
    mov r0, #0x20000
    bl func_02064fbc
    add r1, r4, #0x8000
    str r0, [r1, #0x278]
    mov r0, #0x180
    bl func_02064fbc
    mov r3, #0x0
    add ip, r4, #0x8000
    mov r2, r3
    mov r1, r3
    str r0, [ip, #0x274]
    mov r5, r3
    mvn lr, #0x0
L_0207c45c:
    ldr r6, [ip, #0x278]
    ldr r0, [ip, #0x274]
    add r6, r6, r2
    add r0, r0, r1
    str r6, [r0, #0x8]
    ldr r0, [ip, #0x274]
    add r3, r3, #0x1
    str r5, [r0, r1]
    ldr r0, [ip, #0x274]
    cmp r3, #0x20
    add r0, r0, r1
    str lr, [r0, #0x4]
    add r2, r2, #0x1000
    add r1, r1, #0xc
    blt L_0207c45c
    add r2, r4, #0x8000
    str r5, [r2, #0x268]
    str r5, [r2, #0x26c]
    str r5, [r2, #0x270]
    str r5, [r2, #0x2e0]
    str r5, [r2, #0x2e4]
    str r5, [r2, #0x2e8]
    add r1, r2, #0x2dc
    mov r0, #0x1
    swpb r0, r0, [r1]
    str r5, [r2, #0x31c]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
