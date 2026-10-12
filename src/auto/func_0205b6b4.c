#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004004();
extern void func_0205ba80();
// clang-format off
asm void func_0205b6b4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02004004
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldrb r0, [r4, #0x15e]
    ldr r1, =0x15e
    cmp r0, #0x0
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r1
    swpb r1, r3, [r2]
    mov r0, r4
    bl func_0205ba80
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
