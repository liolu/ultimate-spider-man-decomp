#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02063350();
extern void func_02063360();
// clang-format off
asm void func_02063a74(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x1c
    mov r4, r0
    add r7, r4, #0x340
    add r6, r4, #0x34c
    add r5, r4, #0x358
    mov r8, #0x0
L_02063a90:
    mov r0, r7
    bl func_02063360
    mov r0, r6
    bl func_02063360
    mov r0, r5
    bl func_02063350
    add r8, r8, #0x1
    cmp r8, #0x2
    add r7, r7, #0x128
    add r6, r6, #0x128
    add r5, r5, #0x128
    blt L_02063a90
    mov r6, r4
    mov r0, #0x0
    mov lr, r0
    mov r3, r0
    mov r2, r0
    mov r1, r0
    mov r11, r0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    str r0, [sp, #0x8]
    str r0, [sp, #0xc]
    str r0, [sp, #0x10]
    str r0, [sp, #0x14]
    mov ip, #0x1
    str r0, [sp, #0x18]
L_02063afc:
    ldrb r5, [r4, #0x4d7]
    cmp r5, #0x0
    beq L_02063bdc
    ldr r8, [r6, #0xe8]
    mvn r5, #0x80000000
    cmp r8, r5
    beq L_02063bdc
    ldr r5, [r4, #0x4b8]
    ldr r10, [r4, #0x4c0]
    subs r9, r8, r5
    rsbmi r9, r9, #0x0
    add r10, r10, r10, lsr #0x1f
    ldrb r7, [r6, #0xf0]
    cmp r9, r10, asr #0x1
    bgt L_02063b4c
    ldrb r5, [r4, #0x4b4]
    cmp r7, r5
    moveq r5, lr
    movne r5, ip
    b L_02063b68
L_02063b4c:
    cmp r8, r5
    movlt r7, ip
    ldrb r5, [r4, #0x4b4]
    movge r7, r3
    cmp r5, r7
    moveq r5, r2
    movne r5, ip
L_02063b68:
    ldr r7, [r4, #0x4b8]
    cmp r5, #0x0
    sub r8, r8, r7
    moveq r9, ip
    ldrb r7, [r4, #0x4b4]
    movne r9, r1
    cmp r9, r7
    mvneq r7, #0x0
    muleq r7, r8, r7
    moveq r8, r7
    mov r7, #0x128
    mla r7, r5, r7, r4
    cmp r8, #0x0
    ldr r5, [r7, #0x340]
    movle r8, r11
    cmp r8, r5
    bge L_02063bdc
    ldr r5, [r6, #0xec]
    mvn r9, #0x80000000
    cmp r5, r9
    beq L_02063bcc
    ldr r9, [r4, #0x4bc]
    subs r5, r5, r9
    rsbmi r5, r5, #0x0
    str r5, [r7, #0x344]
L_02063bcc:
    str r8, [r7, #0x340]
    add r7, r7, #0x348
    ldrb r5, [r6, #0xf0]
    swpb r5, r5, [r7]
L_02063bdc:
    ldrb r5, [r4, #0x4d8]
    cmp r5, #0x0
    beq L_02063cbc
    ldr r8, [r6, #0xf4]
    mvn r5, #0x80000000
    cmp r8, r5
    beq L_02063cbc
    ldr r5, [r4, #0x4b8]
    ldr r10, [r4, #0x4c0]
    subs r9, r8, r5
    rsbmi r9, r9, #0x0
    add r10, r10, r10, lsr #0x1f
    ldrb r7, [r6, #0xfc]
    cmp r9, r10, asr #0x1
    bgt L_02063c2c
    ldrb r5, [r4, #0x4b4]
    cmp r7, r5
    ldreq r5, [sp, #0x0]
    movne r5, ip
    b L_02063c48
L_02063c2c:
    cmp r8, r5
    movlt r7, ip
    ldrb r5, [r4, #0x4b4]
    ldrge r7, [sp, #0x4]
    cmp r5, r7
    ldreq r5, [sp, #0x8]
    movne r5, ip
L_02063c48:
    ldr r7, [r4, #0x4b8]
    cmp r5, #0x0
    sub r8, r8, r7
    moveq r9, ip
    ldrb r7, [r4, #0x4b4]
    ldrne r9, [sp, #0xc]
    cmp r9, r7
    mvneq r7, #0x0
    muleq r7, r8, r7
    moveq r8, r7
    mov r7, #0x128
    mla r7, r5, r7, r4
    cmp r8, #0x0
    ldrle r8, [sp, #0x10]
    ldr r5, [r7, #0x34c]
    cmp r8, r5
    bge L_02063cbc
    ldr r5, [r6, #0xf8]
    mvn r9, #0x80000000
    cmp r5, r9
    beq L_02063cac
    ldr r9, [r4, #0x4bc]
    subs r5, r5, r9
    rsbmi r5, r5, #0x0
    str r5, [r7, #0x350]
L_02063cac:
    str r8, [r7, #0x34c]
    add r7, r7, #0x354
    ldrb r5, [r6, #0xfc]
    swpb r5, r5, [r7]
L_02063cbc:
    ldrb r5, [r4, #0x4d9]
    cmp r5, #0x0
    beq L_02063d5c
    ldr r7, [r6, #0x100]
    mvn r5, #0x80000000
    cmp r7, r5
    beq L_02063d5c
    ldr r5, [r4, #0x4b8]
    cmp r7, r5
    movlt r8, ip
    ldrb r5, [r4, #0x4b4]
    ldrge r8, [sp, #0x14]
    cmp r5, r8
    ldreq r5, [sp, #0x18]
    ldr r8, [r4, #0x4b8]
    movne r5, ip
    subs r8, r7, r8
    mov r7, #0x128
    mla r7, r5, r7, r4
    ldr r5, [r7, #0x358]
    rsbmi r8, r8, #0x0
    cmp r8, r5
    bge L_02063d5c
    ldr r5, [r6, #0x104]
    mvn r9, #0x80000000
    cmp r5, r9
    beq L_02063d38
    ldr r9, [r4, #0x4bc]
    subs r5, r5, r9
    rsbmi r5, r5, #0x0
    str r5, [r7, #0x35c]
L_02063d38:
    str r8, [r7, #0x358]
    ldr r8, [r6, #0x108]
    ldr r5, [r4, #0x4bc]
    sub r5, r8, r5
    str r5, [r7, #0x360]
    ldr r8, [r6, #0x10c]
    ldr r5, [r4, #0x4bc]
    sub r5, r8, r5
    str r5, [r7, #0x364]
L_02063d5c:
    add r6, r6, #0x128
    add r0, r0, #0x1
    cmp r0, #0x2
    blt L_02063afc
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
