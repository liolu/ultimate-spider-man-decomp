#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014a88();
extern void func_02014b00();
extern void func_0202f310();
extern void func_0202f5f0();
extern void func_02055e80();
extern void func_02065678();
extern char data_020f885c[];
extern char data_020f88a8[];
extern char data_0213b728[];
extern char data_0213d440[];
extern char data_ov000_02156014[];
// clang-format off
asm void func_02014bd0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    bl func_02014a88
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r0, [r4, #0x2c]
    cmp r0, #0x0
    bne L_02014c30
    ldr r0, [r4, #0x28]
    cmp r0, #0x0
    beq L_02014c40
    add r1, r4, #0x28
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x28]
    cmp r0, #0x0
    bgt L_02014c40
    mov r0, r4
    bl func_02014b00
    b L_02014c40
L_02014c30:
    add r1, r4, #0x2c
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
L_02014c40:
    mov r0, r4
    bl func_0202f310
    ldr r2, [r4, #0x1c]
    cmp r2, #0x0
    beq L_02014cb0
    ldr r1, [r4, #0x18]
    ldr r0, =data_0213d440
    sub r5, r2, r1
    str r5, [r0, #0x30]
    bl func_02055e80
    cmp r5, #0x0
    bgt L_02014cb0
    ldr r0, =data_0213b728
    ldr r1, =data_020f88a8
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_020f885c
    ldr r3, =data_0213b728
    ldr lr, =data_ov000_02156014
    add ip, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, ip
    str lr, [r3, #0x14]
    bl func_0202f5f0
L_02014cb0:
    ldr r0, =data_0213d440
    ldrb r0, [r0, #0x28]
    cmp r0, #0x0
    addeq r1, r4, #0x18
    ldreq r0, [r1, #0x0]
    addeq r0, r0, #0x1
    streq r0, [r1, #0x0]
    ldr r1, [r4, #0x18]
    ldr r0, =data_0213d440
    str r1, [r0, #0x2c]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
