#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02026a7c();
extern void func_0202f5f0();
extern void func_02046fcc();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_02055fe4();
extern void func_02056ad0();
extern char data_020d4ba8[];
extern char data_0213d440[];
extern char data_02143e44[];
// clang-format off
asm void func_02004838(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x18
    mov r4, r0
    ldrb r0, [r4, #0x1e9]
    cmp r0, #0x0
    addne sp, sp, #0x18
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r1, =0x1e9
    ldr r0, =data_0213d440
    add ip, r4, r1
    mov r2, #0x1
    mov r1, #0x8
    swpb r3, r2, [ip]
    bl func_02026a7c
    ldr r0, =data_0213d440
    mov r1, #0x9
    mov r2, #0x1
    bl func_02026a7c
    bl func_02055fe4
    ldr r0, =0x1f1
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    mvn r0, #0x0
    ldr r1, [r4, #0x184]
    cmp r1, r0
    beq L_020048e0
    ldr r0, [r4, #0x188]
    cmp r0, #0x0
    beq L_020048e0
    str r0, [sp, #0x4]
    ldr r1, [r4, #0x184]
    add r0, sp, #0x8
    str r1, [sp, #0x0]
    bl func_02056ad0
    add r1, sp, #0x0
    mov r2, #0x3
    add r0, sp, #0x8
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    bl func_0202f5f0
L_020048e0:
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    addeq sp, sp, #0x18
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    bl func_0204eb30
    ldr r1, =data_020d4ba8
    bl func_0204eab0
    add sp, sp, #0x18
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
