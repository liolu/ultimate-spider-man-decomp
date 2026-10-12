#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000e64();
extern void func_02003cd8();
extern void func_02003efc();
extern void func_0202718c();
extern void ip();
extern void r1();
extern void r2();
// clang-format off
asm void func_02004ce0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, [r0, #0x0]
    mov r1, #0x0
    ldr r2, [r2, #0x8c]
    mov r4, r0
    blx r2
    ldr r0, =0x191
    mov r2, #0x0
    str r2, [r4, #0x194]
    add r1, r4, r0
    swpb r0, r2, [r1]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    ldr r1, =0x199
    bl func_0202718c
    mov r5, r0
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    bl func_02003cd8
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    mov r3, r2
    ldr ip, [r0, #0x0]
    ldr ip, [ip, #0xc8]
    blx ip
    mov r1, r5
    mov r0, r4
    ldrb r2, [r4, #0x15e]
    mov r3, #0x0
    bl func_02003efc
    ldr r0, [r4, #0xa4]
    mov r1, #0x31
    add r0, r0, #0x1c
    mov r2, #0x700
    bl func_02000e64
    mov r0, #0x0
    str r0, [r4, #0x30]
    mov r0, #0xe
    str r0, [r4, #0x1b8]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
