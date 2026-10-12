#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02055758();
extern void r2();
extern char data_020d9068[];
extern char data_0211af80[];
// clang-format off
asm void func_02070190(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r2
    ldr r2, =data_020d9068
    mov r5, r0
    mov r4, r3
    bl func_02055758
    ldr r0, =data_0211af80
    add r3, r5, #0x28
    str r0, [r5, #0x0]
    ldmia r6, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r0, =data_020d9068
    add r1, r5, #0x3c
    ldr r3, [r0, #0x0]
    ldr r0, [r0, #0x4]
    mov r2, #0x0
    str r3, [r5, #0x34]
    str r0, [r5, #0x38]
    swpb r0, r2, [r1]
    add r1, r5, #0x3d
    swpb r0, r2, [r1]
    add r1, r5, #0x3e
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r1, r4
    ldr r0, [r5, #0x20]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x18]
    blx r2
    mov r0, r5
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
