#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa840();
extern void func_01ffcd3c();
extern void func_0200a47c();
extern void func_02062bdc();
extern void func_02064fc8();
extern void func_02086078();
extern void r1();
extern void r2();
extern char data_021191c4[];
extern char data_02147ac8[];
// clang-format off
asm void func_02062e48(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r5, r2
    mov r6, r1
    mov r1, r5
    mov r7, r0
    mov r4, r3
    bl func_01ffa840
    ldr r0, =data_021191c4
    ldr r3, =0x15e
    ldr ip, =0x15f
    str r0, [r7, #0x0]
    mov r0, #0x0
    str r0, [r7, #0x154]
    add r2, r7, #0x15c
    swpb r1, r0, [r2]
    add r2, r7, r3
    ldr lr, =0x169
    swpb r1, r4, [r2]
    ldr r4, =0x16a
    ldrb r1, [sp, #0x18]
    add r2, r7, ip
    add r3, r7, #0x168
    swpb r1, r1, [r2]
    add r2, r7, lr
    str r0, [r7, #0x160]
    str r0, [r7, #0x164]
    swpb r1, r0, [r3]
    add r3, r7, r4
    swpb r1, r0, [r2]
    mov r1, #0x1
    swpb r2, r1, [r3]
    mov r2, #0x1000
    str r0, [r7, #0x16c]
    str r2, [r7, #0x170]
    add r2, r7, #0x174
    swpb r0, r1, [r2]
    mov r0, r7
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x8c]
    blx r2
    ldr r0, =0x15d
    mov r1, #0x1000
    str r1, [r7, #0x120]
    add r1, r7, r0
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r2, r7, #0x1c
    ldrb r1, [r2, #0x0]
    mov r0, #0xf4
    orr r1, r1, #0x8
    swpb r1, r1, [r2]
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02062f2c
    mov r1, r6
    bl func_02086078
L_02062f2c:
    str r0, [r7, #0xbc]
    mov r0, r7
    mov r1, r5
    bl func_02062bdc
    mov r0, r7
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r0, #0x0
    str r0, [r7, #0x158]
    ldrb r0, [r7, #0x15c]
    cmp r0, #0x0
    bne L_02062f78
    ldr r1, =data_02147ac8
    add r0, r7, #0x3c
    ldr r1, [r1, #0x0]
    bl func_0200a47c
    cmp r0, #0x0
    beq L_02062f80
L_02062f78:
    mov r1, #0x1
    b L_02062f84
L_02062f80:
    mov r1, #0x0
L_02062f84:
    add r2, r7, #0x10
    mov r0, r7
    swpb r1, r1, [r2]
    bl func_01ffcd3c
    mov r0, r7
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
