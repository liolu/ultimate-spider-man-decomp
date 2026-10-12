#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001284();
extern void func_0200b56c();
extern void func_0207c284();
extern char data_020efa00[];
extern char data_0214876c[];
// clang-format off
asm void func_0200b3d8(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldr r2, [r1, #0x0]
    mov r4, r0
    cmp r2, #0x1f
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r1, [r1, #0x4]
    cmp r1, #0x6
    addls pc, pc, r1, lsl #0x2
    b L_0200b524
L_0200b408:
    b L_0200b524
    b L_0200b424
    b L_0200b434
    b L_0200b44c
    b L_0200b464
    b L_0200b4b8
    b L_0200b50c
L_0200b424:
    bl func_0200b56c
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0200b434:
    add r1, r4, #0x5
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0200b44c:
    add r1, r4, #0x6
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0200b464:
    bl func_02001284
    cmp r0, #0x0
    beq L_0200b494
    add r1, r4, #0x7
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r4, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0200b494:
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_020efa00
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0200b4b8:
    bl func_02001284
    cmp r0, #0x0
    beq L_0200b4e8
    add r1, r4, #0x7
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x8
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0200b4e8:
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_020efa00
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
L_0200b50c:
    ldrb r0, [r4, #0x9]
    add r1, r4, #0x9
    cmp r0, #0x0
    moveq r0, #0x1
    movne r0, #0x0
    swpb r0, r0, [r1]
L_0200b524:
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
