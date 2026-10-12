#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern void func_02064fc8();
extern void func_02086e7c();
extern void func_02087030();
extern void func_02087944();
extern char data_020d664c[];
extern char data_020d6658[];
extern char data_020d6664[];
extern char data_020efa10[];
extern char data_0211abac[];
// clang-format off
asm void func_020690d4(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x20
    ldr r1, =data_020efa10
    mov r4, r0
    ldr r0, =data_0211abac
    str r1, [r4, #0x0]
    str r0, [r4, #0x0]
    mov r1, #0x0
    str r1, [r4, #0x14]
    str r1, [r4, #0x20]
    add r2, r4, #0x24
    swpb r0, r1, [r2]
    add r2, r4, #0x25
    swpb r0, r1, [r2]
    add r2, r4, #0x26
    swpb r0, r1, [r2]
    mvn ip, #0x0
    str r1, [r4, #0x28]
    str r1, [r4, #0x30]
    str ip, [r4, #0x8]
    ldr r0, [r4, #0x8]
    mov r3, #0x100
    str r0, [r4, #0x4]
    str ip, [r4, #0x10]
    ldr r0, [r4, #0x10]
    mov r2, #0xc0
    str r0, [r4, #0xc]
    str ip, [r4, #0x1c]
    ldr ip, [r4, #0x1c]
    mov r0, #0x24
    str ip, [r4, #0x18]
    str r1, [sp, #0x10]
    str r1, [sp, #0x14]
    str r3, [sp, #0x18]
    str r2, [sp, #0x1c]
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02069178
    ldr r1, =data_020d6664
    add r2, sp, #0x10
    bl func_02086e7c
L_02069178:
    str r0, [r4, #0x28]
    mov r0, #0x30
    bl func_02064fc8
    cmp r0, #0x0
    beq L_020691bc
    mov r1, #0x100
    str r1, [sp, #0x0]
    mov r1, #0xc0
    mov r2, #0x0
    str r1, [sp, #0x4]
    mov r1, #0x2
    ldr ip, =0x3e7
    str r1, [sp, #0x8]
    ldr r1, =data_020d6658
    mov r3, r2
    str ip, [sp, #0xc]
    bl func_02087030
L_020691bc:
    str r0, [r4, #0x2c]
    mov r0, #0x1c
    bl func_02064fc8
    cmp r0, #0x0
    beq L_020691dc
    ldr r1, =data_020d664c
    add r2, sp, #0x10
    bl func_02087944
L_020691dc:
    str r0, [r4, #0x30]
    mov r0, r4
    bl func_0202f64c
    mov r0, r4
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
