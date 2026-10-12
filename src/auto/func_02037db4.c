#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02036010();
extern void func_02036a3c();
extern void func_02036a9c();
extern void func_02036b68();
extern void r1();
// clang-format off
asm void func_02037db4(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    bne L_02037e00
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x10
    beq L_02037ea8
L_02037e00:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x10
    bl func_02036b68
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    ldr r1, =0x15e
    movne r3, #0x1
    moveq r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ldr r1, [r4, #0x188]
    mvn r1, r1
    and r0, r1, r0
    ands r0, r0, #0x20
    movne r2, #0x1
    moveq r2, #0x0
    mov r0, r4
    mov r1, #0xf
    bl func_02036a9c
    mov r0, r4
    mov r1, #0x2
    mov r2, #0x0
    bl func_02036a3c
    mov r2, #0x6
    mov r0, r4
    add r1, r4, #0x1bc
    str r2, [r4, #0x194]
    bl func_01ff9acc
    ldmfd sp!, {r4, lr}
    bx lr
L_02037ea8:
    mov r0, r4
    bl func_02036010
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
