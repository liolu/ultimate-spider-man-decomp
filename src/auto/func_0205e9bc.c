#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffaeb4();
extern void func_02003eec();
extern void func_02003efc();
extern void func_02004830();
extern void func_0202718c();
extern void func_02028ba0();
extern void func_02028cfc();
extern void func_0205f66c();
extern void ip();
extern void r1();
extern char data_021183dc[];
extern char data_021183f8[];
extern char data_02118400[];
extern char data_0211840c[];
// clang-format off
asm void func_0205e9bc(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r1, =0x9a4
    mov r4, r0
    add r0, r4, r1
    mov r1, #0x0
    bl func_0205f66c
    ldr r0, =data_021183f8
    ldr r1, =data_02118400
    ldr r2, [r0, #0x0]
    add r3, r4, #0x7c
    str r2, [r4, #0x74]
    ldr r0, [r0, #0x4]
    ldr r5, =data_0211840c
    str r0, [r4, #0x78]
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r3, r4, #0x88
    ldmia r5, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r1, r4, #0x1d
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x20
    swpb r0, r0, [r1]
    bl func_01ffaeb4
    mov r1, r0
    ldr r0, =0x9dc
    add r0, r4, r0
    bl func_02028cfc
    ldr r0, =0x9dc
    ldr r1, =data_021183f8
    add r0, r4, r0
    bl func_02028ba0
    ldr r1, =data_021183dc
    mov r0, r4
    ldr r1, [r1, #0x0]
    str r1, [r4, #0x9e4]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x80
    bl func_0202718c
    mov r5, r0
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    mov r3, r2
    ldr ip, [r0, #0x0]
    ldr ip, [ip, #0xc8]
    blx ip
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    mov r3, r2
    bl func_02003efc
    mov r1, r5
    mov r0, r4
    mov r2, #0x0
    mov r3, r2
    bl func_02003eec
    mov r0, r4
    mov r1, #0x27
    bl func_02004830
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
