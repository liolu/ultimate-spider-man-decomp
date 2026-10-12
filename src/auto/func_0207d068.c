#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fc8();
extern void func_02086078();
extern char data_020efa10[];
extern char data_0211c138[];
// clang-format off
asm void func_0207d068(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r2, =data_020efa10
    mov r4, r0
    ldr r0, =data_0211c138
    str r2, [r4, #0x0]
    str r0, [r4, #0x0]
    add r2, r4, #0x8
    mov r3, #0x1
    mov r0, #0xf4
    mov r5, r1
    swpb r1, r3, [r2]
    bl func_02064fc8
    cmp r0, #0x0
    beq L_0207d0ac
    mov r1, r5
    bl func_02086078
L_0207d0ac:
    str r0, [r4, #0x4]
    ldr r0, [r4, #0x4]
    mov r2, #0x1
    add r1, r0, #0xda
    swpb r0, r2, [r1]
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
