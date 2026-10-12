#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202718c();
extern void func_02058688();
extern void r1();
extern void r2();
extern char data_0213b6e0[];
// clang-format off
asm void func_0204a158(void) {
    stmfd sp!, {r4, lr}
    ldr r2, [r0, #0x0]
    mov r1, #0x41
    ldr r2, [r2, #0x1b8]
    mov r4, r0
    blx r2
    cmp r0, #0x0
    beq L_0204a1ac
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x41
    bl func_0202718c
    mov r1, r0
    mov r0, r4
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1a4]
    blx r2
    ldmfd sp!, {r4, lr}
    bx lr
L_0204a1ac:
    ldr r0, =data_0213b6e0
    ldr r1, [r4, #0x778]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    bgt L_0204a204
    mov r0, r4
    bl func_02058688
    cmp r0, #0x0
    bne L_0204a204
    ldrb r0, [r4, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0204a204:
    mov r0, r4
    bl func_02058688
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
