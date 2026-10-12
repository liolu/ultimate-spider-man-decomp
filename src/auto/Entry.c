#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000900();
extern void func_02000914();
extern void func_020009b8();
extern void func_02000a14();
extern void func_020678b4();
extern void func_02067928();
extern void func_0209ab8c();
extern char BuildInfo[];
extern char data_023c0000[];
extern char func_01fff6c8[];
extern char main[];
// clang-format off
asm void Entry(void) {
    mov ip, #0x4000000
    str ip, [ip, #0x208]
    bl func_02000a14
    mov r0, #0x13
    msr cpsr_c, r0
    ldr r0, =data_023c0000
    add r0, r0, #0x3fc0
    mov sp, r0
    mov r0, #0x12
    msr cpsr_c, r0
    ldr r0, =data_023c0000
    add r0, r0, #0x3fc0
    sub r0, r0, #0x40
    mov sp, r0
    ldr r1, =0x1000
    sub r1, r0, r1
    mov r0, #0x1f
    msr cpsr_fsxc, r0
    sub sp, r1, #0x4
    mov r0, #0x0
    ldr r1, =data_023c0000
    mov r2, #0x4000
    bl func_02000900
    mov r0, #0x0
    ldr r1, =0x5000000
    mov r2, #0x400
    bl func_02000900
    mov r0, #0x200
    ldr r1, =0x7000000
    mov r2, #0x400
    bl func_02000900
    ldr r1, =BuildInfo
    ldr r0, [r1, #0x14]
    bl func_02000914
    bl func_020009b8
    ldr r0, =BuildInfo
    ldr r1, [r0, #0xc]
    ldr r2, [r0, #0x10]
    mov r0, #0x0
L_0200089c:
    cmp r1, r2
    strlo r0, [r1], #0x4
    blo L_0200089c
    ldr r1, =0x27fff9c
    str r0, [r1, #0x0]
    ldr r1, =data_023c0000
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    ldr r0, =func_01fff6c8
    str r0, [r1, #0x0]
    bl func_02067928
    bl func_020678b4
    bl func_0209ab8c
    ldr r1, =main
    ldr lr, =0xffff0000
    bx r1
}
// clang-format on
