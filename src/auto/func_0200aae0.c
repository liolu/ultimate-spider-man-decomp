#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02062fc0();
extern char data_020ef5d0[];
// clang-format off
asm void func_0200aae0(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldrb r4, [sp, #0x24]
    mov r2, #0x0
    ldrb r3, [sp, #0x20]
    str r4, [sp, #0x0]
    str r2, [sp, #0x4]
    ldr r1, [r1, #0x0]
    add r2, sp, #0x18
    mov r4, r0
    bl func_02062fc0
    ldr r0, =data_020ef5d0
    mov r3, #0x0
    str r0, [r4, #0x0]
    ldr ip, [r4, #0xbc]
    add r2, r4, #0x1c
    add r1, ip, #0x96
    swpb r0, r3, [r1]
    add r1, ip, #0x97
    swpb r0, r3, [r1]
    ldrb r1, [r2, #0x0]
    mov r0, r4
    orr r1, r1, #0x80
    swpb r1, r1, [r2]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
