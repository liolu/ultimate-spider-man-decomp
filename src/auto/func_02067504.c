#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02067264();
extern void func_02067314();
extern void func_0206734c();
extern void func_02069210();
extern void func_02069238();
extern void func_02069260();
// clang-format off
asm void func_02067504(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r5, r0
    mov r4, r1
    add r0, r5, r4, lsl #0x2
    ldr r0, [r0, #0x1c]
    ldrb r1, [r0, #0x26]
    cmp r1, #0x0
    beq L_020675f4
    ldr r1, [r0, #0x38]
    cmp r1, #0x2
    bne L_0206757c
    bl func_02069210
    add r1, r5, #0x70
    ldr r0, [r1, #0x0]
    add r3, r5, #0x18
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r1, [r3, #0x0]
    mov r0, r5
    add r2, r1, #0x1
    mov r1, r4
    str r2, [r3, #0x0]
    bl func_02067314
    ldr r2, [r5, #0x90]
    ldr r3, [r5, #0x8c]
    mov r0, r5
    mov r1, r4
    bl func_02067264
    b L_020675f4
L_0206757c:
    cmp r1, #0x1
    bne L_020675dc
    bl func_02069260
    add r2, r5, #0x70
    ldr r0, [r2, #0x0]
    add r1, r5, #0x18
    sub r0, r0, #0x1
    str r0, [r2, #0x0]
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r5, #0x18]
    mov r1, r4
    cmp r0, #0x0
    movlt r0, #0x0
    strlt r0, [r5, #0x18]
    mov r0, r5
    bl func_0206734c
    ldr r2, [r5, #0x90]
    ldr r3, [r5, #0x8c]
    mov r0, r5
    mov r1, r4
    bl func_02067264
    b L_020675f4
L_020675dc:
    cmp r1, #0x0
    bne L_020675f4
    bl func_02069238
    mov r0, r5
    mov r1, r4
    bl func_0206734c
L_020675f4:
    add r0, r5, r4, lsl #0x2
    ldr r0, [r0, #0x1c]
    mov r2, #0x0
    add r1, r0, #0x26
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
