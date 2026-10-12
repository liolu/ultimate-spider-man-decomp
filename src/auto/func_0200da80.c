#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02053434();
extern char data_020f0094[];
// clang-format off
asm void func_0200da80(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02053434
    ldr r0, =data_020f0094
    add r1, r4, #0x40
    str r0, [r4, #0x0]
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r4, #0x69
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r4, #0x6b
    swpb r0, r2, [r1]
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
