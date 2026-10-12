#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202718c();
extern void func_02028ba0();
extern void func_02034028();
extern void func_02036afc();
extern void func_02036fbc();
extern void func_0203e714();
extern void func_0203e8e4();
extern void func_020548a0();
extern void r1();
extern char data_020b7f8c[];
// clang-format off
asm void func_0203e934(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r1, [r4, #0x254]
    cmp r1, #0x0
    beq L_0203ea38
    ldr r1, [r1, #0x1d0]
    cmp r1, #0x7
    beq L_0203ea38
    ldrb r1, [r4, #0x15e]
    cmp r1, #0x0
    beq L_0203e980
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    movne r0, #0x1
    moveq r0, #0x0
    b L_0203e998
L_0203e980:
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    movne r0, #0x1
    moveq r0, #0x0
L_0203e998:
    cmp r0, #0x0
    bne L_0203e9b8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x40
    beq L_0203e9f0
L_0203e9b8:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x40
    movne r1, #0x1
    moveq r1, #0x0
    add r2, r4, #0x264
    swpb r1, r1, [r2]
    mov r0, r4
    bl func_0203e8e4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203e9f0:
    mov r0, r4
    bl func_02036fbc
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r0, [r4, #0x254]
    ldr r1, [r0, #0x1d0]
    cmp r1, #0x5
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    bl func_020548a0
    mov r0, r4
    bl func_0203e714
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203ea38:
    ldr r1, [r4, #0x1d0]
    add r0, r4, #0x190
    bl func_0202718c
    mov r5, r0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    mov r3, #0x1
    bl func_02036afc
    mov r0, r4
    bl func_02034028
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r1, =data_020b7f8c
    add r0, r4, #0x1c8
    bl func_02028ba0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
