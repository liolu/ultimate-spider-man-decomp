#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_0202f64c();
extern void func_0203cde8();
extern void r1();
extern char data_020b7f10[];
extern char data_020b7f28[];
extern char data_0210457c[];
// clang-format off
asm void func_02042b7c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldrb ip, [sp, #0x10]
    mov r4, r0
    str ip, [sp, #0x0]
    bl func_0203cde8
    ldr r0, =data_0210457c
    mov r2, #0x0
    str r0, [r4, #0x0]
    str r2, [r4, #0x244]
    add r1, r4, #0x248
    swpb r0, r2, [r1]
    add r1, r4, #0x264
    str r2, [r4, #0x24c]
    str r2, [r4, #0x250]
    str r2, [r4, #0x254]
    str r2, [r4, #0x258]
    str r2, [r4, #0x25c]
    str r2, [r4, #0x260]
    swpb r0, r2, [r1]
    mov r0, #0x10
    str r0, [r4, #0x268]
    add r1, r4, #0x26c
    swpb r0, r2, [r1]
    add r1, r4, #0xa8
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr ip, =data_020b7f28
    add r2, r4, #0x100
    ldrsh r1, [ip, #0x0]
    ldr r3, =data_020b7f10
    mov r0, r4
    strh r1, [r2, #0xb4]
    ldrsh lr, [ip, #0x2]
    add r1, r4, #0x1b4
    strh lr, [r2, #0xb6]
    ldrh lr, [ip, #0x4]
    strh lr, [r2, #0xb8]
    ldrh ip, [ip, #0x6]
    strh ip, [r2, #0xba]
    ldrsh ip, [r3, #0x0]
    strh ip, [r2, #0xbc]
    ldrsh ip, [r3, #0x2]
    strh ip, [r2, #0xbe]
    ldrh ip, [r3, #0x4]
    strh ip, [r2, #0xc0]
    ldrh r3, [r3, #0x6]
    strh r3, [r2, #0xc2]
    bl func_01ff9acc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r0, r4
    bl func_0202f64c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xf8]
    blx r1
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
