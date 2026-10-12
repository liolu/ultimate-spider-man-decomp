#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026a7c();
extern void func_0203628c();
extern void func_02036450();
extern void func_02036e94();
extern void func_0203c2a4();
extern void func_0203c32c();
extern void func_0203d264();
extern void func_02046d8c();
extern void func_02055fe4();
extern void func_02062b00();
extern void func_0207c284();
extern void r1();
extern void r2();
extern char data_020b5778[];
extern char data_02102bc8[];
extern char data_02102bd8[];
extern char data_02102be4[];
extern char data_02102bf0[];
extern char data_0213d440[];
extern char data_02143e44[];
extern char data_0214876c[];
// clang-format off
asm void func_02036458(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x28
    mov r6, r0
    ldr r3, [r6, #0x194]
    mov r5, r1
    cmp r3, #0xe
    mov r4, #0x0
    beq L_02036838
    ldr r1, =data_0213d440
    ldrb r2, [r1, #0x28]
    cmp r2, #0x0
    bne L_02036838
    ldr r2, [r5, #0x4]
    cmp r2, #0x46
    bgt L_02036528
    cmp r2, #0x46
    bge L_02036714
    cmp r2, #0x3f
    bgt L_02036508
    cmp r2, #0x3f
    bge L_0203660c
    cmp r2, #0xe
    bgt L_020364fc
    cmp r2, #0x0
    addge pc, pc, r2, lsl #0x2
    b L_0203682c
L_020364c0:
    b L_0203682c
    b L_0203660c
    b L_0203660c
    b L_0203660c
    b L_0203660c
    b L_0203660c
    b L_0203660c
    b L_0203660c
    b L_0203667c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_02036838
    b L_02036838
L_020364fc:
    cmp r2, #0x3e
    beq L_0203660c
    b L_0203682c
L_02036508:
    cmp r2, #0x43
    bgt L_0203651c
    cmp r2, #0x43
    beq L_0203665c
    b L_0203682c
L_0203651c:
    cmp r2, #0x45
    beq L_02036778
    b L_0203682c
L_02036528:
    cmp r2, #0x4a
    bgt L_02036558
    cmp r2, #0x4a
    bge L_020367fc
    cmp r2, #0x47
    bgt L_0203654c
    cmp r2, #0x47
    beq L_020366e0
    b L_0203682c
L_0203654c:
    cmp r2, #0x48
    beq L_020366d8
    b L_0203682c
L_02036558:
    cmp r2, #0x4b
    bgt L_0203656c
    cmp r2, #0x4b
    beq L_020367fc
    b L_0203682c
L_0203656c:
    sub r1, r2, #0x4c
    cmp r1, #0x1f
    addls pc, pc, r1, lsl #0x2
    b L_0203682c
L_0203657c:
    b L_020367fc
    b L_020367fc
    b L_020367fc
    b L_020367fc
    b L_020367fc
    b L_020367fc
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203670c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_0203682c
    b L_020366c4
    b L_0203682c
    b L_0203660c
    b L_02036604
    b L_020365fc
    b L_0203660c
    b L_020367cc
L_020365fc:
    bl func_0203c2a4
    b L_02036838
L_02036604:
    cmp r3, #0x19
    beq L_02036838
L_0203660c:
    mov r0, r6
    bl func_0203d264
    cmp r0, #0x0
    bne L_02036838
    ldr r0, [r5, #0x4]
    cmp r0, #0x6a
    bne L_02036640
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_02102bc8
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
L_02036640:
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0xe4]
    blx r2
    mov r4, #0x1
    b L_02036838
L_0203665c:
    ldrb r1, [r6, #0xa9]
    cmp r1, #0x0
    beq L_02036838
    ldr r2, [r0, #0x0]
    ldr r1, =data_020b5778
    ldr r2, [r2, #0xe4]
    blx r2
    b L_02036838
L_0203667c:
    bl func_0203d264
    cmp r0, #0x0
    bne L_02036838
    add ip, sp, #0x4
    ldmia r5!, {r0, r1, r2, r3}
    mov r4, ip
    stmia ip!, {r0, r1, r2, r3}
    ldmia r5, {r0, r1, r2, r3}
    stmia ip, {r0, r1, r2, r3}
    mov r1, #0x2
    str r1, [sp, #0x8]
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, r4
    ldr r2, [r2, #0xe4]
    blx r2
    mov r4, #0x1
    b L_02036838
L_020366c4:
    cmp r3, #0x14
    beq L_02036838
    bl func_0203c32c
    mov r4, #0x1
    b L_02036838
L_020366d8:
    mov r4, #0x1
    b L_02036838
L_020366e0:
    mov r0, r1
    mov r1, #0x5
    mov r2, #0x1
    bl func_02026a7c
    ldr r0, =data_0213d440
    mov r1, #0x6
    mov r2, #0x1
    bl func_02026a7c
    bl func_02055fe4
    mov r4, #0x1
    b L_02036838
L_0203670c:
    mov r4, #0x1
    b L_02036838
L_02036714:
    cmp r3, #0x15
    beq L_02036838
    bl func_02036450
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d8c
    cmp r5, r0
    bge L_02036838
    mov r2, r4
    ldr r0, =data_0214876c
    ldr r1, =data_02102bd8
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    ldr r0, =data_02143e44
    bl func_02046d8c
    mov r1, r0
    mov r0, r6
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x180]
    blx r2
    mov r0, r6
    bl func_0203628c
    mov r4, #0x1
    b L_02036838
L_02036778:
    cmp r3, #0x15
    beq L_02036838
    bl func_02036450
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d8c
    cmp r5, r0
    bge L_02036838
    mov r2, r4
    ldr r0, =data_0214876c
    ldr r1, =data_02102be4
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    mov r0, r6
    ldr r2, [r0, #0x0]
    mov r1, #0xfa
    ldr r2, [r2, #0x184]
    blx r2
    mov r4, #0x1
    b L_02036838
L_020367cc:
    bl func_02036e94
    cmp r0, #0x0
    beq L_02036838
    ldr r0, [r6, #0x194]
    cmp r0, #0x14
    beq L_02036838
    mov r0, r6
    ldr r1, [r0, #0x0]
    mov r4, #0x1
    ldr r1, [r1, #0xf8]
    blx r1
    b L_02036838
L_020367fc:
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_02102bf0
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add r1, r6, #0x23c
    mov r4, #0x1
    swpb r0, r4, [r1]
    ldr r0, [r5, #0x4]
    str r0, [r6, #0x240]
    b L_02036838
L_0203682c:
    mov r0, r6
    mov r1, r5
    bl func_02062b00
L_02036838:
    mov r0, r4
    add sp, sp, #0x28
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
