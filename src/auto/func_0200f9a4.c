#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200f94c();
extern char data_020efa10[];
extern char data_020f7524[];
// clang-format off
asm void func_0200f9a4(void) {
    stmfd sp!, {r4, lr}
    ldr ip, =data_020efa10
    mov r4, r0
    ldr r0, =data_020f7524
    str ip, [r4, #0x0]
    str r0, [r4, #0x0]
    ldr ip, [r1, #0x0]
    ldr r1, [r1, #0x4]
    mov r0, #0x0
    str ip, [r4, #0x4]
    str r1, [r4, #0x8]
    str r2, [r4, #0xc]
    str r0, [r4, #0x10]
    str r3, [r4, #0x14]
    add r1, r4, #0x18
    swpb r0, r0, [r1]
    mvn r0, #0x0
    ldr r1, [r4, #0x14]
    cmp r1, r0
    bne L_0200f9fc
    bl func_0200f94c
    str r0, [r4, #0x14]
L_0200f9fc:
    mov r0, r4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
