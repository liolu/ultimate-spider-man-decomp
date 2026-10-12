#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020335c4();
extern void func_02058114();
extern void r1();
extern char data_0214868c[];
// clang-format off
asm void func_02009c00(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x76c]
    cmp r1, #0x0
    bne L_02009c34
    bl func_02058114
    ldr r0, [r4, #0x6f4]
    cmp r0, #0x0
    ldr r0, =0x76c
    movne r2, #0x1
    moveq r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_02009c34:
    ldrb r0, [r4, #0x76d]
    cmp r0, #0x0
    ldrne r0, =data_0214868c
    strne r4, [r0, #0x44]
    ldr r0, [r4, #0x770]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    mov r0, r4
    bl func_020335c4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
