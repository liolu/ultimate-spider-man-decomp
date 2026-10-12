#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088834();
extern void func_02097e40();
extern void r1();
extern char data_02150c38[];
extern char func_0208b584[];
// clang-format off
asm void func_02089a44(void) {
    stmfd sp!, {r4, lr}
    ldrh r1, [r1, #0x2]
    mov r4, r0
    cmp r1, #0x0
    bne L_02089ae0
    ldr r1, =0x521
    mov r0, #0x0
    add r2, r4, r1
    swpb r1, r0, [r2]
    ldr r1, =data_02150c38
    strh r0, [r4, #0x1c]
    ldrb r1, [r1, #0x0]
    cmp r1, #0x1
    bne L_02089abc
    ldr r0, =func_0208b584
    bl func_02097e40
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x2
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r0, r4
    mov r1, #0x8
    str r2, [r4, #0x8]
    bl func_02088834
    ldmfd sp!, {r4, lr}
    bx lr
L_02089abc:
    mov r1, #0x3
    str r1, [r4, #0x8]
    ldr r1, [r4, #0x590]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_02089ae0:
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r1, #0x8
    str r2, [r4, #0x8]
    bl func_02088834
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
