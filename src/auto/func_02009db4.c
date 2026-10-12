#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009c6c();
extern void func_02009f3c();
extern void func_0200a294();
extern void func_02026a94();
extern void func_020337b4();
extern void func_02046d74();
extern void func_02058114();
extern void func_02058b1c();
extern void func_02064fc8();
extern void func_020862f0();
extern char data_020ed098[];
extern char data_0213d440[];
extern char data_02143e44[];
extern char data_0214868c[];
// clang-format off
asm void func_02009db4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldr r5, [sp, #0x18]
    ldr r4, [sp, #0x1c]
    str r5, [sp, #0x0]
    ldr ip, [sp, #0x20]
    str r4, [sp, #0x4]
    mov r5, r0
    mov r4, r3
    str ip, [sp, #0x8]
    bl func_020337b4
    ldr r0, =0x754
    ldr r1, =data_020ed098
    add r0, r5, r0
    str r1, [r5, #0x0]
    bl func_02009f3c
    ldr r0, =0x76d
    ldr r3, =0x774
    ldr ip, =0x775
    add r2, r5, r0
    mov r1, #0x1
    swpb r0, r1, [r2]
    add r2, r5, r3
    swpb r0, r1, [r2]
    add r2, r5, ip
    mov r0, #0x0
    swpb r0, r0, [r2]
    ldr r0, [r5, #0xbc]
    bl func_020862f0
    ldr r0, [r5, #0xbc]
    ldr r2, =0x175
    add r1, r0, #0xda
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r5, r2
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_0213d440
    ldrh r2, [r4, #0x0]
    mov r1, #0x3
    bl func_02026a94
    ldrh r1, [r4, #0x0]
    ldr r0, =data_02143e44
    bl func_02046d74
    ldrb r0, [sp, #0x24]
    cmp r0, #0x0
    beq L_02009e78
    mov r0, r5
    bl func_02009c6c
L_02009e78:
    ldr r1, =0x1e8480
    mov r0, r5
    bl func_02058b1c
    mov r0, r5
    bl func_02058114
    ldr r0, [r5, #0x6f4]
    add r4, r5, #0x1c
    cmp r0, #0x0
    ldr r0, =0x76c
    movne r3, #0x1
    moveq r3, #0x0
    add r1, r5, r0
    swpb r0, r3, [r1]
    ldr r2, =0x6fc
    ldrb r0, [r4, #0x0]
    add r1, r5, r2
    mov r3, #0x0
    orr r0, r0, #0x20
    swpb r0, r0, [r4]
    add r2, r5, #0xa8
    swpb r0, r3, [r1]
    swpb r0, r3, [r2]
    ldrb r0, [r5, #0x76d]
    cmp r0, #0x0
    ldrne r0, =data_0214868c
    strne r5, [r0, #0x44]
    mov r0, #0x18
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02009ef8
    mov r1, r5
    bl func_0200a294
L_02009ef8:
    str r0, [r5, #0x770]
    mov r0, r5
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
