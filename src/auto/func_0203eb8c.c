#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_01ffbcb8();
extern void func_01ffc080();
extern void func_01ffc0d4();
extern void func_02028ba0();
extern void func_02034028();
extern void func_020340cc();
extern void func_0203412c();
extern void func_02034460();
extern void func_02036b68();
extern void func_0207c284();
extern char data_020b5320[];
extern char data_020b532c[];
extern char data_020b7f08[];
extern char data_020b800c[];
extern char data_020b804c[];
extern char data_020b806c[];
extern char data_02104734[];
extern char data_0214868c[];
extern char data_0214876c[];
// clang-format off
asm void func_0203eb8c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r4, r0
    bl func_01ffbcb8
    add r1, r0, #0x2d
    mov r0, r4
    str r1, [r4, #0x1e4]
    bl func_02034460
    add r1, r4, #0x1e0
    swpb r0, r0, [r1]
    add r1, r4, #0x1bc
    mov r0, r4
    bl func_01ff9acc
    mov r0, r4
    bl func_02034028
    ldr r2, =data_0214868c
    ldr r1, =data_020b5320
    add r2, r2, #0x48
    swpb r0, r0, [r2]
    mov r2, #0x0
    mov r0, r4
    bl func_01ffc0d4
    ldr r1, =data_020b5320
    mov r0, r4
    mov r2, #0x0
    bl func_01ffc080
    ldr r0, [r4, #0x30]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0203eeb8
L_0203ec04:
    b L_0203ed5c
    b L_0203ec18
    b L_0203ec80
    b L_0203ed5c
    b L_0203ece8
L_0203ec18:
    mov r0, r4
    bl func_0203412c
    cmp r0, #0x0
    beq L_0203ec40
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa9
    bl func_02036b68
    b L_0203eeb8
L_0203ec40:
    mov r0, r4
    bl func_020340cc
    cmp r0, #0x0
    beq L_0203ec68
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa8
    bl func_02036b68
    b L_0203eeb8
L_0203ec68:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa7
    bl func_02036b68
    b L_0203eeb8
L_0203ec80:
    mov r0, r4
    bl func_0203412c
    cmp r0, #0x0
    beq L_0203eca8
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa9
    bl func_02036b68
    b L_0203eeb8
L_0203eca8:
    mov r0, r4
    bl func_020340cc
    cmp r0, #0x0
    beq L_0203ecd0
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa8
    bl func_02036b68
    b L_0203eeb8
L_0203ecd0:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa7
    bl func_02036b68
    b L_0203eeb8
L_0203ece8:
    mov r0, r4
    bl func_0203412c
    cmp r0, #0x0
    beq L_0203ed10
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa9
    bl func_02036b68
    b L_0203eeb8
L_0203ed10:
    mov r0, r4
    bl func_020340cc
    cmp r0, #0x0
    beq L_0203ed44
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa8
    bl func_02036b68
    mov r0, r4
    add r1, r4, #0x1b4
    bl func_01ff9acc
    b L_0203eeb8
L_0203ed44:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa7
    bl func_02036b68
    b L_0203eeb8
L_0203ed5c:
    mov r0, r4
    bl func_0203412c
    cmp r0, #0x0
    beq L_0203edb8
    mov r0, r4
    bl func_02034028
    cmp r0, #0x0
    beq L_0203eda0
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x79
    bl func_02036b68
    ldr r1, =data_020b806c
    add r0, r4, #0x1c8
    bl func_02028ba0
    b L_0203eeb0
L_0203eda0:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa6
    bl func_02036b68
    b L_0203eeb0
L_0203edb8:
    mov r0, r4
    bl func_020340cc
    cmp r0, #0x0
    beq L_0203ee44
    ldrb r0, [r4, #0x1e0]
    cmp r0, #0x0
    beq L_0203edec
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa8
    bl func_02036b68
    b L_0203eeb0
L_0203edec:
    mov r0, r4
    bl func_02034028
    cmp r0, #0x0
    beq L_0203ee20
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x78
    bl func_02036b68
    ldr r1, =data_020b804c
    add r0, r4, #0x1c8
    bl func_02028ba0
    b L_0203ee34
L_0203ee20:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa5
    bl func_02036b68
L_0203ee34:
    mov r0, r4
    add r1, r4, #0x1b4
    bl func_01ff9acc
    b L_0203eeb0
L_0203ee44:
    ldrb r0, [r4, #0x1e0]
    cmp r0, #0x0
    beq L_0203ee68
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa7
    bl func_02036b68
    b L_0203eeb0
L_0203ee68:
    mov r0, r4
    bl func_02034028
    cmp r0, #0x0
    beq L_0203ee9c
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x77
    bl func_02036b68
    ldr r1, =data_020b800c
    add r0, r4, #0x1c8
    bl func_02028ba0
    b L_0203eeb0
L_0203ee9c:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0xa4
    bl func_02036b68
L_0203eeb0:
    mov r0, #0x0
    str r0, [r4, #0x30]
L_0203eeb8:
    mov r0, #0x19
    mov r2, #0x0
    str r0, [r4, #0x194]
    ldr r0, =data_0214876c
    ldr r1, =data_02104734
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    ldr r0, [r4, #0x254]
    add r1, r0, #0x1a0
    ldr r0, [r1, #0x0]
    str r0, [r4, #0x19c]
    ldr r0, [r1, #0x4]
    str r0, [r4, #0x1a0]
    ldr r0, [r4, #0x254]
    ldr r0, [r0, #0x204]
    str r0, [r4, #0x198]
    ldr r0, [r4, #0x198]
    cmp r0, #0x3
    bne L_0203ef18
    ldr r1, =data_020b532c
    mov r0, r4
    mov r2, #0x0
    bl func_01ffc080
L_0203ef18:
    ldr r1, =data_020b7f08
    mov r0, r4
    bl func_01ff9acc
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
