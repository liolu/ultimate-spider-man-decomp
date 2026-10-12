#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007484();
extern char data_020eb6e4[];
// clang-format off
asm void func_020015e8(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldr ip, [sp, #0x10]
    mov r4, r0
    str ip, [sp, #0x0]
    bl func_02007484
    ldr r1, =data_020eb6e4
    ldr r0, =0x1f2
    str r1, [r4, #0x0]
    add r1, r4, r0
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r3, r4, #0x1c
    ldrb r1, [r3, #0x0]
    add r2, r4, #0x1d
    mov r0, r4
    orr r1, r1, #0x20
    swpb r1, r1, [r3]
    ldrb r1, [r2, #0x0]
    orr r1, r1, #0x80
    swpb r1, r1, [r2]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
