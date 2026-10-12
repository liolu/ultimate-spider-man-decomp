#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202e26c();
extern char data_0210179c[];
// clang-format off
asm void func_0202e6d8(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r1
    bl func_0202e26c
    ldr r1, =data_0210179c
    mov r0, #0x0
    str r1, [r5, #0x0]
    str r4, [r5, #0x8]
    str r0, [r5, #0xc]
    add r1, r5, #0x10
    swpb r0, r0, [r1]
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
