#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202c544();
extern void func_0202c658();
extern void func_0202d640();
extern void func_0202d714();
extern void func_0202f310();
// clang-format off
asm void func_0202d864(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0xe8]
    cmp r1, #0x0
    bne L_0202d888
    bl func_0202c544
    add r1, r4, #0xe8
    mov r0, #0x1
    swpb r0, r0, [r1]
L_0202d888:
    mov r0, r4
    bl func_0202d640
    add r2, r4, #0xe4
    ldr r1, [r2, #0x0]
    mov r0, r4
    sub r1, r1, #0x1
    str r1, [r2, #0x0]
    bl func_0202c658
    cmp r0, #0x0
    beq L_0202d8b8
    mov r0, r4
    bl func_0202d714
L_0202d8b8:
    mov r0, r4
    bl func_0202f310
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
