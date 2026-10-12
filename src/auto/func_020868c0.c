#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02086430();
extern char func_02086954[];
// clang-format off
asm void func_020868c0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldr r3, [r1, #0x20]
    ldr r2, [r1, #0x24]
    mov r5, r0
    cmp r3, r2
    mov r4, #0x0
    beq L_02086940
    ldr r0, [r1, #0x20]
    ldr r0, [r1, r0, lsl #0x2]
L_020868e8:
    cmp r0, #0x0
    beq L_02086930
    ldrb r1, [r5, #0x53]
    cmp r1, #0x0
    beq L_02086940
    ldr r1, [r5, #0x54]
    cmp r1, #0x0
    ble L_02086940
    add r2, r5, #0x52
    mov r4, #0x1
    swpb r1, r4, [r2]
    ldr r1, =func_02086954
    bl func_02086430
    add r1, r5, #0x54
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    b L_02086940
L_02086930:
    ldr r3, [r1, #0x20]
    ldr r2, [r1, #0x24]
    cmp r3, r2
    bne L_020868e8
L_02086940:
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
