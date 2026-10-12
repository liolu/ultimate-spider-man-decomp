#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088850();
extern void func_0209740c();
extern void func_02097668();
extern void func_02097a28();
extern void func_02097f10();
extern char func_0208b514[];
extern char func_0208b530[];
extern char func_0208b54c[];
extern char func_0208b568[];
// clang-format off
asm void func_0208b428(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    str r2, [r4, #0x590]
    add r2, r4, #0x520
    swpb r0, r1, [r2]
    mov r1, #0x1
    ldr r0, [r4, #0x5ec]
    bl func_02097668
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x0
    beq L_0208b480
    ldr r1, [r4, #0x8]
    mov r0, r4
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r1, #0x1
    str r2, [r4, #0x8]
    bl func_02088850
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
L_0208b480:
    ldr r0, =func_0208b568
    bl func_02097f10
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x2
    beq L_0208b4c4
    bl func_0209740c
    ldr r1, [r4, #0x8]
    mov r0, r4
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r1, #0x1
    str r2, [r4, #0x8]
    bl func_02088850
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
L_0208b4c4:
    ldr r1, =func_0208b54c
    mov r0, #0xd
    mov r2, #0x0
    bl func_02097a28
    ldr r1, =func_0208b530
    mov r0, #0xe
    mov r2, #0x0
    bl func_02097a28
    ldr r1, =func_0208b514
    mov r0, #0xf
    mov r2, #0x0
    bl func_02097a28
    mov r0, #0x1
    str r0, [r4, #0x8]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
