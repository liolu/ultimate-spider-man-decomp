#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202718c();
extern void func_0202f5f0();
extern void func_02036994();
extern void func_020369e8();
extern void func_02036afc();
extern char data_020b43a8[];
// clang-format off
asm void func_0203c2a4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    add r0, r5, #0x190
    mov r1, #0x28
    bl func_0202718c
    mov r4, r0
    mov r2, #0x0
    mov r0, r5
    mov r1, r4
    mov r3, r2
    bl func_02036afc
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_020369e8
    mov r0, r5
    mov r1, r4
    mov r2, #0x0
    bl func_02036994
    mov r0, #0x15
    str r0, [r5, #0x194]
    ldr r3, [r5, #0xbc]
    mov r2, #0x0
    add r1, r3, #0x96
    swpb r0, r2, [r1]
    add r1, r3, #0x97
    swpb r0, r2, [r1]
    ldr r0, =data_020b43a8
    bl func_0202f5f0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
