#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028ba0();
extern void func_02028cc4();
extern char data_020d4138[];
// clang-format off
asm void func_0205e69c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x20
    ldr lr, =data_020d4138
    add ip, sp, #0x0
    mov r4, r0
    ldmia lr!, {r0, r1, r2, r3}
    stmia ip!, {r0, r1, r2, r3}
    ldmia lr, {r0, r1, r2, r3}
    stmia ip, {r0, r1, r2, r3}
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    beq L_0205e6f4
    ldr r0, [sp, #0x8]
    ldr r1, [sp, #0x10]
    cmp r0, #0x0
    rsblt r0, r0, #0x0
    rsb r0, r0, #0x0
    cmp r1, #0x0
    rsblt r1, r1, #0x0
    str r0, [sp, #0x8]
    rsb r0, r1, #0x0
    str r0, [sp, #0x10]
L_0205e6f4:
    ldr r0, =0x9dc
    add r1, sp, #0x0
    add r0, r4, r0
    bl func_02028ba0
    ldr r1, [r4, #0x9e0]
    ldr r0, =0x9dc
    add r2, r1, #0x1e
    ldrb r1, [r2, #0x0]
    add r0, r4, r0
    bic r1, r1, #0x1
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    bl func_02028cc4
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
