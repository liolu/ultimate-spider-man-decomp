#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffa1b4();
extern void func_01ffb0f0();
extern void func_0200166c();
extern void func_0200168c();
extern void func_0200169c();
extern void func_02001734();
extern void func_02018dbc();
extern void r2();
extern char data_0213b6e0[];
// clang-format off
asm void func_02001788(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x10
    mov r6, r0
    bl func_0200169c
    mov r2, #0x0
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    mov r3, r2
    str r2, [sp, #0x8]
    add r1, r6, #0x4c
    mov r5, r0
    bl func_02018dbc
    ldrb r1, [r6, #0x1c]
    mov r4, r0
    mov r0, r1, lsl #0x1a
    movs r0, r0, lsr #0x1f
    bne L_020017d8
    mov r0, r1, lsl #0x19
    movs r0, r0, lsr #0x1f
    beq L_020017e8
L_020017d8:
    add r1, r4, #0x1c
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x20
    swpb r0, r0, [r1]
L_020017e8:
    add r1, r4, #0x1f0
    mov r0, #0x1
    cmp r4, #0x0
    swpb r0, r0, [r1]
    beq L_0200182c
    mov r0, r4
    mov r1, r5
    bl func_01ffb0f0
    ldr r1, [r6, #0x20]
    mov r0, r4
    bl func_01ffa1b4
    mov r0, r4
    ldr r1, [r6, #0xbc]
    ldr r2, [r0, #0x0]
    ldr r1, [r1, #0x10]
    ldr r2, [r2, #0x28]
    blx r2
L_0200182c:
    mov r0, r6
    bl func_02001734
    ldr r2, [r6, #0xbc]
    ldr r1, =data_0213b6e0
    ldr r2, [r2, #0x8]
    ldr r1, [r1, #0x0]
    add r1, r1, r2
    add r1, r1, r0
    mov r0, r6
    str r1, [r6, #0xc0]
    bl func_0200166c
    ldr r1, [r0, #0x0]
    add r1, r1, #0x1
    str r1, [r0, #0x0]
    mov r0, r6
    bl func_0200168c
    ldr r1, [r0, #0x0]
    sub r1, r1, #0x1
    str r1, [r0, #0x0]
    add sp, sp, #0x10
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
