#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cd8();
extern void func_02004830();
extern void func_0202718c();
extern void func_0202f5f0();
extern void ip();
extern void r1();
extern char data_020eb6ac[];
extern char data_020eb6b8[];
extern char data_020eb6c4[];
extern char data_020eb6d0[];
// clang-format off
asm void func_020013c4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x34
    ldr r1, =0x1f2
    mov r4, r0
    add r2, r4, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x19c
    bl func_0202718c
    mov r5, r0
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    bl func_02003cd8
    mov r0, r4
    ldr ip, [r0, #0x0]
    mov r2, #0x0
    ldr ip, [ip, #0xc8]
    mov r1, r5
    mov r3, r2
    blx ip
    mov r0, #0x0
    str r0, [r4, #0x30]
    ldr r0, =data_020eb6d0
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020eb6c4
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020eb6b8
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020eb6ac
    add r3, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    mov r0, r4
    mov r1, #0x12
    bl func_02004830
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
