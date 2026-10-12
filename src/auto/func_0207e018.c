#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0207d0d8();
extern char data_0211c1b4[];
// clang-format off
asm void func_0207e018(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0207d0d8
    ldr r0, =data_0211c1b4
    mov r3, #0x1
    str r0, [r4, #0x0]
    ldr r1, [r4, #0x4]
    mov r0, r4
    add r2, r1, #0xd9
    swpb r1, r3, [r2]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
