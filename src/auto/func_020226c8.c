#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffaeb4();
extern void func_02001f44();
extern void func_0202718c();
extern void func_02047160();
extern void func_020479dc();
extern void r2();
// clang-format off
asm void func_020226c8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r2, [r0, #0x0]
    mov r6, r0
    ldr r2, [r2, #0x148]
    mov r5, r1
    blx r2
    ldr r1, [r6, #0x180]
    bl func_0202718c
    ldr r0, [r0, #0x1c]
    ldr r1, [r6, #0x718]
    ldr r2, [r0, #0x0]
    mov r0, #0x58
    mla r4, r1, r0, r2
    bl func_01ffaeb4
    ldr r1, [r0, #0x4c]
    ldr r0, [r6, #0x4c]
    cmp r1, r0
    movlt r1, #0x1
    ldrb r0, [r6, #0x15e]
    movge r1, #0x0
    cmp r0, r1
    moveq r1, #0x1
    ldr r0, [r6, #0x180]
    movne r1, #0x0
    cmp r0, #0x54
    beq L_0202277c
    cmp r1, #0x0
    beq L_02022758
    mov r0, r6
    mov r1, r5
    bl func_02001f44
    bl func_020479dc
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02022758:
    mov r0, r6
    mov r1, r5
    bl func_02001f44
    add r1, r4, #0x34
    add r2, r4, #0x40
    bl func_02047160
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_0202277c:
    cmp r1, #0x0
    bne L_020227d4
    mov r0, r6
    mov r1, r5
    bl func_02001f44
    bl func_020479dc
    mov r0, r6
    mov r1, r5
    bl func_02001f44
    ldrb r4, [r0, #0x15f]
    mov r0, r6
    mov r1, r5
    bl func_02001f44
    ldr r1, =0x15f
    cmp r4, #0x0
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r0, r1
    swpb r0, r2, [r1]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020227d4:
    add r0, r4, #0x34
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr r2, [sp, #0x0]
    mvn r0, #0x0
    mul r3, r2, r0
    ldr r1, [sp, #0x8]
    str r3, [sp, #0x0]
    mul r2, r1, r0
    mov r0, r6
    mov r1, r5
    str r2, [sp, #0x8]
    bl func_02001f44
    add r1, sp, #0x0
    add r2, r4, #0x40
    bl func_02047160
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
