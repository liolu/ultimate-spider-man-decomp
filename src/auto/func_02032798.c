#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02005134();
extern void func_020319f4();
extern void func_020328f8();
// clang-format off
asm void func_02032798(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r1, [r4, #0xbc]
    ldrb r5, [r1, #0x97]
    bl func_02005134
    cmp r5, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrb r0, [r4, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    bl func_020319f4
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    bl func_020328f8
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
