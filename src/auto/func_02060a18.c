#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205f530();
extern void func_020611fc();
extern void func_02061950();
extern void r1();
// clang-format off
asm void func_02060a18(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =0x778
    mov r4, r0
    add r0, r4, r1
    bl func_020611fc
    ldr r0, =0x778
    add r0, r4, r0
    bl func_02061950
    ldr r0, =0x9c8
    mov r1, #0x0
    add r0, r4, r0
    str r1, [r4, #0x9ec]
    bl func_0205f530
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x204]
    blx r1
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    add r1, r4, #0x1d
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x20
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
