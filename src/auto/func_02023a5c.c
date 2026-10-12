#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02001c78();
extern void func_0202f5f0();
extern void func_02033790();
extern void func_020573a0();
extern void func_02057c18();
extern void func_02057ddc();
extern void func_0205806c();
extern void func_02058114();
extern void r3();
extern char data_020f8b7c[];
extern char data_020f8b88[];
extern char data_020f8b94[];
extern char data_020f8ba0[];
extern char data_020f8bb8[];
extern char data_020f8bc4[];
extern char data_020f8bd0[];
extern char data_020f8bdc[];
extern char data_020f8be8[];
extern char data_0213d440[];
// clang-format off
asm void func_02023a5c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x6c
    mov r4, r1
    mov r5, r0
    cmp r4, #0x1
    bne L_02023b20
    ldr r0, =data_020f8b94
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_0213d440
    ldr r2, =0x76d
    add r1, r0, #0x28
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r5, r2
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r3, sp, #0xc
    ldr r0, =data_020f8ba0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020f8bd0
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020f8be8
    add r3, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020f8b7c
    add r3, sp, #0x30
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    mov r0, r5
    bl func_02057ddc
    mov r0, r5
    bl func_0205806c
    b L_02023c04
L_02023b20:
    cmp r4, #0x2
    bne L_02023bf0
    ldr r0, =data_0213d440
    ldr r2, =0x76d
    add r1, r0, #0x28
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r5, r2
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r3, sp, #0x3c
    ldr r0, =data_020f8bb8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020f8bc4
    add r3, sp, #0x48
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020f8bdc
    add r3, sp, #0x54
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    ldr r0, =data_020f8b88
    add r3, sp, #0x60
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    mov r0, r5
    bl func_02057ddc
    mov r0, r5
    bl func_020573a0
    mov r2, r0
    mov r0, r5
    mov r1, #0x9
    bl func_02057c18
    mov r1, r0
    mov r0, r5
    ldr r3, [r0, #0x0]
    mov r2, #0x2
    ldr r3, [r3, #0x1a0]
    blx r3
    mov r0, r5
    mov r1, #0xc8
    bl func_02001c78
    b L_02023c04
L_02023bf0:
    cmp r4, #0x3
    bne L_02023c04
    bl func_02057ddc
    mov r0, r5
    bl func_02058114
L_02023c04:
    mov r0, r5
    mov r1, r4
    bl func_02033790
    mov r0, #0x0
    str r0, [r5, #0x780]
    add sp, sp, #0x6c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
