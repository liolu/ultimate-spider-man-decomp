#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_020528e8();
extern char data_020b836c[];
extern char data_0213d440[];
// clang-format off
asm void func_0200bcb8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_020528e8
    ldrb r0, [r4, #0xb4]
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r2, [r4, #0xa4]
    mvn r0, #0x0
    cmp r2, r0
    mov r3, #0x0
    bne L_0200bcf8
    ldr r1, [r4, #0xa8]
    cmp r1, r0
    moveq r3, #0x1
    beq L_0200bd50
L_0200bcf8:
    mvn r0, #0x0
    cmp r2, r0
    beq L_0200bd20
    ldr r2, [r4, #0xa4]
    ldr r1, =data_0213d440
    ldr r0, [r4, #0xac]
    ldr r1, [r1, r2, lsl #0x2]
    cmp r1, r0
    movge r3, #0x1
    movlt r3, #0x0
L_0200bd20:
    ldr r2, [r4, #0xa8]
    mvn r0, #0x0
    cmp r2, r0
    beq L_0200bd50
    cmp r3, #0x0
    mov r3, #0x0
    beq L_0200bd50
    ldr r1, =data_0213d440
    ldr r0, [r4, #0xb0]
    ldr r1, [r1, r2, lsl #0x2]
    cmp r1, r0
    movge r3, #0x1
L_0200bd50:
    cmp r3, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    add r1, r4, #0xb8
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r4, #0xb8]
    cmp r0, #0x5
    ldmlefd sp!, {r4, lr}
    bxle lr
    ldr r0, =data_020b836c
    add r2, r4, #0xb4
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_0202f5f0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
