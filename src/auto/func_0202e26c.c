#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204ab40();
extern char data_021016e8[];
// clang-format off
asm void func_0202e26c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0204ab40
    ldr r0, =data_021016e8
    add r1, r4, #0x4
    str r0, [r4, #0x0]
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0x5
    swpb r0, r2, [r1]
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
