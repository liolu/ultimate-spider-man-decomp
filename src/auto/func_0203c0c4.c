#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036ba8();
extern void func_02036c30();
extern void func_02036e58();
extern void func_0203c62c();
extern void func_0203d224();
extern void r1();
// clang-format off
asm void func_0203c0c4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r4, #0xbc]
    ldrb r1, [r1, #0x97]
    cmp r1, #0x0
    beq L_0203c0f0
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203c0f0:
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203c148
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02036c30
    cmp r0, #0x0
    beq L_0203c138
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf0]
    blx r1
    b L_0203c148
L_0203c138:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
L_0203c148:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203c1a4
    ldr r1, =0x15e
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_02036ba8
    cmp r0, #0x0
    beq L_0203c194
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf0]
    blx r1
    b L_0203c1a4
L_0203c194:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
L_0203c1a4:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x160]
    blx r1
    cmp r0, #0x0
    beq L_0203c1cc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xe8]
    blx r1
L_0203c1cc:
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    bne L_0203c204
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_0203c1fc
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    movne r1, r2
L_0203c1fc:
    cmp r1, #0x0
    moveq r2, #0x0
L_0203c204:
    cmp r2, #0x0
    bne L_0203c22c
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203c22c:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_0203c274
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_0203c274
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203c274:
    mov r0, r4
    bl func_0203d224
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
