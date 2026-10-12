#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020092a0();
extern void func_02028c34();
extern void func_02059a78();
extern void r1();
// clang-format off
asm void func_02061b70(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x6c]
    blx r1
    ldr r0, [r4, #0x1d0]
    cmp r0, #0x2
    beq L_02061b9c
    mov r0, r4
    bl func_020092a0
L_02061b9c:
    ldr r0, [r4, #0x200]
    cmp r0, #0x0
    beq L_02061bdc
    add r0, r4, #0x1d4
    bl func_02059a78
    ldr r2, [r0, #0x0]
    ldr r3, [r0, #0x4]
    add r1, sp, #0x0
    str r3, [sp, #0x4]
    str r2, [sp, #0x0]
    ldr r2, [r4, #0x200]
    add r0, r4, #0x1fc
    ldrh r2, [r2, #0x3a]
    add r2, r3, r2, lsr #0x1
    str r2, [sp, #0x4]
    bl func_02028c34
L_02061bdc:
    add r1, r4, #0x1c
    ldrb r0, [r1, #0x0]
    bic r0, r0, #0x10
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
