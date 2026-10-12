#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02053434();
extern void func_02055fe8();
extern char data_020efaf8[];
// clang-format off
asm void func_0200be2c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r5, r1
    bl func_02053434
    ldr r0, =data_020efaf8
    mov r2, #0x0
    str r0, [r4, #0x0]
    str r2, [r4, #0xac]
    str r2, [r4, #0xb0]
    add r1, r4, #0xb4
    swpb r0, r2, [r1]
    str r2, [r4, #0xb8]
    ldr r0, [r5, #0x3c]
    str r0, [r4, #0xa4]
    ldr r0, [r5, #0x40]
    str r0, [r4, #0xa8]
    bl func_02055fe8
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
