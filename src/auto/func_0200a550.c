#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd554();
extern void func_0200a7a8();
extern void r1();
// clang-format off
asm void func_0200a550(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x188]
    cmp r1, #0x0
    beq L_0200a574
    bl func_0200a7a8
    add r1, r4, #0x188
    mov r0, #0x0
    swpb r0, r0, [r1]
L_0200a574:
    ldr r0, [r4, #0x17c]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    mov r0, r4
    bl func_01ffd554
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
