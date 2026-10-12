#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_01ffbcb8();
extern void func_02034028();
extern void func_02036b68();
extern void func_02036ba8();
extern void func_02036c30();
extern void func_02036cb0();
extern void func_02036e58();
extern void func_0203c62c();
extern void r1();
// clang-format off
asm void func_0203c400(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xbc]
    ldrb r1, [r1, #0x97]
    cmp r1, #0x0
    beq L_0203c424
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
L_0203c424:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203c46c
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02036c30
    cmp r0, #0x0
    beq L_0203c46c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf0]
    blx r1
L_0203c46c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203c4b4
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02036ba8
    cmp r0, #0x0
    beq L_0203c4b4
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf0]
    blx r1
L_0203c4b4:
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    bne L_0203c4ec
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203c4e4
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    movne r1, r2
L_0203c4e4:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203c4ec:
    cmp r2, #0x0
    bne L_0203c514
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203c514:
    mov r0, r4
    bl func_02034028
    cmp r0, #0x0
    bne L_0203c57c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x178]
    blx r1
    cmp r0, #0x0
    bne L_0203c54c
    mov r0, r4
    bl func_02036cb0
    cmp r0, #0x0
    bne L_0203c57c
L_0203c54c:
    mov r2, #0x1
    mov r0, r4
    add r1, r4, #0x1bc
    str r2, [r4, #0x194]
    bl func_01ff9acc
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x9
    bl func_02036b68
    ldmfd sp!, {r4, lr}
    bx lr
L_0203c57c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x160]
    blx r1
    cmp r0, #0x0
    beq L_0203c5ac
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xe8]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203c5ac:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_0203c5f4
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_0203c5f4
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203c5f4:
    mov r0, r4
    bl func_01ffbcb8
    ldr r1, [r4, #0x1a8]
    sub r0, r0, r1
    cmp r0, #0x258
    ldmlefd sp!, {r4, lr}
    bxle lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x158]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
