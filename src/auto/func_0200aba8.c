#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020776a4();
extern void func_02077720();
extern void func_0207b214();
// clang-format off
asm void func_0200aba8(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldrb r1, [r4, #0xc4]
    ldrb r0, [r4, #0xc5]
    cmp r1, r0
    beq L_0200ac28
    bl func_02077720
    mov r5, r0
    ldr r6, [r5, #0x4]
    cmp r6, #0x0
    ldreq r0, [r5, #0x4]
    addeq r0, r5, r0, lsl #0x2
    ldreq r5, [r0, #0x8]
    beq L_0200ac00
    mov r1, #0x0
    bl func_020776a4
    ldr r1, [r5, #0x4]
    mov r0, r5
    add r2, r5, r1, lsl #0x2
    mov r1, r6
    ldr r5, [r2, #0x8]
    bl func_020776a4
L_0200ac00:
    cmp r5, #0x0
    beq L_0200ac28
    ldrb r0, [r4, #0xc4]
    cmp r0, #0x0
    ldrne r1, [r4, #0xbc]
    ldreq r1, [r4, #0xc0]
    cmp r1, #0x0
    beq L_0200ac28
    mov r0, r5
    bl func_0207b214
L_0200ac28:
    ldrb r0, [r4, #0xc4]
    add r1, r4, #0xc5
    add r2, r4, #0xc4
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r2]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
