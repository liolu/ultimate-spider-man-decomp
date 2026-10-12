#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02018d84();
extern void func_0207c67c();
extern void func_0207c8b4();
extern char data_0213b744[];
extern char data_0213bf60[];
// clang-format off
asm void func_02020554(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r1, #0x0
    mov r4, r0
    bl func_0207c67c
    ldr r2, =data_0213b744
    mov r1, #0x0
    str r0, [r2, #0x4]
    mov r0, r4
    bl func_0207c8b4
    ldr r1, =0x24924925
    ldr r4, =data_0213b744
    umull r1, r2, r0, r1
    sub r0, r0, r2
    add r2, r2, r0, lsr #0x1
    mov r2, r2, lsr #0x5
    mov r10, #0x0
    str r2, [r4, #0x0]
    cmp r2, #0x0
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bxle lr
    ldr r7, =data_0213bf60
    mov r8, r10
    mov r5, r10
    mov r6, #0x1
L_020205b4:
    ldr r3, [r4, #0x4]
    add r1, r7, #0x1
    swpb r0, r6, [r7]
    add r2, r7, #0x2
    swpb r0, r5, [r1]
    add r9, r3, r8
    swpb r0, r5, [r2]
    ldr r0, [r9, #0x10]
    bl func_02018d84
    str r0, [r7, #0x4]
    ldr r0, [r9, #0x14]
    bl func_02018d84
    rsb r0, r0, #0x0
    str r0, [r7, #0x8]
    ldr r0, [r4, #0x0]
    add r10, r10, #0x1
    cmp r10, r0
    add r7, r7, #0x14
    add r8, r8, #0x38
    blt L_020205b4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
