#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02036b68();
extern void func_02036ba8();
extern void func_02036c30();
extern void func_02036e58();
extern void r1();
// clang-format off
asm void func_0203a180(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203a1cc
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02036c30
    cmp r0, #0x0
    beq L_0203a1cc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf0]
    blx r1
L_0203a1cc:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203a214
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02036ba8
    cmp r0, #0x0
    beq L_0203a214
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf0]
    blx r1
L_0203a214:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x178]
    blx r1
    cmp r0, #0x0
    beq L_0203a254
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
L_0203a254:
    ldr r0, [r4, #0xbc]
    ldrb r0, [r0, #0x97]
    cmp r0, #0x0
    beq L_0203a27c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203a27c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_0203a2bc
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_0203a2bc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203a2bc:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x160]
    blx r1
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xe8]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
