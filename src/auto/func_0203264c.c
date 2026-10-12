#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cd8();
extern void func_02003eec();
extern void func_02003efc();
extern void func_02004830();
extern void func_0200f758();
extern void func_0202718c();
extern void func_02065730();
extern void ip();
extern void r1();
// clang-format off
asm void func_0203264c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    ldr r0, [r4, #0x6f4]
    ldr r1, [r4, #0x188]
    bl func_0200f758
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x128]
    blx r1
    add r1, r4, #0x1c
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x20
    swpb r0, r0, [r1]
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x80
    swpb r0, r0, [r1]
    bl func_02065730
    ldr r2, =0x55555556
    ldr r3, =0x3
    smull r1, r5, r2, r0
    add r5, r5, r0, lsr #0x1f
    smull r1, r2, r3, r5
    sub r5, r0, r1
    add r5, r5, #0x1a8
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, r5
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
    mov r0, r4
    mov r1, r5
    ldrb r2, [r4, #0x15e]
    mov r3, #0x0
    bl func_02003efc
    mov r1, r5
    mov r0, r4
    ldrb r2, [r4, #0x15f]
    mov r3, #0x0
    bl func_02003eec
    mov r0, r4
    mov r1, #0x21
    bl func_02004830
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
