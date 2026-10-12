#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205c034();
extern char data_02117ef4[];
// clang-format off
asm void func_02058c44(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldr ip, [sp, #0x10]
    mov r4, r0
    str ip, [sp, #0x0]
    bl func_0205c034
    ldr r1, =data_02117ef4
    ldr r0, =0x6fc
    ldr r2, =0x704
    str r1, [r4, #0x0]
    mov r3, #0x0
    str r3, [r4, #0x6f4]
    str r3, [r4, #0x6f8]
    add r1, r4, r0
    swpb r0, r3, [r1]
    mov r0, #0x3
    str r0, [r4, #0x700]
    add r1, r4, r2
    swpb r0, r3, [r1]
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
