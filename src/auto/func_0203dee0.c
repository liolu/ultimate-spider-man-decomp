#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02033ea4();
extern void r1();
extern void r2();
// clang-format off
asm void func_0203dee0(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x198]
    blx r1
    cmp r0, #0x4
    bne L_0203dfa8
    ldr r0, [r4, #0x260]
    cmp r0, #0x0
    ble L_0203dfa8
    mov r0, r4
    ldr r2, [r0, #0x0]
    ldr r1, [r4, #0x268]
    ldr r2, [r2, #0x54]
    blx r2
    ldrb r0, [r4, #0x1c]
    mov r0, r0, lsl #0x1b
    movs r0, r0, lsr #0x1f
    beq L_0203df5c
    add r1, r4, #0x268
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x2
    str r0, [r1, #0x0]
    ldr r0, [r4, #0x268]
    cmp r0, #0x2
    movlt r0, #0x2
    strlt r0, [r4, #0x268]
    ldr r0, [r4, #0x268]
    cmp r0, #0x10
    movgt r0, #0x10
    strgt r0, [r4, #0x268]
L_0203df5c:
    ldr r0, [r4, #0x78]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0203df94
L_0203df6c:
    b L_0203df94
    b L_0203df80
    b L_0203df8c
    b L_0203df80
    b L_0203df8c
L_0203df80:
    mov r0, #0x3
    str r0, [r4, #0x78]
    b L_0203df94
L_0203df8c:
    mov r0, #0x4
    str r0, [r4, #0x78]
L_0203df94:
    add r1, r4, #0x1c4
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_0203dfa8:
    mov r0, r4
    bl func_02033ea4
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
