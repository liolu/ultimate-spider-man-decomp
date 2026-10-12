#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028cfc();
extern void func_02053810();
extern void func_020539f4();
extern void func_02053c08();
extern void r2();
// clang-format off
asm void func_02054634(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    ldr r2, [r0, #0x0]
    mov r5, r1
    ldr r2, [r2, #0x94]
    mov r6, r0
    blx r2
    mov r0, r5
    ldr r2, [r0, #0x0]
    add r1, r6, #0x74
    ldr r2, [r2, #0x40]
    blx r2
    movs r4, r0
    beq L_020546e4
    add r1, r6, #0x1c
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
    ldr r0, [r6, #0x1d0]
    cmp r0, #0x1
    bne L_020546dc
    ldr r1, [r5, #0x28]
    mov r0, r6
    bl func_02053810
    cmp r0, #0x0
    beq L_020546dc
    mov r1, r5
    add r0, r6, #0x1fc
    bl func_02028cfc
    ldr ip, [r5, #0x4c]
    ldr r3, [r5, #0x50]
    add r1, sp, #0x0
    str ip, [sp, #0x8]
    str r3, [sp, #0xc]
    ldrh r2, [r5, #0x3a]
    mov r0, r6
    sub r2, r3, r2, lsr #0x1
    str r2, [sp, #0xc]
    str ip, [sp, #0x0]
    str r2, [sp, #0x4]
    bl func_020539f4
    b L_020546e4
L_020546dc:
    mov r0, r6
    bl func_02053c08
L_020546e4:
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
