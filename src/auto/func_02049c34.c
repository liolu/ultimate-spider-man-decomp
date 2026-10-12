#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02009db4();
extern void func_0204838c();
extern void func_02049bec();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_02062a14();
extern void func_02064910();
extern void func_02064fc8();
extern void r1();
extern void r2();
extern char data_020b9138[];
extern char data_020d4704[];
extern char data_02104e90[];
extern char data_02104eec[];
extern char data_02120448[];
extern char data_02143e44[];
// clang-format off
asm void func_02049c34(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, [sp, #0x18]
    ldr r4, =data_02104e90
    str ip, [sp, #0x0]
    str r4, [sp, #0x4]
    mov r4, #0x7
    str r4, [sp, #0x8]
    mov ip, #0x0
    mov r4, r0
    str ip, [sp, #0xc]
    bl func_02009db4
    ldr r1, =data_02104eec
    mov r2, #0x0
    str r1, [r4, #0x0]
    ldr r0, =0x784
    str r2, [r4, #0x778]
    str r2, [r4, #0x77c]
    str r2, [r4, #0x780]
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldr r3, =data_020b9138
    str r2, [r4, #0x788]
    str r2, [r4, #0x78c]
    ldrsh r1, [r3, #0x0]
    add r2, r4, #0x100
    mov r0, r4
    strh r1, [r2, #0xd0]
    ldrsh ip, [r3, #0x2]
    add r1, r4, #0x1d0
    strh ip, [r2, #0xd2]
    ldrh ip, [r3, #0x4]
    strh ip, [r2, #0xd4]
    ldrh r3, [r3, #0x6]
    strh r3, [r2, #0xd6]
    bl func_01ff9acc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r0, #0x19c
    bl func_02064fc8
    movs r1, r0
    beq L_02049d10
    ldrb r2, [r4, #0x15e]
    ldr r1, =data_02120448
    mov r3, r4
    str r2, [sp, #0x0]
    ldrb lr, [r4, #0x15f]
    add r2, r4, #0x4c
    mov ip, #0x0
    str lr, [sp, #0x4]
    str ip, [sp, #0x8]
    bl func_0204838c
    mov r1, r0
L_02049d10:
    ldr ip, [r1, #0xbc]
    mov r2, #0x1
    add r3, ip, #0x96
    swpb r0, r2, [r3]
    add r3, ip, #0x97
    mov ip, #0x0
    swpb r0, ip, [r3]
    add r3, r1, #0x174
    swpb r0, ip, [r3]
    add ip, r1, #0x1e
    ldrb r3, [ip, #0x0]
    mov r0, r4
    bic r3, r3, #0x2
    swpb r3, r3, [ip]
    bl func_02062a14
    bl func_0204eb30
    ldr r1, =data_020d4704
    bl func_0204eab0
    ldr r1, =0x899
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r3, =0x3a98
    add r0, r4, #0x1fc
    mov r2, r1
    bl func_02064910
    ldr r0, =data_02143e44
    ldr r0, [r0, #0x8]
    cmp r0, #0x1
    bne L_02049da0
    mov r0, r4
    bl func_02049bec
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, #0x4
    ldr r2, [r2, #0x1f8]
    blx r2
L_02049da0:
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
