#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0214868c[];
// clang-format off
asm void func_02023c50(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r3, =data_0214868c
    ldr r1, [r0, #0x4c]
    add r2, r3, #0x40
    str r1, [r3, #0x4]
    ldrh r1, [r0, #0x3a]
    ldr ip, [r0, #0x50]
    mov lr, #0x5
    add r1, ip, r1, lsr #0x1
    rsb r1, r1, #0x0
    str r1, [r3, #0x8]
    ldrh r1, [r0, #0x38]
    mov ip, #0x0
    str r1, [r3, #0xc]
    ldrh r1, [r0, #0x3a]
    str r1, [r3, #0x10]
    ldr r1, [r0, #0x30]
    str r1, [r3, #0x18]
    ldrb r1, [r0, #0x15e]
    swpb r1, r1, [r2]
    str lr, [r3, #0x14]
    str ip, [r3, #0x20]
    str ip, [r3, #0x24]
    str ip, [r3, #0x28]
    str ip, [r3, #0x2c]
    ldr r0, [r0, #0x30]
    str r0, [r3, #0x1c]
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
