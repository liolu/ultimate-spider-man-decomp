#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f64c();
extern void func_02062fc0();
extern char data_020f7424[];
extern char data_0213b2fc[];
// clang-format off
asm void func_0200f5fc(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    ldrb r3, [sp, #0x2c]
    mov r2, #0x0
    mov r4, r1
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [sp, #0x28]
    ldr r1, [r4, #0x0]
    add r2, sp, #0x20
    mov r5, r0
    bl func_02062fc0
    ldr r1, =data_020f7424
    mov r0, #0x0
    str r1, [r5, #0x0]
    str r4, [r5, #0x178]
    str r0, [r5, #0x17c]
    str r0, [r5, #0x180]
    ldr r0, [r5, #0xbc]
    mov r2, #0x1
    add r1, r0, #0xda
    swpb r0, r2, [r1]
    ldr r1, [r4, #0x8]
    add r0, r4, #0x10
    str r1, [r5, #0x74]
    ldr r1, [r4, #0xc]
    add r3, r5, #0x7c
    str r1, [r5, #0x78]
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r4, r4, #0x1c
    add r3, r5, #0x88
    ldmia r4, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    add r2, r5, #0x1c
    ldrb r1, [r2, #0x0]
    mov r0, r5
    orr r1, r1, #0x20
    swpb r1, r1, [r2]
    bl func_0202f64c
    ldr r1, =data_0213b2fc
    mov r0, r5
    ldr r3, [r1, #0x0]
    add r2, r3, #0x1
    str r2, [r1, #0x0]
    str r3, [r5, #0x184]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
