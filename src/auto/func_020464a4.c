#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02062fc0();
extern void func_0208580c();
extern char data_02104a10[];
// clang-format off
asm void func_020464a4(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r3, #0x0
    str r3, [sp, #0x0]
    mov r4, r1
    str r3, [sp, #0x4]
    ldr r1, [r4, #0x4]
    mov r5, r0
    bl func_02062fc0
    ldr r0, =data_02104a10
    mov r3, #0x1
    str r0, [r5, #0x0]
    str r3, [r5, #0x178]
    mov r2, #0x0
    str r2, [r5, #0x17c]
    ldr r0, [r4, #0xc]
    str r0, [r5, #0x180]
    str r4, [r5, #0x184]
    ldr r0, [r5, #0xbc]
    ldr r1, [r4, #0x0]
    bl func_0208580c
    add r2, r5, #0x1e
    ldrb r1, [r2, #0x0]
    mov r0, r5
    bic r1, r1, #0x1
    swpb r1, r1, [r2]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
