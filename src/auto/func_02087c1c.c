#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206fc1c();
extern char data_0211ccb0[];
// clang-format off
asm void func_02087c1c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    mov ip, #0x0
    str ip, [sp, #0x0]
    mov r4, r0
    str ip, [sp, #0x4]
    bl func_0206fc1c
    ldr r1, =data_0211ccb0
    ldr r0, [sp, #0x10]
    str r1, [r4, #0x0]
    str r0, [r4, #0xc8]
    mov r0, #0x0
    str r0, [r4, #0xcc]
    add r2, r4, #0x1c
    ldrb r1, [r2, #0x0]
    mov r0, r4
    orr r1, r1, #0x80
    swpb r1, r1, [r2]
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
