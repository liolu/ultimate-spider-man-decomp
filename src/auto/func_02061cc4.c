#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02009120();
extern void func_02009184();
extern void func_020094b0();
extern void func_02028dbc();
extern void func_02059c18();
extern void func_020621d8();
extern void r1();
extern void r2();
extern char data_020d4178[];
extern char data_0211907c[];
// clang-format off
asm void func_02061cc4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, r2
    bl func_020094b0
    ldr r1, =data_0211907c
    add r0, r5, #0x1d4
    str r1, [r5, #0x0]
    mov r3, #0x2
    mov r1, #0x64
    mvn r2, #0x80000000
    str r3, [r5, #0x1d0]
    bl func_02059c18
    add r0, r5, #0x1fc
    bl func_02028dbc
    mov r2, #0x0
    ldr r0, =0x225
    ldr r1, =0x226
    add ip, r5, r0
    add lr, r5, r1
    str r2, [r5, #0x204]
    mov r0, #0x1
    add r1, r5, #0x210
    swpb r0, r0, [r1]
    add r3, r5, #0x224
    ldr r6, [r4, #0x0]
    ldr r1, [r4, #0x4]
    mov r0, r5
    str r6, [r5, #0x214]
    str r1, [r5, #0x218]
    str r2, [r5, #0x21c]
    str r2, [r5, #0x220]
    swpb r1, r2, [r3]
    ldr r1, =data_020d4178
    swpb r3, r2, [ip]
    swpb r2, r2, [lr]
    bl func_01ff9acc
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r1, #0x1
    ldr r0, =0x15e
    ldr r3, =0x15f
    add r2, r5, r0
    swpb r0, r1, [r2]
    add r2, r5, r3
    swpb r0, r1, [r2]
    add r2, r5, #0x15c
    swpb r0, r1, [r2]
    mov r0, r5
    ldr r2, [r5, #0xbc]
    add r2, r2, #0xd9
    swpb r1, r1, [r2]
    bl func_020621d8
    add r3, r5, #0x1e
    ldrb r2, [r3, #0x0]
    mov r0, r5
    mov r1, #0x0
    bic r2, r2, #0x2
    swpb r2, r2, [r3]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x8c]
    blx r2
    mov r0, r5
    mov r1, r4
    mov r2, #0x1
    bl func_02009184
    mov r1, r4
    mov r0, r5
    mov r2, #0x1
    bl func_02009120
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
