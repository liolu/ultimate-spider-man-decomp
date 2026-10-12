#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028cfc();
extern void func_0202f5f0();
extern void func_02033838();
extern void func_02034028();
extern void func_02036450();
extern void func_02036868();
extern void func_02036df0();
extern void func_02040ab0();
extern void func_02040b44();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_02085700();
extern void r1();
extern void r2();
extern char data_020b80cc[];
extern char data_020d4cbc[];
// clang-format off
asm void func_02040b8c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r5, r1
    mov r6, r0
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x58]
    blx r1
    mov r4, r0
    mov r0, r6
    bl func_02036450
    cmp r0, #0x0
    ble L_02040cf4
    ldrb r0, [r6, #0x1f8]
    cmp r0, #0x0
    bne L_02040cf4
    cmp r4, #0x0
    beq L_02040cf4
    add r0, r6, #0x1ec
    add r1, r5, #0x3c
    mov r2, #0x0
    bl func_02033838
    cmp r0, #0x0
    beq L_02040cf4
    mov r0, r6
    bl func_02034028
    cmp r0, #0x0
    beq L_02040c04
    cmp r4, #0x3
    bne L_02040cf4
L_02040c04:
    mov r2, #0xa
    mov r1, #0x0
    add r0, sp, #0x0
    str r2, [sp, #0x0]
    str r1, [sp, #0x4]
    str r4, [sp, #0x8]
    bl func_0202f5f0
    mov r0, r6
    bl func_02036df0
    mov r1, r0
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x5c]
    blx r2
    add r2, r6, #0x1f8
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r0, r6
    bl func_02036df0
    cmp r0, #0x0
    beq L_02040cf4
    cmp r4, #0x2
    beq L_02040c6c
    cmp r4, #0x3
    beq L_02040cd0
    b L_02040cf4
L_02040c6c:
    mov r0, r6
    bl func_02034028
    cmp r0, #0x0
    bne L_02040cf4
    mov r1, r5
    add r0, r6, #0x1c8
    bl func_02028cfc
    ldr r0, [r6, #0x30]
    cmp r0, #0x3
    bne L_02040ca0
    mov r0, r6
    bl func_02040b44
    b L_02040cb0
L_02040ca0:
    mov r0, r6
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
L_02040cb0:
    ldr r1, [r5, #0x28]
    ldr r0, =0x18b
    cmp r1, r0
    beq L_02040cf4
    bl func_0204eb30
    ldr r1, =data_020d4cbc
    bl func_0204eab0
    b L_02040cf4
L_02040cd0:
    mov r0, r6
    bl func_02034028
    cmp r0, #0x0
    beq L_02040cf4
    ldr r0, [r6, #0x194]
    cmp r0, #0x21
    beq L_02040cf4
    mov r0, r6
    bl func_02040ab0
L_02040cf4:
    mov r0, r6
    bl func_02034028
    cmp r0, #0x0
    beq L_02040d48
    ldr r0, [r6, #0x1cc]
    cmp r0, r5
    bne L_02040d48
    ldr r0, [r6, #0xbc]
    mov r1, #0x7
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ble L_02040d48
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r1, =data_020b80cc
    ldr r2, [r2, #0x40]
    blx r2
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02040d48:
    mov r0, r6
    mov r1, r5
    bl func_02036868
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
