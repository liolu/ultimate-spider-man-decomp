#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02009120();
extern void func_02009184();
extern void func_020094b0();
extern void func_02028dbc();
extern void func_02053fb8();
extern void func_02059c18();
extern void r1();
extern char data_020cf160[];
extern char data_02116ca4[];
// clang-format off
asm void func_02054a08(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r2
    bl func_020094b0
    ldr r3, =data_02116ca4
    add r0, r5, #0x1d4
    mov r1, #0x8c
    mvn r2, #0x80000000
    str r3, [r5, #0x0]
    bl func_02059c18
    add r0, r5, #0x1fc
    bl func_02028dbc
    mov r0, #0x0
    str r0, [r5, #0x204]
    str r0, [r5, #0x210]
    add r1, r5, #0x1c
    ldrb r0, [r1, #0x0]
    add r2, r5, #0x15c
    mov ip, #0x1
    orr r0, r0, #0x20
    swpb r0, r0, [r1]
    ldr r1, =data_020cf160
    swpb r0, ip, [r2]
    mov r0, r5
    ldr r2, [r5, #0xbc]
    add r3, r2, #0xd9
    swpb r2, ip, [r3]
    bl func_01ff9acc
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r2, #0x1
    ldr r0, =0x15e
    ldr r3, =0x15f
    add r1, r5, r0
    swpb r0, r2, [r1]
    add r1, r5, r3
    swpb r0, r2, [r1]
    mov r0, r5
    mov r1, r4
    bl func_02009184
    mov r1, r4
    mov r0, r5
    mov r2, #0x1
    bl func_02009120
    mov r0, #0x1
    str r0, [r5, #0x1c8]
    mov r0, r5
    bl func_02053fb8
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
