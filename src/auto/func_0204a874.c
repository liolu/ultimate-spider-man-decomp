#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0204a794();
// clang-format off
asm void func_0204a874(void) {
    stmfd sp!, {r4, lr}
    ldr r2, [r1, #0x18]
    mov r4, r0
    str r2, [r4, #0x8]
    ldr ip, [r1, #0x1c]
    ldr r2, [r1, #0x20]
    add r3, r4, #0x4
    str ip, [r4, #0xc]
    str r2, [r4, #0x10]
    ldr r2, [r1, #0x4]
    ldr ip, =0xc0de608d
    swpb r2, r2, [r3]
    add r3, r4, #0x14
    str ip, [r4, #0x0]
    ldr r2, [r1, #0x28]
    add ip, r4, #0x15
    swpb r2, r2, [r3]
    add r3, r4, #0x16
    ldr r2, [r1, #0x2c]
    add lr, r4, #0x17
    swpb r2, r2, [ip]
    mov ip, #0x0
    ldr r2, [r1, #0x30]
    swpb r2, r2, [r3]
    ldr r1, [r1, #0x24]
    swpb r1, r1, [lr]
    strh ip, [r4, #0x18]
    bl func_0204a794
    strh r0, [r4, #0x1a]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
