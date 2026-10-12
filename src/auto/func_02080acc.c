#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fc8();
extern void func_02070344();
extern void func_0207e5a8();
extern void func_020873dc();
extern char data_0213d588[];
// clang-format off
asm void func_02080acc(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r1, #0x1
    mov r4, r0
    mov r2, r1
    mov r0, #0x2
    bl func_02070344
    ldr r3, =data_0213d588
    mov r5, #0x0
    ldr r0, [r3, #0x140]
    add r1, r3, #0x34
    str r5, [r3, #0x4]
    cmp r0, #0x0
    swpb r0, r5, [r1]
    ble L_02080b28
    mov r2, r5
    mov r0, r3
L_02080b10:
    str r2, [r3, #0x40]
    ldr r1, [r0, #0x140]
    add r5, r5, #0x1
    cmp r5, r1
    add r3, r3, #0xc
    blt L_02080b10
L_02080b28:
    ldr r3, =data_0213d588
    mov r5, #0x0
    ldr r0, [r3, #0x140]
    str r5, [r3, #0x8]
    cmp r0, #0x0
    ble L_02080b60
    mov r2, r5
    mov r0, r3
L_02080b48:
    str r2, [r3, #0x44]
    ldr r1, [r0, #0x140]
    add r5, r5, #0x1
    cmp r5, r1
    add r3, r3, #0xc
    blt L_02080b48
L_02080b60:
    ldr r3, =data_0213d588
    mov r5, #0x0
    ldr r0, [r3, #0x140]
    str r5, [r3, #0xc]
    cmp r0, #0x0
    ble L_02080b98
    mov r2, r5
    mov r0, r3
L_02080b80:
    str r2, [r3, #0x48]
    ldr r1, [r0, #0x140]
    add r5, r5, #0x1
    cmp r5, r1
    add r3, r3, #0xc
    blt L_02080b80
L_02080b98:
    bl func_020873dc
    add r1, r0, #0x30
    mov r0, #0x0
    swpb r0, r0, [r1]
    bl func_020873dc
    mov ip, #0x0
    str ip, [r0, #0x1c]
    ldr r1, [r0, #0x1c]
    add r2, r0, #0x21
    str r1, [r0, #0x18]
    swpb r1, ip, [r2]
    add r2, r0, #0x20
    ldrb r1, [r0, #0x21]
    add r5, r0, #0x23
    add r6, r0, #0x22
    swpb r1, r1, [r2]
    mov r3, #0x1
    swpb r1, ip, [r5]
    ldrb r1, [r0, #0x23]
    swpb r1, r1, [r6]
    str r3, [r0, #0x24]
    mov r2, ip
L_02080bf0:
    add r1, r0, ip, lsl #0x4
    str r2, [r1, #0xb8]
    ldr r5, [r1, #0xb8]
    add ip, ip, #0x1
    str r5, [r1, #0xb4]
    add r5, r1, #0xbd
    swpb lr, r2, [r5]
    add lr, r1, #0xbc
    ldrb r5, [r1, #0xbd]
    add r6, r1, #0xbf
    add r7, r1, #0xbe
    swpb r5, r5, [lr]
    cmp ip, #0x10
    swpb r5, r2, [r6]
    ldrb r5, [r1, #0xbf]
    swpb r5, r5, [r7]
    str r3, [r1, #0xc0]
    blt L_02080bf0
    mov r0, #0x530
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02080c4c
    bl func_0207e5a8
L_02080c4c:
    str r0, [r4, #0xc]
    mov r0, #0x6
    str r0, [r4, #0x4]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
