#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fbc();
extern void func_02065388();
extern void func_02069be0();
extern void func_0206a870();
extern void func_0206ae44();
extern void func_0207ccec();
extern void func_0208ff54();
extern void func_02090004();
extern char data_0211c114[];
extern char data_02150a8c[];
extern char data_02150a90[];
extern char data_02150a94[];
extern char data_02150a98[];
extern char data_02150a9c[];
extern char func_0207caf0[];
extern char func_0207cb68[];
extern char func_0207cc20[];
extern char func_0207cc50[];
extern char func_0207cc98[];
extern char func_0207cce0[];
extern char func_0207ccf8[];
extern char func_0207cd08[];
extern char func_0207cd2c[];
extern char func_0207cd34[];
extern char func_0207cd40[];
extern char func_0207cd78[];
// clang-format off
asm void func_0207c92c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x68
    ldr r1, =data_02150a9c
    mov r2, #0x0
    mov r0, #0x2
    str r2, [r1, #0x0]
    bl func_0208ff54
    mov r0, #0x0
    mov r1, r0
    bl func_02090004
    mov r4, r0
    bl func_0207ccec
    ldr r2, =data_02150a94
    mov r1, r4
    str r0, [r2, #0x0]
    bl func_02090004
    ldr r0, =func_0207cce0
    ldr r1, =func_0207ccec
    str r0, [sp, #0x8]
    ldr r0, =func_0207cd40
    str r1, [sp, #0x4]
    mov r2, #0x63
    ldr r1, =func_0207cd78
    str r0, [sp, #0x10]
    ldr r0, =func_0207cd2c
    str r1, [sp, #0xc]
    ldr r1, =func_0207cd34
    mov r3, #0x0
    str r0, [sp, #0x18]
    ldr r0, =func_0207ccf8
    str r1, [sp, #0x14]
    ldr r1, =func_0207cd08
    str r0, [sp, #0x20]
    mov r0, #0x4
    str r1, [sp, #0x1c]
    str r0, [sp, #0x24]
    mov r0, #0x62
    add r1, sp, #0x28
    swpb r0, r0, [r1]
    ldr r1, =func_0207caf0
    mov r0, #0x7a
    str r1, [sp, #0x34]
    add r1, sp, #0x38
    swpb r0, r0, [r1]
    add r1, sp, #0x48
    mov r0, #0x6d
    swpb r0, r0, [r1]
    add r1, sp, #0x58
    mov r0, #0x30
    swpb r0, r0, [r1]
    ldr r1, =func_0207cc98
    ldr r0, =func_0207cc50
    str r1, [sp, #0x60]
    str r0, [sp, #0x64]
    str r2, [sp, #0x2c]
    str r2, [sp, #0x3c]
    str r2, [sp, #0x4c]
    ldr r2, =func_0207cc20
    add r0, sp, #0x4
    str r2, [sp, #0x44]
    ldr r2, =func_0207cb68
    add r1, sp, #0xc
    str r2, [sp, #0x54]
    mov r2, #0x3e8
    str r2, [sp, #0x5c]
    add r2, sp, #0x24
    str r3, [sp, #0x30]
    str r3, [sp, #0x40]
    str r3, [sp, #0x50]
    bl func_0206ae44
    ldr r1, =data_02150a98
    ldr r0, =data_0211c114
    str r1, [sp, #0x0]
    mov r1, #0x0
    mov r2, r1
    mov r3, r1
    bl func_0206a870
    ldr r0, =data_02150a98
    ldr r0, [r0, #0x0]
    bl func_02069be0
    ldr r1, =data_02150a8c
    str r0, [r1, #0x0]
    mov r0, r0, lsl #0x2
    bl func_02064fbc
    ldr r2, =data_02150a90
    mov r1, #0x0
    str r0, [r2, #0x0]
    ldr r2, =data_02150a8c
    ldr r2, [r2, #0x0]
    mov r2, r2, lsl #0x2
    bl func_02065388
    add sp, sp, #0x68
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
