#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01fff214();
extern char data_023c0000[];
// clang-format off
asm void func_020833b4(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    add r2, r0, #0xc
    mov ip, #0x1
    swpb r1, ip, [r2]
    ldr r3, =data_023c0000
    mov r1, #0x0
    swpb r2, ip, [r3]
    ldr r2, =0x4000444
    str r1, [r0, #0x4]
    str r1, [r0, #0x8]
    str r1, [r2, #0x0]
    bl func_01fff214
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
