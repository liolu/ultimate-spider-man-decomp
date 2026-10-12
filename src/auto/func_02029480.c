#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02029480(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r3, [r0, #0x8]
    add r4, r0, #0x8
    cmp r3, r2
    movlo r2, r3
    ldr r3, [r4, #0x0]
    str r2, [sp, #0x0]
    sub r3, r3, r2
    str r3, [r4, #0x0]
    cmp r2, #0x0
    beq L_02029640
    add r8, r0, #0xc
    add r7, r0, #0x19
    add lr, r0, #0x10
    mov r9, #0x80
    ldr r6, =0xfff
    add r11, sp, #0x4
L_020294c8:
    ldr r3, [r0, #0x14]
    cmp r3, #0x0
    beq L_02029548
    ldr r4, [lr, #0x0]
    ldr r3, [r0, #0x10]
    add r4, r4, #0x1
    str r4, [lr, #0x0]
    add ip, r0, #0xc
    ldr r5, [ip, #0x0]
    add r4, r0, r3
    add r3, r5, #0x1
    ldr r5, [r0, #0xc]
    add r10, r0, #0x14
    str r3, [ip, #0x0]
    add r3, r0, r5
    ldrb r4, [r4, #0x1a]
    add r5, r3, #0x1a
    sub r2, r2, #0x1
    swpb r4, r4, [r5]
    ldrb r3, [r3, #0x1a]
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    ldr r3, [ip, #0x0]
    and r3, r3, r6
    str r3, [ip, #0x0]
    ldr r3, [lr, #0x0]
    and r3, r3, r6
    str r3, [lr, #0x0]
    ldr r3, [r10, #0x0]
    sub r3, r3, #0x1
    str r3, [r10, #0x0]
    b L_02029638
L_02029548:
    ldrb r3, [r0, #0x19]
    cmp r3, #0x0
    bne L_02029574
    ldr r5, [r0, #0x0]
    add r4, r0, #0x18
    add r3, r5, #0x1
    str r3, [r0, #0x0]
    ldrb r3, [r5, #0x0]
    add r5, r0, #0x19
    swpb r3, r3, [r4]
    swpb r3, r9, [r5]
L_02029574:
    ldrb r4, [r0, #0x18]
    ldrb r3, [r0, #0x19]
    ands r3, r4, r3
    beq L_020295e4
    ldr r4, [r0, #0x0]
    add r3, r4, #0x1
    str r3, [r0, #0x0]
    ldrb r4, [r4, #0x0]
    add r3, sp, #0x5
    swpb r4, r4, [r3]
    ldr r4, [r0, #0x0]
    add r3, r4, #0x1
    str r3, [r0, #0x0]
    ldrb r3, [r4, #0x0]
    swpb r3, r3, [r11]
    ldrh r3, [sp, #0x4]
    ldr r4, [r0, #0xc]
    mov r3, r3, lsl #0x14
    sub r3, r4, r3, lsr #0x14
    sub r3, r3, #0x1
    and r3, r3, r6
    str r3, [r0, #0x10]
    ldrh r3, [sp, #0x4]
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x1c
    add r3, r3, #0x3
    str r3, [r0, #0x14]
    b L_0202962c
L_020295e4:
    ldr r4, [r0, #0x0]
    sub r2, r2, #0x1
    add r3, r4, #0x1
    str r3, [r0, #0x0]
    ldr r3, [r8, #0x0]
    ldr r5, [r0, #0xc]
    add r3, r3, #0x1
    str r3, [r8, #0x0]
    add r3, r0, r5
    ldrb r4, [r4, #0x0]
    add r5, r3, #0x1a
    swpb r4, r4, [r5]
    ldrb r3, [r3, #0x1a]
    swpb r3, r3, [r1]
    add r1, r1, #0x1
    ldr r3, [r8, #0x0]
    and r3, r3, r6
    str r3, [r8, #0x0]
L_0202962c:
    ldrb r3, [r7, #0x0]
    mov r3, r3, asr #0x1
    swpb r3, r3, [r7]
L_02029638:
    cmp r2, #0x0
    bne L_020294c8
L_02029640:
    ldr r0, [sp, #0x0]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
