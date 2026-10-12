#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204ab40();
extern void func_0204f800();
extern void func_0204f810();
extern void func_0204fe54();
extern void func_0204ffe4();
extern void r2();
extern char data_02116548[];
extern char data_02116558[];
extern char data_0214604c[];
extern char data_02146050[];
// clang-format off
asm void func_0205047c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x1c
    mov r6, r0
    mov r7, r1
    mov r5, r2
    mov r4, r3
    bl func_0204ab40
    ldr r0, =data_02116558
    add r1, r6, #0x14
    str r0, [r6, #0x0]
    str r7, [r6, #0xc]
    swpb r0, r4, [r1]
    ldrb r1, [r6, #0x14]
    ldr r0, [r6, #0xc]
    bl func_0204ffe4
    ldrb r0, [r6, #0x14]
    cmp r0, #0x0
    ldrne r0, =data_02146050
    ldrne r0, [r0, #0x0]
    strne r0, [r6, #0x10]
    ldreq r0, =data_0214604c
    ldreq r0, [r0, #0x0]
    streq r0, [r6, #0x10]
    ldr r0, =data_02116548
    ldr r1, [r0, #0x0]
    ldr r0, [r0, #0x4]
    str r1, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r0, [r6, #0x10]
    bl func_0204f800
    mov r4, r0
    ldr r0, [r6, #0x10]
    bl func_0204f810
    ldr r3, [r0, #0x0]
    ldr r2, [r4, #0x0]
    ldr r1, [sp, #0x0]
    sub ip, r3, r2
    str ip, [sp, #0x10]
    ldr r3, [r0, #0x4]
    ldr r2, [r4, #0x4]
    ldr r0, [sp, #0x4]
    sub r2, r3, r2
    str ip, [sp, #0x8]
    add r1, ip, r1
    str r2, [sp, #0xc]
    add r0, r2, r0
    str r0, [sp, #0xc]
    str r2, [sp, #0x14]
    str r1, [sp, #0x8]
    str r1, [r6, #0x4]
    ldr r1, [sp, #0xc]
    mov r0, r6
    str r1, [r6, #0x8]
    ldr r2, [r0, #0x0]
    mov r1, r5
    ldr r2, [r2, #0x20]
    blx r2
    ldr r0, [r6, #0x10]
    bl func_0204fe54
    mov r0, r6
    add sp, sp, #0x1c
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
