#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004e44();
extern void func_02033768();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_02058688();
extern char data_020d41a0[];
extern char data_020d4404[];
extern char data_020d4470[];
extern char data_020d4494[];
extern char data_020d44b8[];
// clang-format off
asm void func_020229e4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r2, [r6, #0x180]
    mov r5, r1
    cmp r2, #0x5d
    mov r4, #0x0
    bne L_02022a0c
    bl func_02058688
    cmp r0, #0x0
    moveq r4, #0x1
L_02022a0c:
    ldr r0, [r6, #0x748]
    cmp r0, #0x2
    bne L_02022a20
    mov r0, r6
    bl func_02033768
L_02022a20:
    ldr r0, =0x777
    ldr r2, =0x776
    add r1, r6, r0
    mov ip, #0x0
    swpb r0, ip, [r1]
    add r3, r6, r2
    mov r0, r6
    mov r1, r5
    swpb r2, ip, [r3]
    bl func_02004e44
    cmp r4, #0x0
    beq L_02022a6c
    ldrb r0, [r6, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r6, r0
    swpb r0, r2, [r1]
L_02022a6c:
    add r1, r6, #0x780
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r6, #0x780]
    cmp r0, #0x1
    bne L_02022ac8
    ldr r0, [r6, #0x748]
    cmp r0, #0x0
    bne L_02022aa8
    bl func_0204eb30
    ldr r1, =data_020d4404
    bl func_0204eab0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02022aa8:
    cmp r0, #0x3
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    bl func_0204eb30
    ldr r1, =data_020d4470
    bl func_0204eab0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02022ac8:
    cmp r0, #0x4
    bne L_02022b10
    ldr r0, [r6, #0x748]
    cmp r0, #0x0
    bne L_02022af0
    bl func_0204eb30
    ldr r1, =data_020d4494
    bl func_0204eab0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02022af0:
    cmp r0, #0x3
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    bl func_0204eb30
    ldr r1, =data_020d44b8
    bl func_0204eab0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02022b10:
    cmp r0, #0x8
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    ldr r0, [r6, #0x748]
    cmp r0, #0x3
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    bl func_0204eb30
    ldr r1, =data_020d41a0
    bl func_0204eab0
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
