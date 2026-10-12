#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02024c20();
extern void func_02062fc0();
extern void func_02064fc8();
extern void func_0206fb3c();
extern void func_0206fea0();
extern void func_0206feb8();
extern char data_020b371c[];
extern char data_020b3724[];
extern char data_020b3730[];
extern char data_020f7818[];
extern char data_02150f1c[];
// clang-format off
asm void func_02011638(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x8
    mov r3, #0x0
    str r3, [sp, #0x0]
    mov r5, r0
    mov r4, r2
    str r3, [sp, #0x4]
    bl func_02062fc0
    ldr r1, =data_020f7818
    ldr r2, =0x176
    ldr r0, =0x175
    str r1, [r5, #0x0]
    add r1, r5, r0
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r2, r5, r2
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, #0xc8
    bl func_02064fc8
    movs r6, r0
    beq L_020116cc
    mov r0, #0x40
    bl func_02064fc8
    movs r1, r0
    beq L_020116b0
    ldr r1, =data_02150f1c
    mov r2, #0x0
    bl func_02024c20
    mov r1, r0
L_020116b0:
    mov r3, #0x0
    str r3, [sp, #0x0]
    mov r0, r6
    mov r2, r4
    str r3, [sp, #0x4]
    bl func_0206fb3c
    mov r6, r0
L_020116cc:
    str r6, [r5, #0x178]
    ldr r0, [r5, #0x178]
    mov r1, #0x1
    ldr r0, [r0, #0xbc]
    bl func_0206feb8
    ldr r0, [r5, #0x178]
    mov r1, #0x1
    ldr r0, [r0, #0xbc]
    bl func_0206fea0
    add r2, r5, #0x1c
    ldrb r0, [r2, #0x0]
    add r1, r5, #0x15c
    mov r3, #0x1
    orr r0, r0, #0x20
    swpb r0, r0, [r2]
    ldr r2, =data_020b371c
    swpb r0, r3, [r1]
    ldr lr, =data_020b3724
    ldr r0, [r5, #0xbc]
    add ip, r5, #0x7c
    add r1, r0, #0xd9
    swpb r0, r3, [r1]
    ldr r4, =data_020b3730
    ldr r0, [r2, #0x0]
    add r3, r5, #0x88
    str r0, [r5, #0x74]
    ldr r0, [r2, #0x4]
    str r0, [r5, #0x78]
    ldmia lr, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r5
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
