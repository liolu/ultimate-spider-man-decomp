#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200be88();
extern void func_02058d74();
extern void func_02064fc8();
extern void func_0206575c();
extern void func_02082544();
extern void func_02087ff4();
extern char data_0211c25c[];
extern char data_0211c2a4[];
extern char data_0211c314[];
extern char data_0211c318[];
extern char data_0213b360[];
extern char data_02150bb8[];
extern char data_02150c4c[];
// clang-format off
asm void func_020800ac(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl func_0200be88
    ldr r1, =data_0211c2a4
    mov r0, #0x0
    str r1, [r4, #0x0]
    str r0, [r4, #0xe0]
    mov r1, #0x3
    add r0, r4, #0xf4
    str r1, [r4, #0xe8]
    bl func_02087ff4
    ldr r2, =0x611
    add r1, r4, #0x610
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r1, r4, r2
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, =data_02150c4c
    str r3, [r4, #0x634]
    ldrh r0, [r0, #0x0]
    bl func_0206575c
    ldr r1, =data_0211c25c
    mov r0, #0x128
    ldr r2, [r1, #0x0]
    ldr r1, [r1, #0x4]
    str r2, [sp, #0x8]
    str r1, [sp, #0xc]
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0208014c
    ldr ip, =data_0211c318
    ldr r1, =data_0211c314
    str ip, [sp, #0x0]
    mov ip, #0x0
    ldr r3, =data_0213b360
    add r2, sp, #0x8
    str ip, [sp, #0x4]
    bl func_02058d74
L_0208014c:
    str r0, [r4, #0xe4]
    ldr r0, =data_02150bb8
    bl func_02082544
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [r4, #0xc4]
    movne r0, #0x0
    strne r0, [r4, #0xc4]
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
