#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206bb0c();
extern char data_02147ba0[];
// clang-format off
asm void func_0206bab4(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    ldrb r0, [r6, #0x0]
    mov r5, #0x0
    cmp r0, #0x0
    beq L_0206baf0
    ldr r4, =data_02147ba0
L_0206bad0:
    ldrb r0, [r6, r5]
    bl func_0206bb0c
    swpb r0, r0, [r4]
    add r5, r5, #0x1
    ldrb r0, [r6, r5]
    add r4, r4, #0x1
    cmp r0, #0x0
    bne L_0206bad0
L_0206baf0:
    ldr r0, =data_02147ba0
    mov r1, #0x0
    add r2, r0, r5
    swpb r1, r1, [r2]
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
