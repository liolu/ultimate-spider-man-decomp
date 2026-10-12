#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02035e20();
extern void func_02036a3c();
extern void func_02036a9c();
extern void func_02036b68();
extern void func_0203a72c();
extern void r1();
// clang-format off
asm void func_02037c34(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    bne L_02037c80
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x80
    beq L_02037d98
L_02037c80:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x10
    bl func_02036b68
    ldr r0, [r4, #0x30]
    cmp r0, #0x2
    bne L_02037ce4
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    movne r0, #0x1
    moveq r0, #0x0
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    b L_02037d18
L_02037ce4:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    ldr r0, =0x15e
    movne r2, #0x1
    moveq r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_02037d18:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x40
    movne r2, #0x1
    moveq r2, #0x0
    mov r0, r4
    mov r1, #0xf
    bl func_02036a3c
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a9c
    mov r1, #0x7
    str r1, [r4, #0x194]
    mov r0, r4
    add r1, r4, #0x1bc
    bl func_01ff9acc
    ldr r1, [r4, #0x30]
    mov r0, r4
    bl func_0203a72c
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_02035e20
    ldmfd sp!, {r4, lr}
    bx lr
L_02037d98:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x110]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
