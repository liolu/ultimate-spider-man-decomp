#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001ce4();
extern void func_0200ee0c();
extern void func_02020618();
extern void func_020573a0();
extern void func_02057cc8();
extern void func_02057ddc();
extern void r3();
extern char data_020d4174[];
extern char data_02119060[];
// clang-format off
asm void func_020607bc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r0, =data_02119060
    bl func_0200ee0c
    ldr r1, =0x76c
    mov r0, r4
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_02057ddc
    mov r0, #0x90
    bl func_02020618
    mov r5, r0
    mov r0, r4
    bl func_020573a0
    mov r2, r0
    mov r0, #0x1
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r3, =data_020d4174
    mov r1, r5
    mov r0, r4
    bl func_02057cc8
    movs r1, r0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    ldr r3, [r0, #0x0]
    mov r2, #0x2
    ldr r3, [r3, #0x1a0]
    blx r3
    mov r0, r4
    bl func_02001ce4
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
