#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02098328();
extern void func_02098978();
extern void func_0209f6dc();
extern void func_0209fa7c();
extern void func_0209fad4();
extern void r2();
extern char data_02150c58[];
// clang-format off
asm void func_02088444(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0x20c
    ldr r3, =0x4000130
    ldr r2, =0x27fffa8
    ldrh r4, [r3, #0x0]
    ldrh r3, [r2, #0x0]
    ldr r2, =0x2fff
    mov r8, r0
    orr r0, r4, r3
    eor r0, r0, r2
    and r2, r0, r2
    add r0, r8, #0x600
    mov r7, r1
    strh r2, [r0, #0x3c]
    bl func_0209fad4
    add r0, sp, #0x0
    bl func_0209fa7c
    ldr r0, =0x63e
    add r1, sp, #0x0
    add r0, r8, r0
    bl func_0209f6dc
    ldr r0, =data_02150c58
    ldr r2, [r0, #0x0]
    cmp r2, #0x0
    beq L_020884b8
    ldr r0, =0x62c
    mov r1, #0x10
    add r0, r8, r0
    blx r2
L_020884b8:
    ldr r1, =0x62c
    ldr r0, [r8, #0x600]
    add r2, sp, #0x8
    add r1, r8, r1
    bl func_02098978
    movs r6, r0
    bne L_02088574
    ldr r0, [r8, #0x600]
    mov r5, #0x0
    add r0, r0, #0x800
    ldrh r0, [r0, #0x1a]
    strh r0, [r7, #0x0]
    add r4, sp, #0x8
L_020884ec:
    ldr r0, [r8, #0x600]
    mov r1, r4
    mov r2, r5
    bl func_02098328
    cmp r0, #0x0
    beq L_02088560
    mov r1, #0x1a
    mla ip, r5, r1, r7
    mov r3, r0
    add r2, ip, #0x2
    mov r1, #0x8
L_02088518:
    ldrb lr, [r3], #0x1
    ldrb r9, [r3], #0x1
    subs r1, r1, #0x1
    swpb lr, lr, [r2]
    add r2, r2, #0x1
    swpb lr, r9, [r2]
    add r2, r2, #0x1
    bne L_02088518
    ldrh r1, [r0, #0x10]
    strh r1, [ip, #0x12]
    ldrh r2, [r0, #0x12]
    ldrh r1, [r0, #0x14]
    strh r2, [ip, #0x14]
    strh r1, [ip, #0x16]
    ldrh r1, [r0, #0x16]
    ldrh r0, [r0, #0x18]
    strh r1, [ip, #0x18]
    strh r0, [ip, #0x1a]
L_02088560:
    add r0, r5, #0x1
    mov r0, r0, lsl #0x10
    mov r5, r0, lsr #0x10
    cmp r5, #0x2
    blo L_020884ec
L_02088574:
    mov r0, r6
    add sp, sp, #0x20c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    bx lr
}
// clang-format on
