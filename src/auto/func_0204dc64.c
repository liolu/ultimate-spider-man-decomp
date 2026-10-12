#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02031570();
extern void func_0204b628();
extern void func_0204d510();
extern void func_0204d58c();
extern void func_0204e0c4();
extern void func_0204e0c8();
extern void func_0207c284();
extern void func_02085700();
extern void func_020857f8();
extern void r1();
extern char data_0214876c[];
// clang-format off
asm void func_0204dc64(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    ldr r0, [r4, #0xbc]
    bl func_020857f8
    cmp r0, #0x0
    beq L_0204dcbc
    ldr r0, [r4, #0xbc]
    mov r1, #0x3
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_0204dcbc
    ldr r0, [r4, #0x3a0]
    ldr r1, [r0, #0x10]
    cmp r1, #0x0
    beq L_0204dcbc
    mov r2, #0x0
    ldr r0, =data_0214876c
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
L_0204dcbc:
    ldr r0, [r4, #0x380]
    cmp r0, #0x0
    beq L_0204dd1c
    add r0, sp, #0x4
    mov r1, r4
    mov r2, #0x4
    mov r3, #0x1
    bl func_0204b628
    ldr r3, [r4, #0x380]
    ldr r1, [sp, #0x4]
    ldrh r0, [r3, #0x38]
    ldr r2, [sp, #0x8]
    sub r0, r1, r0, lsr #0x1
    str r0, [r3, #0x3c]
    ldr r0, [sp, #0x4]
    str r0, [r3, #0x4c]
    ldrh r0, [r3, #0x3a]
    sub r0, r2, r0
    str r0, [r3, #0x40]
    str r2, [r3, #0x50]
    ldr r0, [r4, #0x380]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0204dd1c:
    ldr r0, [r4, #0x388]
    cmp r0, #0x0
    beq L_0204dd7c
    add r0, sp, #0xc
    mov r1, r4
    mov r2, #0x4
    mov r3, #0x0
    bl func_0204b628
    ldr r3, [r4, #0x388]
    ldr r1, [sp, #0xc]
    ldrh r0, [r3, #0x38]
    ldr r2, [sp, #0x10]
    sub r0, r1, r0, lsr #0x1
    str r0, [r3, #0x3c]
    ldr r0, [sp, #0xc]
    str r0, [r3, #0x4c]
    ldrh r0, [r3, #0x3a]
    sub r0, r2, r0
    str r0, [r3, #0x40]
    str r2, [r3, #0x50]
    ldr r0, [r4, #0x388]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0204dd7c:
    ldr r0, [r4, #0x38c]
    cmp r0, #0x0
    beq L_0204dda0
    add r1, r4, #0x4c
    bl func_02031570
    ldr r0, [r4, #0x38c]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0204dda0:
    ldr r0, [r4, #0x384]
    cmp r0, #0x0
    beq L_0204de00
    add r0, sp, #0x14
    mov r1, r4
    mov r2, #0x4
    mov r3, #0x1
    bl func_0204b628
    ldr r3, [r4, #0x384]
    ldr r1, [sp, #0x14]
    ldrh r0, [r3, #0x38]
    ldr r2, [sp, #0x18]
    sub r0, r1, r0, lsr #0x1
    str r0, [r3, #0x3c]
    ldr r0, [sp, #0x14]
    str r0, [r3, #0x4c]
    ldrh r0, [r3, #0x3a]
    sub r0, r2, r0
    str r0, [r3, #0x40]
    str r2, [r3, #0x50]
    ldr r0, [r4, #0x384]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0204de00:
    mov r0, r4
    bl func_0204e0c8
    ldr r0, [r4, #0x1f4]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    add r1, r4, #0x1e4
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r1, r4, #0x1c
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x1e8]
    cmp r1, #0x0
    ble L_0204de4c
    mov r0, r4
    sub r1, r1, #0x1
    bl func_0204d58c
L_0204de4c:
    ldr r1, [r4, #0x3a8]
    cmp r1, #0x0
    ble L_0204de64
    mov r0, r4
    sub r1, r1, #0x1
    bl func_0204d510
L_0204de64:
    ldr r0, [r4, #0x3a4]
    cmp r0, #0x0
    beq L_0204de7c
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_0204de7c:
    mov r0, r4
    bl func_0204e0c4
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
