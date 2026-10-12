#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003fcc();
extern void func_02003fec();
extern void func_02006428();
extern void func_02046fa4();
extern void func_0205ae30();
extern void func_02065730();
extern void func_0207c284();
extern char data_020a77a8[];
extern char data_020a77ac[];
extern char data_02118378[];
extern char data_02118384[];
extern char data_02118390[];
extern char data_0211839c[];
extern char data_021183ac[];
extern char data_02143e44[];
extern char data_0214876c[];
// clang-format off
asm void func_0205afe8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, #0x0
    bl func_02003fcc
    cmp r0, #0x0
    beq L_0205b028
    ldrb r0, [r5, #0x191]
    cmp r0, #0x0
    bne L_0205b028
    mov r0, r5
    bl func_0205ae30
    mov r4, r0
    mov r0, r5
    mov r1, #0x5
    bl func_02003fec
L_0205b028:
    mov r0, r5
    bl func_02006428
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldrb r0, [r5, #0x191]
    cmp r0, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r0, =data_020a77a8
    ldr r1, [r5, #0x194]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    bgt L_0205b080
    ldr r0, =data_020a77ac
    ldr r0, [r0, #0x0]
    cmp r4, r0
    addlt sp, sp, #0x4
    ldmltfd sp!, {r4, r5, lr}
    bxlt lr
L_0205b080:
    add r3, r5, #0x1c
    ldrb r0, [r3, #0x0]
    ldr r1, =0x191
    mov r2, #0x1
    orr r0, r0, #0x20
    swpb r0, r0, [r3]
    add r1, r5, r1
    swpb r0, r2, [r1]
    bl func_02065730
    ldr r3, =0x66666667
    mov r1, r0, lsr #0x1f
    smull r2, r4, r3, r0
    mov r4, r4, asr #0x2
    ldr r3, =0xa
    add r4, r1, r4
    smull r1, r2, r3, r4
    sub r4, r0, r1
    cmp r4, #0x4
    bge L_0205b0e8
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_02118378
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    b L_0205b148
L_0205b0e8:
    cmp r4, #0x8
    bge L_0205b10c
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_02118384
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    b L_0205b148
L_0205b10c:
    cmp r4, #0x9
    bge L_0205b130
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_02118390
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    b L_0205b148
L_0205b130:
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_0211839c
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
L_0205b148:
    ldr r0, =data_02143e44
    bl func_02046fa4
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    bl func_02065730
    ldr r3, =0x66666667
    mov r1, r0, lsr #0x1f
    smull r2, r4, r3, r0
    mov r4, r4, asr #0x2
    ldr r3, =0xa
    add r4, r1, r4
    smull r1, r2, r3, r4
    subs r4, r0, r1
    addne sp, sp, #0x4
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_021183ac
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
