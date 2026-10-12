#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206570c();
extern void func_02082d2c();
// clang-format off
asm void func_0206576c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r5, r2
    mov r7, r0
    mov r6, r1
    cmp r5, #0x10
    mov r4, #0x0
    bne L_020657b8
L_0206578c:
    and r0, r7, #0xf
    cmp r0, #0xa
    addhs r0, r0, #0x37
    add r1, r6, r4
    addlo r0, r0, #0x30
    mov r7, r7, lsr #0x4
    cmp r7, #0x0
    swpb r0, r0, [r1]
    add r4, r4, #0x1
    bne L_0206578c
    b L_020657e8
L_020657b8:
    mov r0, r7
    mov r1, r5
    bl func_02082d2c
    mul r1, r0, r5
    sub r2, r7, r1
    add r1, r6, r4
    add r2, r2, #0x30
    mov r7, r0
    cmp r0, #0x0
    swpb r0, r2, [r1]
    add r4, r4, #0x1
    bne L_020657b8
L_020657e8:
    mov r0, r6
    add r2, r6, r4
    mov r1, #0x0
    swpb r1, r1, [r2]
    bl func_0206570c
    sub r7, r0, #0x1
    cmp r7, #0x0
    mov r5, #0x0
    ble L_02065834
L_0206580c:
    ldrb r3, [r6, r5]
    ldrb r0, [r6, r7]
    add r1, r6, r5
    add r2, r6, r7
    swpb r0, r0, [r1]
    add r5, r5, #0x1
    sub r7, r7, #0x1
    cmp r5, r7
    swpb r0, r3, [r2]
    blt L_0206580c
L_02065834:
    mov r0, r4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
