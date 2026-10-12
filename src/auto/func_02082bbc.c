#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02033fe0();
extern void func_0204366c();
extern void func_02045fcc();
extern void func_02061bf8();
extern void func_02082204();
extern void func_02082544();
extern void func_02085d78();
extern void r1();
extern char data_0211c760[];
extern char data_0211e7a4[];
extern char data_02150bb8[];
// clang-format off
asm void func_02082bbc(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldrb ip, [sp, #0x10]
    mov r4, r0
    str ip, [sp, #0x0]
    bl func_02045fcc
    ldr r0, =data_0211c760
    ldrh r1, [sp, #0x14]
    str r0, [r4, #0x0]
    add r0, r4, #0x400
    strh r1, [r0, #0xa0]
    ldr r0, [r4, #0x24c]
    cmp r0, #0x0
    beq L_02082c00
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_02082c00:
    ldr r0, [r4, #0x248]
    cmp r0, #0x0
    beq L_02082c18
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_02082c18:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x1a4]
    blx r1
    ldr r0, [r4, #0xbc]
    mov r2, #0x0
    add r1, r0, #0xda
    swpb r0, r2, [r1]
    add r1, r4, #0x15c
    mov lr, #0x1
    swpb r0, lr, [r1]
    add r0, r4, #0x250
    ldr r1, [r4, #0xbc]
    add r3, r4, #0x400
    add r2, r1, #0xd9
    swpb r1, lr, [r2]
    ldr r1, =0x226
    ldrh ip, [r3, #0xa0]
    add r2, r0, r1
    add r3, r0, #0x200
    swpb r1, lr, [r2]
    strh ip, [r3, #0x28]
    ldrh r1, [r3, #0x28]
    cmp r1, #0x0
    beq L_02082c80
    bl func_02061bf8
L_02082c80:
    add r2, r4, #0x400
    ldr r3, [r4, #0x490]
    ldrh ip, [r2, #0xa0]
    add r1, r3, #0xd0
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r0, r4
    strh ip, [r3, #0xd2]
    ldrh r1, [r2, #0xa0]
    bl func_0204366c
    ldr r0, =data_02150bb8
    bl func_02082204
    cmp r0, #0x0
    beq L_02082cd0
    ldr r0, =data_02150bb8
    bl func_02082544
    add r1, r4, #0x400
    ldrh r1, [r1, #0xa0]
    cmp r1, r0
    beq L_02082cdc
L_02082cd0:
    mov r0, r4
    mov r1, #0x0
    bl func_02033fe0
L_02082cdc:
    add r0, r4, #0x400
    ldrh r0, [r0, #0xa0]
    cmp r0, #0x0
    beq L_02082d0c
    ldr r1, =data_0211e7a4
    ldr r0, [r4, #0xbc]
    ldr r2, [r1, #0x8]
    mov r1, #0x1
    bl func_02085d78
    ldr r0, [r4, #0xbc]
    mov r1, #0x1
    str r1, [r0, #0xb0]
L_02082d0c:
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
