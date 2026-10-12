#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0205f3c4();
extern char data_02118680[];
extern char data_021186c0[];
// clang-format off
asm void func_0205f88c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, [sp, #0x18]
    ldr r4, =data_02118680
    str ip, [sp, #0x0]
    str r4, [sp, #0x4]
    mov ip, #0x2
    mov r4, r0
    str ip, [sp, #0x8]
    bl func_0205f3c4
    ldr r1, =data_021186c0
    ldr r0, =0x9e8
    ldr r2, =0x9e9
    ldr r3, =0x9ea
    str r1, [r4, #0x0]
    add r1, r4, r0
    mov ip, #0x0
    swpb r0, ip, [r1]
    add r1, r4, r2
    swpb r0, ip, [r1]
    add r1, r4, r3
    swpb r0, ip, [r1]
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
