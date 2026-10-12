#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern void func_0204e6e4();
extern void func_0206f7f0();
extern char data_020d967c[];
extern char data_020d9684[];
extern char data_0211c974[];
extern char data_0211ca44[];
// clang-format off
asm void func_02083c24(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x14
    mov ip, #0x0
    str ip, [sp, #0x0]
    mov r5, r2
    str ip, [sp, #0x4]
    str ip, [sp, #0x8]
    ldr r2, =data_020d967c
    ldr r3, =data_020d9684
    mov r4, r0
    str ip, [sp, #0xc]
    bl func_0204e6e4
    mov r1, r5
    add r0, r4, #0x3c4
    mov r2, #0x400
    bl func_0206f7f0
    ldr r1, =data_0211c974
    ldr r0, =data_0211ca44
    str r1, [r4, #0x0]
    str r0, [r4, #0x3c4]
    ldr r1, [r4, #0xbc]
    mov r0, r4
    add r2, r1, #0xd9
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0202f64c
    mov r0, r4
    add sp, sp, #0x14
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
