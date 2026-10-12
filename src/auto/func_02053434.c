#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014de0();
extern void func_02024c20();
extern void func_02026b3c();
extern void func_0202f358();
extern void func_0204eb80();
extern void func_020556d8();
extern void func_02056a64();
extern void func_02064fc8();
extern char data_020cea8c[];
extern char data_02116a7c[];
extern char data_0213d440[];
extern char data_02150fcc[];
// clang-format off
asm void func_02053434(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r1
    mov r1, #0x3c
    mov r4, r0
    bl func_02014de0
    ldr r0, =data_02116a7c
    mov r1, #0x0
    str r0, [r4, #0x0]
    str r1, [r4, #0x38]
    str r5, [r4, #0x3c]
    add r2, r4, #0x40
    swpb r0, r1, [r2]
    add r2, r4, #0x68
    str r1, [r4, #0x4c]
    str r1, [r4, #0x50]
    swpb r0, r1, [r2]
    add r2, r4, #0x69
    mov r3, #0x1
    swpb r0, r3, [r2]
    add r2, r4, #0x6a
    swpb r0, r1, [r2]
    add r2, r4, #0x6b
    swpb r0, r3, [r2]
    str r1, [r4, #0x6c]
    str r1, [r4, #0x70]
    str r1, [r4, #0x74]
    mov r0, #0x40
    str r1, [r4, #0x78]
    bl func_02064fc8
    movs r1, r0
    beq L_020534c4
    ldr r1, =data_02150fcc
    mov r2, #0x0
    bl func_02024c20
    mov r1, r0
L_020534c4:
    ldr r2, =data_020cea8c
    add r0, r4, #0x7c
    bl func_020556d8
    ldr r0, =data_0213d440
    bl func_02026b3c
    bl func_0204eb80
    mov r0, #0x5c
    bl func_02064fc8
    cmp r0, #0x0
    beq L_020534f0
    bl func_02056a64
L_020534f0:
    str r0, [r4, #0x78]
    ldr r1, [r4, #0x78]
    mov r0, r4
    mov r2, #0x0
    bl func_0202f358
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
