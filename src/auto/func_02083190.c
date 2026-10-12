#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void r8();
// clang-format off
asm void func_02083190(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r10, r1
    cmp r10, #0x2
    mov r11, r0
    mov r9, r2
    mov r8, r3
    addlo sp, sp, #0x14
    ldmlofd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxlo lr
    mov r0, r10, lsr #0x1
    add r0, r0, #0x1
    str r0, [sp, #0x0]
    sub r0, r0, #0x1
    mla r0, r9, r0, r11
    sub r1, r10, #0x1
    str r0, [sp, #0x4]
    mla r0, r9, r1, r11
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x0]
    mvn r2, #0x0
    mul r1, r0, r9
    mul r0, r9, r2
    str r1, [sp, #0xc]
    str r0, [sp, #0x10]
L_020831f4:
    ldr r0, [sp, #0x0]
    cmp r0, #0x1
    bls L_02083228
    ldr r0, [sp, #0xc]
    sub r0, r0, r9
    str r0, [sp, #0xc]
    ldr r0, [sp, #0x0]
    sub r0, r0, #0x1
    str r0, [sp, #0x0]
    ldr r0, [sp, #0x4]
    sub r0, r0, r9
    str r0, [sp, #0x4]
    b L_0208327c
L_02083228:
    mov r2, r9
    ldr r4, [sp, #0x8]
    ldr r3, [sp, #0x4]
    cmp r9, #0x0
    beq L_0208325c
L_0208323c:
    ldrb r1, [r3, #0x0]
    ldrb r0, [r4, #0x0]
    subs r2, r2, #0x1
    swpb r0, r0, [r3]
    add r3, r3, #0x1
    swpb r0, r1, [r4]
    add r4, r4, #0x1
    bne L_0208323c
L_0208325c:
    sub r10, r10, #0x1
    cmp r10, #0x1
    addeq sp, sp, #0x14
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    ldr r0, [sp, #0x8]
    sub r0, r0, r9
    str r0, [sp, #0x8]
L_0208327c:
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    ldr r7, [sp, #0x0]
    add r1, r1, r0
    ldr r0, [sp, #0x0]
    add r5, r11, r1
    mov r0, r0, lsl #0x1
    cmp r0, r10
    bhi L_020831f4
L_020832a0:
    mov r7, r7, lsl #0x1
    sub r0, r7, #0x1
    mov r6, r5
    mla r5, r9, r0, r11
    cmp r7, r10
    bhs L_020832d4
    add r4, r5, r9
    mov r0, r5
    mov r1, r4
    blx r8
    cmp r0, #0x0
    movlt r5, r4
    addlt r7, r7, #0x1
L_020832d4:
    mov r0, r6
    mov r1, r5
    blx r8
    cmp r0, #0x0
    bge L_020831f4
    mov r2, r9
    mov r3, r5
    cmp r9, #0x0
    beq L_02083318
L_020832f8:
    ldrb r1, [r6, #0x0]
    ldrb r0, [r3, #0x0]
    subs r2, r2, #0x1
    swpb r0, r0, [r6]
    add r6, r6, #0x1
    swpb r0, r1, [r3]
    add r3, r3, #0x1
    bne L_020832f8
L_02083318:
    mov r0, r7, lsl #0x1
    cmp r0, r10
    bls L_020832a0
    b L_020831f4
}
// clang-format on
