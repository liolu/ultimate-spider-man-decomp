#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fbc();
extern void func_020663f4();
extern void func_02066400();
extern void func_0207c85c();
extern void func_0207c880();
extern void func_0207c88c();
extern void func_0207c8b4();
extern void func_0209ab00();
// clang-format off
asm void func_020665ac(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r6, r1
    mov r5, r2
    mov r4, r0
    bl func_020663f4
    mov r0, r6
    mov r1, r5
    bl func_0207c88c
    mov r7, r0
    cmp r5, #0x0
    beq L_020665f4
    mvn r0, #0x0
    cmp r7, r0
    addeq sp, sp, #0x4
    moveq r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_020665f4:
    mov r0, r6
    mov r1, #0x0
    bl func_0207c8b4
    mov r6, r0
    add r0, r6, #0x1
    bl func_02064fbc
    mov r5, r0
    mov r1, r6
    mov r2, r7
    bl func_0207c85c
    mov r0, r7
    add r2, r5, r6
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_0207c880
    mov r0, r4
    mov r1, r5
    bl func_02066400
    mov r0, r5
    bl func_0209ab00
    mov r0, #0x1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
