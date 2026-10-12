#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204ab40();
extern char data_02116dcc[];
extern char data_02143e7c[];
// clang-format off
asm void func_02055758(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r0
    mov r4, r1
    mov r6, r2
    bl func_0204ab40
    ldr r0, =data_02116dcc
    ldr r1, =data_02143e7c
    str r0, [r5, #0x0]
    ldr r2, [r6, #0x0]
    ldr r0, [r6, #0x4]
    mov ip, #0x0
    str r2, [r5, #0x4]
    str r0, [r5, #0x8]
    ldr r0, [r1, #0x0]
    add r2, r5, #0x24
    str r0, [r5, #0xc]
    ldr r0, [r1, #0x4]
    add r3, r5, #0x25
    str r0, [r5, #0x10]
    ldr lr, [r1, #0x0]
    mov r0, r5
    str lr, [r5, #0x14]
    ldr r1, [r1, #0x4]
    str r1, [r5, #0x18]
    str ip, [r5, #0x1c]
    str r4, [r5, #0x20]
    swpb r1, ip, [r2]
    swpb r1, ip, [r3]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
