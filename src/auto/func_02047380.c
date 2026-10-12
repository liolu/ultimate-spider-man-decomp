#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000ea8();
// clang-format off
asm void func_02047380(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0xa4]
    ldr r1, [r0, #0x10]
    ldr r3, [r0, #0x18]
    ldr r2, [r0, #0x14]
    add r0, r0, #0x4
    rsb r1, r1, #0x0
    rsb r3, r3, #0x0
    bl func_02000ea8
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
