#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02011464();
extern void func_020114a8();
extern void func_020133cc();
extern void func_0202718c();
extern void func_02058688();
extern void func_0205b58c();
extern void func_02064fc8();
extern void func_02065730();
extern void r1();
extern void r2();
extern void r4();
// clang-format off
asm void func_02023024(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    ldr r0, [r5, #0x1b8]
    mov r4, #0x1
    cmp r0, #0x5
    beq L_02023170
    cmp r0, #0x15
    beq L_02023050
    cmp r0, #0x23
    beq L_020230e8
    b L_02023250
L_02023050:
    ldr r0, [r5, #0x180]
    cmp r0, #0x5d
    bne L_02023250
    ldr r0, =0x788
    add r0, r5, r0
    bl func_02011464
    ldrb r0, [r5, #0x15e]
    ldr r1, =0x788
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, r4
    add r3, r5, r0
    movne r2, #0x0
    add r0, r5, r1
    swpb r2, r2, [r3]
    mov r1, #0x64
    bl func_020114a8
    cmp r0, #0x3
    bne L_02023250
    ldr r0, [r5, #0x1dc]
    cmp r0, #0x0
    ldrne r0, [r0, #0x0]
    moveq r0, #0x0
    cmp r0, #0x0
    bne L_02023250
    ldr r0, =0x777
    mov r1, #0x0
    add r2, r5, r0
    ldr r3, =0x776
    swpb r0, r1, [r2]
    mov r0, r5
    mov r2, r1
    add r4, r5, r3
    mov r3, #0x1
    swpb r3, r3, [r4]
    bl func_0205b58c
    mov r4, #0x0
    b L_02023250
L_020230e8:
    ldr r0, [r5, #0x180]
    cmp r0, #0x51
    beq L_02023168
    cmp r0, #0x53
    beq L_02023168
    ldr r0, [r5, #0x748]
    cmp r0, #0x3
    movgt r4, #0x3c
    mov r0, #0xc
    movle r4, #0x5a
    bl func_02064fc8
    movs r6, r0
    movne r0, #0x16
    strne r0, [r6, #0x0]
    movne r0, #0x4
    strne r0, [r6, #0x4]
    strne r4, [r6, #0x8]
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x3
    bl func_0202718c
    mov r1, r0
    mov r0, r5
    ldr r4, [r0, #0x0]
    mov r2, r6
    ldr r4, [r4, #0x10c]
    mov r3, #0x1
    blx r4
    mov r4, #0x0
    b L_02023250
L_02023168:
    mov r4, #0x1
    b L_02023250
L_02023170:
    bl func_02065730
    ldr r3, =0x51eb851f
    mov r1, r0, lsr #0x1f
    smull r2, ip, r3, r0
    mov ip, ip, asr #0x5
    ldr r3, =0x64
    add ip, r1, ip
    smull r1, r2, r3, ip
    sub ip, r0, r1
    cmp ip, #0x32
    bge L_02023250
    mov r0, r5
    bl func_02058688
    cmp r0, #0x0
    beq L_02023220
    bl func_02065730
    ldr r3, =0x51eb851f
    mov r1, r0, lsr #0x1f
    smull r2, r4, r3, r0
    mov r4, r4, asr #0x5
    ldr r3, =0x64
    add r4, r1, r4
    smull r1, r2, r3, r4
    sub r4, r0, r1
    cmp r4, #0x4b
    bge L_02023220
    bl func_02065730
    mov r1, r0, lsr #0x1f
    rsb r0, r1, r0, lsl #0x1f
    adds r0, r1, r0, ror #0x1f
    mov r0, r5
    ldr r1, [r0, #0x0]
    movne r4, #0x3d
    ldr r1, [r1, #0x148]
    moveq r4, #0x3e
    blx r1
    mov r1, r4
    bl func_0202718c
    mov r1, r0
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1a4]
    blx r2
    b L_0202324c
L_02023220:
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x50
    bl func_0202718c
    mov r1, r0
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x1ac]
    blx r2
L_0202324c:
    mov r4, #0x0
L_02023250:
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r5
    bl func_020133cc
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
