#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200fb00();
extern void func_02028e48();
extern void func_0204a770();
extern void func_0204a7b0();
extern void func_0204a8f4();
extern void func_0204a910();
// clang-format off
asm void func_02028e88(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    add r2, r4, #0x4
    mov r0, #0x0
    swpb r0, r0, [r2]
    add r0, r4, #0x10
    str r0, [r4, #0x8]
    add r0, r4, #0x1c
    str r0, [r4, #0xc]
    mov r0, #0x1000
    str r1, [r4, #0x0]
    bl func_0200fb00
    mov r0, r4
    bl func_02028e48
    ldr r0, [r4, #0x8]
    bl func_0204a8f4
    cmp r0, #0x0
    beq L_02028ed8
    ldr r0, [r4, #0x8]
    bl func_0204a910
L_02028ed8:
    ldr r0, [r4, #0x0]
    mov r6, #0x0
    cmp r0, #0x0
    ble L_02028f20
    mov r5, r6
L_02028eec:
    ldr r0, [r4, #0xc]
    add r0, r0, r5
    bl func_0204a770
    cmp r0, #0x0
    beq L_02028f0c
    ldr r0, [r4, #0xc]
    add r0, r0, r5
    bl func_0204a7b0
L_02028f0c:
    ldr r0, [r4, #0x0]
    add r6, r6, #0x1
    cmp r6, r0
    add r5, r5, #0x1c
    blt L_02028eec
L_02028f20:
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
