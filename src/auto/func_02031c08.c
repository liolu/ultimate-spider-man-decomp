#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbeb8();
extern void func_02031974();
extern void func_020319f4();
extern void func_02031a90();
extern void func_02031b8c();
extern void func_0203213c();
extern void func_0205b9e4();
extern void func_0205ba80();
// clang-format off
asm void func_02031c08(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02031a90
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrb r0, [r4, #0xa9]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r0, [r4, #0x1bc]
    cmp r0, #0x2
    bne L_02031c74
    mov r0, r4
    bl func_02031974
    cmp r0, #0x0
    beq L_02031c74
    mov r1, #0x0
    mov r0, r4
    str r1, [r4, #0x1bc]
    bl func_0205ba80
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02031c74:
    ldr r0, [r4, #0x1bc]
    cmp r0, #0x2
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    bl func_020319f4
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r1, #0x2
    mov r0, r4
    str r1, [r4, #0x1bc]
    bl func_02031b8c
    mov r5, r0
    mov r0, r4
    mov r1, r5
    bl func_01ffbeb8
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    swpb r1, r5, [r2]
    bl func_0205b9e4
    mov r0, r4
    bl func_0203213c
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
