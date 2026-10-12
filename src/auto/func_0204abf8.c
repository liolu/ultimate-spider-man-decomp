#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a47c();
extern void func_0202f66c();
extern void func_0204ab5c();
extern void func_0204ad48();
extern void func_0204f6f8();
extern void func_02064fc8();
// clang-format off
asm void func_0204abf8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldr r0, [r6, #0xbc]
    mov r4, r1
    cmp r0, #0x0
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    add r0, r4, #0x3c
    add r1, r6, #0x3c
    bl func_0200a47c
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    mov r0, r6
    mov r1, r4
    bl func_0204ab5c
    cmp r0, #0x0
    ldmeqfd sp!, {r4, r5, r6, lr}
    bxeq lr
    ldr r0, [r6, #0x24]
    bl func_0204ad48
    mov r4, r0
    mov r0, #0x28
    bl func_02064fc8
    movs r5, r0
    beq L_0204ac78
    bl func_0202f66c
    mov r2, r0
    mov r0, r5
    mov r1, r4
    bl func_0204f6f8
    mov r5, r0
L_0204ac78:
    str r5, [r6, #0xbc]
    add r1, r6, #0x1c
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x20
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
