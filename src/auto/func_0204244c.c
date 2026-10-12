#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028ba0();
extern void func_02033f90();
extern void r1();
extern char data_020b7f6c[];
extern char data_021044f0[];
extern char data_021044f8[];
extern char data_02104504[];
extern char data_02104510[];
extern char data_02104518[];
extern char data_02104524[];
// clang-format off
asm void func_0204244c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r3, #0x0
    str r3, [r4, #0x1d4]
    add r2, r4, #0x1d8
    mov r1, #0x1
    swpb r1, r1, [r2]
    add r2, r4, #0x1c4
    swpb r1, r3, [r2]
    str r3, [r4, #0x18c]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x17c]
    blx r1
    cmp r0, #0x0
    beq L_020424c4
    ldr r0, [r4, #0x30]
    cmp r0, #0x0
    bne L_020424ac
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x134]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_020424ac:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x12c]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_020424c4:
    ldr r0, [r4, #0x30]
    cmp r0, #0x3
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x170]
    blx r1
    cmp r0, #0x0
    beq L_02042540
    ldr r0, =data_021044f0
    ldr r1, =data_021044f8
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_02104504
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, =data_020b7f6c
    add r0, r4, #0x1c8
    bl func_02028ba0
    mov r0, r4
    mov r1, #0x6d
    bl func_02033f90
    ldmfd sp!, {r4, lr}
    bx lr
L_02042540:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x174]
    blx r1
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, =data_02104510
    ldr r1, =data_02104518
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr ip, =data_02104524
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, =data_020b7f6c
    add r0, r4, #0x1c8
    bl func_02028ba0
    mov r0, r4
    mov r1, #0x6e
    bl func_02033f90
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
