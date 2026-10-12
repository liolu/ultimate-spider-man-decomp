#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007484();
extern void func_02027100();
extern void func_0202718c();
extern void func_02063244();
extern void func_0206344c();
extern void func_020649c0();
extern void r1();
extern char data_021181f0[];
extern char data_0213b6e0[];
// clang-format off
asm void func_0205c034(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r5, [sp, #0x20]
    mov r4, r0
    str r5, [sp, #0x0]
    bl func_02007484
    ldr r0, =data_021181f0
    mov r2, #0x0
    str r0, [r4, #0x0]
    str r2, [r4, #0x1f4]
    add r1, r4, #0x1f8
    mov r5, #0x1
    ldr r3, =0x1f9
    swpb r0, r5, [r1]
    add r1, r4, r3
    swpb r0, r5, [r1]
    mov r3, #0xfa0
    ldr r1, =0x2710
    add r0, r4, #0x1fc
    str r3, [sp, #0x0]
    bl func_020649c0
    mov r1, #0x0
    str r1, [r4, #0x6ec]
    ldr r0, =data_0213b6e0
    str r1, [r4, #0x6f0]
    ldr r1, [r0, #0x0]
    mov r0, r4
    str r1, [r4, #0x1f4]
    ldrh r1, [r4, #0x3a]
    str r1, [r4, #0x6e4]
    ldrh r1, [r4, #0x3a]
    mov r1, r1, lsl #0x1
    str r1, [r4, #0x6e8]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r5, r0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x180]
    blx r1
    mov r1, r0
    mov r0, r5
    bl func_0202718c
    cmp r0, #0x0
    ldr r1, =0x1f2
    movne r3, #0x1
    moveq r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    ldr r1, =0x197
    bl func_02027100
    ldr r2, =0x1f3
    mov r1, r4
    add r2, r4, r2
    swpb r0, r0, [r2]
    add r0, r4, #0x1fc
    bl func_02063244
    add r3, sp, #0xd
    mov r6, #0x0
    swpb r2, r6, [r3]
    add ip, sp, #0xb
    swpb r3, r6, [ip]
    add lr, sp, #0x8
    swpb ip, r6, [lr]
    mov r5, #0x1
    add r0, sp, #0x5
    swpb r6, r5, [r0]
    add r2, sp, #0x6
    add r1, sp, #0x4
    swpb r6, r5, [r2]
    swpb r2, r5, [r1]
    add r3, sp, #0x7
    swpb r2, r5, [r3]
    add ip, sp, #0x9
    swpb r2, r5, [ip]
    add lr, sp, #0xa
    swpb r2, r5, [lr]
    add r0, sp, #0xc
    swpb r2, r5, [r0]
    add r0, r4, #0x1fc
    bl func_0206344c
    add r1, r4, #0x6e0
    mov r0, r5
    swpb r0, r0, [r1]
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
