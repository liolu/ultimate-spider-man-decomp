#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02093ca4();
extern char data_02150c20[];
// clang-format off
asm void func_020869ac(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    mov r2, #0x0
    str r2, [r4, #0x20]
    str r2, [r4, #0x24]
    str r2, [r4, #0x48]
    str r2, [r4, #0x4c]
    add r1, r4, #0x52
    swpb r0, r2, [r1]
    add r1, r4, #0x53
    swpb r0, r2, [r1]
    bl func_02093ca4
    strh r0, [r4, #0x50]
    ldr r1, =data_02150c20
    mov r0, r4
    str r4, [r1, #0x0]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
