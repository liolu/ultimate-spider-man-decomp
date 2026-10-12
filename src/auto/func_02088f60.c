#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fbc();
extern void func_02089894();
extern void func_0209605c();
extern void func_0209ab0c();
// clang-format off
asm void func_02088f60(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldrb r0, [r4, #0x544]
    cmp r0, #0x1
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    ldr r0, [r1, #0x0]
    ldr r1, =0x548
    add r0, r0, #0x4
    add r1, r4, r1
    mov r2, #0x4
    bl func_0209605c
    ldr r0, [r4, #0x548]
    bl func_02064fbc
    str r0, [r4, #0x53c]
    ldr r0, =0x55c
    ldr r3, [r4, #0x548]
    ldr r2, =0x22b63cbf
    add r1, r4, r0
    umull r0, r5, r3, r2
    mov r5, r5, lsr #0x5
    str r5, [r4, #0x54c]
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r3, =0xec
    ldr r5, [r4, #0x548]
    umull r0, r2, r5, r2
    mov r2, r2, lsr #0x5
    umull r0, r2, r3, r2
    subs r2, r5, r0
    beq L_02089000
    ldr r0, =0x54c
    mov r2, #0x0
    add r3, r4, r0
    ldr r0, [r3, #0x0]
    add r0, r0, #0x1
    str r0, [r3, #0x0]
    swpb r0, r2, [r1]
L_02089000:
    mov r1, #0x0
    mov r0, #0x4
    str r1, [r4, #0x554]
    bl func_02064fbc
    mov r5, r0
    mov r3, #0x3
    add r0, sp, #0x4
    mov r1, r5
    mov r2, #0x4
    str r3, [sp, #0x4]
    bl func_0209605c
    mov ip, #0xf
    mov r0, r4
    mov r1, r5
    mov r2, #0x4
    mov r3, #0x0
    str ip, [sp, #0x0]
    bl func_02089894
    mov r0, r5
    bl func_0209ab0c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
