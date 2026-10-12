#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020880a8();
extern void func_020882d8();
extern void func_02088850();
extern void func_02088c28();
extern void func_02089c28();
extern void func_02089cfc();
extern void func_02097f7c();
extern char data_02150c38[];
extern char func_02088e80[];
// clang-format off
asm void func_02088d5c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_020880a8
    ldrb r0, [r4, #0x57e]
    cmp r0, #0x1
    bne L_02088d98
    ldr r1, [r4, #0x588]
    mov r0, r4
    bl func_02088850
    ldr r0, =0x57e
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, lr}
    bx lr
L_02088d98:
    ldr r0, =data_02150c38
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldrb r1, [r4, #0x78e]
    cmp r1, #0x1
    beq L_02088dc4
    ldrb r0, [r4, #0x78f]
    cmp r0, #0x1
    bne L_02088e44
L_02088dc4:
    ldrb r0, [r4, #0x790]
    cmp r0, #0x1
    bne L_02088e10
    mov r0, r4
    bl func_02089c28
    ldr r0, =func_02088e80
    bl func_02097f7c
    cmp r0, #0x2
    beq L_02088df4
    mov r0, r4
    mov r1, #0x9
    bl func_02088850
L_02088df4:
    add r1, r4, #0x790
    mov r3, #0x0
    ldr r2, =0x78f
    swpb r0, r3, [r1]
    add r1, r4, r2
    swpb r0, r3, [r1]
    b L_02088e44
L_02088e10:
    cmp r1, #0x1
    bne L_02088e44
    ldrb r0, [r4, #0x791]
    cmp r0, #0x1
    bne L_02088e3c
    mov r0, r4
    bl func_020882d8
    ldr r0, =0x791
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_02088e3c:
    mov r0, r4
    bl func_02089cfc
L_02088e44:
    ldr r1, =0x794
    mov r0, r4
    add r2, r4, r1
    ldrh r1, [r2, #0x0]
    add r1, r1, #0x1
    strh r1, [r2, #0x0]
    bl func_02088c28
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
