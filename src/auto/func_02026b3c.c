#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02026b3c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    add r2, r0, #0x38
    mov lr, #0x0
    swpb r1, lr, [r2]
    mvn ip, #0x0
    str ip, [r0, #0x34]
    add r2, r0, #0x29
    swpb r1, lr, [r2]
    add r2, r0, #0x28
    swpb r1, lr, [r2]
    str lr, [r0, #0x14]
    str lr, [r0, #0x18]
    str lr, [r0, #0x1c]
    str lr, [r0, #0x20]
    str lr, [r0, #0x24]
    mov r3, lr
L_02026b80:
    add r1, r0, lr, lsl #0x3
    add lr, lr, #0x1
    str ip, [r1, #0x44]
    add r2, r1, #0x48
    cmp lr, #0x20
    swpb r1, r3, [r2]
    blt L_02026b80
    str r3, [r0, #0x144]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
