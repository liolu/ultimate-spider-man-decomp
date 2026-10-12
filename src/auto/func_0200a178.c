#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02009fa8();
extern void r1();
// clang-format off
asm void func_0200a178(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x28]
    blx r1
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r1, [r4, #0x4]
    ldr r0, [r4, #0x10]
    ldr r1, [r1, #0xbc]
    cmp r0, #0x1
    ldr r1, [r1, #0xcc]
    bne L_0200a1f4
    add r2, r4, #0xc
    ldr r0, [r2, #0x0]
    add r0, r0, #0x1
    str r0, [r2, #0x0]
    ldr r2, [r4, #0xc]
    cmp r2, #0x4
    moveq r0, #0x2
    streq r0, [r4, #0x10]
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, [r4, #0x8]
    bl func_02009fa8
    add r1, r4, #0x14
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0200a1f4:
    cmp r0, #0x2
    ldmnefd sp!, {r4, lr}
    bxne lr
    add r2, r4, #0xc
    ldr r0, [r2, #0x0]
    sub r0, r0, #0x1
    str r0, [r2, #0x0]
    ldr r2, [r4, #0xc]
    cmp r2, #0x0
    movlt r0, #0x1
    strlt r0, [r4, #0x10]
    ldmltfd sp!, {r4, lr}
    bxlt lr
    ldr r0, [r4, #0x8]
    bl func_02009fa8
    add r1, r4, #0x14
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
