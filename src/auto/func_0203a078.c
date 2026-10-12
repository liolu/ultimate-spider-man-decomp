#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbcb8();
extern void func_02000e8c();
extern void func_02034460();
extern void func_02036a3c();
extern void func_02036a9c();
extern void func_02036b68();
extern void r2();
// clang-format off
asm void func_0203a078(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, [r0, #0x0]
    mov r4, r1
    ldr r2, [r2, #0x8c]
    mov r5, r0
    mov r1, #0x0
    blx r2
    ldr r0, [r5, #0x30]
    cmp r0, #0x3
    bne L_0203a0b8
    mov r0, r5
    bl func_02034460
    cmp r0, #0x0
    movne r0, #0x1
    bne L_0203a0bc
L_0203a0b8:
    mov r0, #0x0
L_0203a0bc:
    add r1, r5, #0x1e0
    mov r2, #0x0
    swpb r0, r0, [r1]
    mov r0, r5
    mov r3, r2
    mov r1, #0x22
    bl func_02036b68
    mov r0, #0x11
    str r0, [r5, #0x194]
    ldr r0, [r4, #0x10]
    cmp r0, #0x0
    bge L_0203a100
    mov r0, r5
    mov r1, #0x22
    mov r2, #0x1
    bl func_02036a9c
    b L_0203a12c
L_0203a100:
    cmp r0, #0x0
    ble L_0203a11c
    mov r0, r5
    mov r1, #0x22
    mov r2, #0x0
    bl func_02036a9c
    b L_0203a12c
L_0203a11c:
    mov r0, r5
    mov r1, #0x8
    mov r2, #0x0
    bl func_02036a9c
L_0203a12c:
    mov r0, r5
    mov r1, #0x22
    mov r2, #0x0
    bl func_02036a3c
    ldr r0, [r5, #0xa4]
    add r1, r4, #0x8
    add r0, r0, #0x4
    bl func_02000e8c
    ldr r0, [r5, #0xa4]
    add r1, r4, #0x14
    add r0, r0, #0x1c
    bl func_02000e8c
    mov r1, #0x0
    mov r0, r5
    str r1, [r5, #0x30]
    bl func_01ffbcb8
    add r0, r0, #0x28
    str r0, [r5, #0x1e4]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
