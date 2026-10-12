#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02045fcc();
extern void func_02060064();
extern char data_020d4164[];
extern char data_020d416c[];
extern char data_02118b70[];
// clang-format off
asm void func_0206010c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldrb ip, [sp, #0x10]
    mov r4, r0
    str ip, [sp, #0x0]
    bl func_02045fcc
    ldr r0, =data_02118b70
    add r2, r4, #0x1c
    str r0, [r4, #0x0]
    ldrb r0, [r2, #0x0]
    ldr r3, =data_020d4164
    add r1, r4, #0x100
    orr r0, r0, #0x20
    swpb r0, r0, [r2]
    ldr r2, =data_020d416c
    ldrsh ip, [r3, #0x0]
    mov r0, r4
    strh ip, [r1, #0xb4]
    ldrsh ip, [r3, #0x2]
    strh ip, [r1, #0xb6]
    ldrh ip, [r3, #0x4]
    strh ip, [r1, #0xb8]
    ldrh r3, [r3, #0x6]
    strh r3, [r1, #0xba]
    ldrsh r3, [r2, #0x0]
    strh r3, [r1, #0xbc]
    ldrsh r3, [r2, #0x2]
    strh r3, [r1, #0xbe]
    ldrh r3, [r2, #0x4]
    strh r3, [r1, #0xc0]
    ldrh r2, [r2, #0x6]
    strh r2, [r1, #0xc2]
    bl func_02060064
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
