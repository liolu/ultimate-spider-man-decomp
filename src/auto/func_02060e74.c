#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207c284();
extern char data_0211913c[];
extern char data_0214876c[];
// clang-format off
asm void func_02060e74(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov r2, #0x0
    mov r4, r0
    ldr r0, =data_0214876c
    ldr r1, =data_0211913c
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    add r1, r4, #0x224
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
