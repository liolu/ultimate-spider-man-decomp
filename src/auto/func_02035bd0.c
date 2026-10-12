#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036b68();
extern void func_02036ba8();
extern void func_02036c30();
extern void func_02036cb0();
extern void func_02036e58();
extern void func_02037db4();
extern void func_0203a72c();
extern void func_0203c62c();
extern void r1();
// clang-format off
asm void func_02035bd0(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xbc]
    ldrb r1, [r1, #0x97]
    cmp r1, #0x0
    beq L_02035bf8
    mov r1, #0x8
    mov r2, #0x1
    mov r3, #0x0
    bl func_02036b68
L_02035bf8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_02035c40
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_02035c40
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_02035c40:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x178]
    blx r1
    cmp r0, #0x0
    bne L_02035c88
    mov r0, r4
    bl func_02036cb0
    cmp r0, #0x0
    beq L_02035c88
    mov r3, #0x1
    mov r0, r4
    mov r1, #0x9
    mov r2, #0x0
    str r3, [r4, #0x194]
    bl func_02036b68
    ldmfd sp!, {r4, lr}
    bx lr
L_02035c88:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    beq L_02035cf4
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02036c30
    cmp r0, #0x0
    bne L_02035ce4
    mov r0, r4
    mov r1, #0x1
    bl func_0203a72c
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
L_02035ce4:
    mov r0, r4
    bl func_02037db4
    ldmfd sp!, {r4, lr}
    bx lr
L_02035cf4:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x10
    beq L_02035d60
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02036ba8
    cmp r0, #0x0
    bne L_02035d50
    mov r0, r4
    mov r1, #0x2
    bl func_0203a72c
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
L_02035d50:
    mov r0, r4
    bl func_02037db4
    ldmfd sp!, {r4, lr}
    bx lr
L_02035d60:
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
