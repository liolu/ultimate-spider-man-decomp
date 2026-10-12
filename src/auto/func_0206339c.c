#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0206339c(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =0x4d4
    ldr ip, =0x4d5
    add r3, r0, r1
    mov r1, #0x1
    swpb r2, r1, [r3]
    add r3, r0, ip
    ldr ip, =0x4d6
    swpb r2, r1, [r3]
    add r3, r0, ip
    ldr ip, =0x4d7
    ldr lr, =0x4d8
    swpb r2, r1, [r3]
    add r3, r0, ip
    ldr ip, =0x4d9
    swpb r2, r1, [r3]
    add r3, r0, lr
    ldr lr, =0x4da
    ldr r4, =0x4db
    swpb r2, r1, [r3]
    add r3, r0, ip
    ldr ip, =0x4dc
    swpb r2, r1, [r3]
    add r3, r0, lr
    ldr lr, =0x4dd
    swpb r2, r1, [r3]
    add r3, r0, r4
    swpb r2, r1, [r3]
    add r3, r0, ip
    swpb r2, r1, [r3]
    add r2, r0, lr
    swpb r0, r1, [r2]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
