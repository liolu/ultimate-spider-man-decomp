#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088174();
extern void func_02088850();
extern void func_02089c28();
extern void func_02096c18();
extern void func_02097e88();
extern char data_02150c44[];
extern char data_02150c4c[];
extern char func_02089c0c[];
// clang-format off
asm void func_02089b0c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    mov r4, r0
    bl func_02088174
    add r0, r4, #0x400
    ldrh r0, [r0, #0xfe]
    cmp r0, #0x0
    bne L_02089b70
    ldr r0, =data_02150c44
    ldrb r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_02089b70
    add r0, sp, #0x0
    bl func_02096c18
    ldr r0, [sp, #0x0]
    ldr r1, =data_02150c44
    mov r3, r0, lsl #0xc
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r2, [sp, #0x4]
    ldr ip, [sp, #0x8]
    orr r2, r3, r2, lsl #0x6
    ldr r0, =data_02150c4c
    orr r1, ip, r2
    strh r1, [r0, #0x0]
L_02089b70:
    ldrb r0, [r4, #0x521]
    cmp r0, #0x1
    bne L_02089b84
    mov r0, r4
    bl func_02089c28
L_02089b84:
    mov r2, #0x0
    swpb r0, r2, [r4]
    ldr r0, =0x4fc
    str r2, [r4, #0x20]
    str r2, [r4, #0x24]
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldr r0, =func_02089c0c
    bl func_02097e88
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x2
    beq L_02089be0
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r0, r4
    mov r1, #0x8
    str r2, [r4, #0x8]
    bl func_02088850
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
L_02089be0:
    ldr r0, [r4, #0x8]
    cmp r0, #0xb
    movne r0, #0x1
    strne r0, [r4, #0x8]
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
