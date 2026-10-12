#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02064fbc();
extern void func_02089070();
extern void func_0208913c();
extern void func_020891f8();
extern void func_02089340();
extern void func_02089784();
extern void func_0209ab00();
// clang-format off
asm void func_02088c28(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r2, [r4, #0x564]
    cmp r2, #0x0
    beq L_02088d3c
    ldr r1, [r4, #0x4]
    cmp r1, #0x0
    bne L_02088d3c
    cmp r2, #0x5
    addls pc, pc, r2, lsl #0x2
    b L_02088d3c
L_02088c58:
    b L_02088d3c
    b L_02088c70
    b L_02088d3c
    b L_02088ca0
    b L_02088c88
    b L_02088ca8
L_02088c70:
    ldr r1, =0x568
    add r1, r4, r1
    bl func_02089340
    ldr r0, [r4, #0x568]
    bl func_0209ab00
    b L_02088d3c
L_02088c88:
    ldr r1, =0x568
    add r1, r4, r1
    bl func_020891f8
    ldr r0, [r4, #0x568]
    bl func_0209ab00
    b L_02088d3c
L_02088ca0:
    bl func_0208913c
    b L_02088d3c
L_02088ca8:
    ldr r1, [r4, #0x550]
    ldr r2, [r4, #0x54c]
    cmp r1, r2
    blo L_02088d28
    mov r0, #0x4
    bl func_02064fbc
    mov r5, r0
    mov r0, #0x6
    str r0, [r5, #0x0]
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r0, #0xf
    str r0, [sp, #0x4]
    ldr r1, [r4, #0x558]
    mov r0, r4
    mov r2, r5
    mov r3, #0x4
    bl func_02089784
    mov r0, r5
    bl func_0209ab00
    ldr r0, [r4, #0x53c]
    bl func_0209ab00
    ldr r0, [r4, #0x540]
    bl func_0209ab00
    ldr r0, =0x544
    ldr r2, =0x545
    add r1, r4, r0
    mov r3, #0x0
    swpb r0, r3, [r1]
    add r1, r4, r2
    swpb r0, r3, [r1]
    b L_02088d3c
L_02088d28:
    bl func_02089070
    add r1, r4, #0x550
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
L_02088d3c:
    mov r0, #0x0
    str r0, [r4, #0x564]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
