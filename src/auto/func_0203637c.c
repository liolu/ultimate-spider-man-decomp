#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern char data_021029e0[];
extern char data_021029ec[];
extern char data_02102a04[];
extern char data_02102a10[];
extern char data_0213d479[];
// clang-format off
asm void func_0203637c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x30
    ldr r1, =data_021029ec
    mov r4, r0
    add r3, sp, #0x0
    ldmia r1, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x240]
    mov r0, r3
    add r1, r1, #0xb0
    str r1, [sp, #0x8]
    bl func_0202f5f0
    ldr r0, =data_02102a04
    add r3, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x240]
    mov r0, r3
    add r1, r1, #0xb8
    str r1, [sp, #0x14]
    bl func_0202f5f0
    ldr r0, =data_021029e0
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x240]
    mov r0, r3
    add r1, r1, #0xc0
    str r1, [sp, #0x20]
    bl func_0202f5f0
    ldr r0, =data_02102a10
    add r3, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r1, [r4, #0x240]
    mov r0, r3
    sub r1, r1, #0x10
    str r1, [sp, #0x28]
    bl func_0202f5f0
    ldr r0, [r4, #0x240]
    mov r2, #0x1
    sub r1, r0, #0x4a
    ldr r0, =data_0213d479
    add r1, r0, r1
    swpb r0, r2, [r1]
    add sp, sp, #0x30
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
