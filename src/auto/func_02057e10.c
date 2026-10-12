#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02065730();
extern void func_0207c284();
extern char data_02118098[];
extern char data_021180a8[];
extern char data_021180b8[];
extern char data_021180c8[];
extern char data_0214876c[];
// clang-format off
asm void func_02057e10(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r1, =0x704
    mov r2, #0x1
    add r1, r0, r1
    swpb r0, r2, [r1]
    bl func_02065730
    ldr r3, =0x2aaaaaab
    mov r1, r0, lsr #0x1f
    smull r2, ip, r3, r0
    mov ip, ip, asr #0x1
    ldr r3, =0xc
    add ip, r1, ip
    smull r1, r2, r3, ip
    sub ip, r0, r1
    cmp ip, #0x3
    addls pc, pc, ip, lsl #0x2
    b L_02057eec
L_02057e58:
    b L_02057e68
    b L_02057e8c
    b L_02057eb0
    b L_02057ed4
L_02057e68:
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_02118098
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_02057e8c:
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_021180a8
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_02057eb0:
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_021180b8
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
L_02057ed4:
    mov r2, #0x0
    ldr r0, =data_0214876c
    ldr r1, =data_021180c8
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
L_02057eec:
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
