#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088174();
extern void func_020883e8();
extern char data_02150c38[];
// clang-format off
asm void func_0208b700(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r4, r0
    mov ip, #0x0
    swpb r3, ip, [r4]
    add r5, r4, #0x1
    swpb r3, ip, [r5]
    ldr r5, =0x4fc
    mov r3, #0x2
    str r3, [r4, #0x8]
    str ip, [r4, #0xc]
    mov r3, #0x1
    str r3, [r4, #0x14]
    str ip, [r4, #0x18]
    strh ip, [r4, #0x1c]
    str ip, [r4, #0x20]
    str ip, [r4, #0x24]
    add r6, r4, r5
    swpb r5, ip, [r6]
    add r8, r4, #0x500
    add r5, r4, #0x400
    strh ip, [r5, #0xfe]
    str ip, [r4, #0x500]
    mov r5, #0x3
    strh r5, [r8, #0x4]
    strh ip, [r8, #0x6]
    ldr r9, =0x521
    ldr lr, =0x528
    strh r3, [r8, #0x8]
    mov r5, #0x64
    strh r5, [r8, #0xa]
    str ip, [r4, #0x510]
    strh ip, [r8, #0x16]
    ldr r5, =0x544
    strh ip, [r8, #0x18]
    add r7, r4, #0x520
    swpb r6, ip, [r7]
    add r9, r4, r9
    swpb r7, ip, [r9]
    mvn r9, #0x0
    ldr r6, =0x545
    add lr, r4, lr
    str r9, [r4, #0x524]
    swpb r9, ip, [lr]
    add r10, r4, r5
    str ip, [r4, #0x534]
    str ip, [r4, #0x538]
    str ip, [r4, #0x53c]
    ldr r9, =0x57e
    swpb r5, ip, [r10]
    add r6, r4, r6
    swpb r5, ip, [r6]
    ldr r7, =0x55c
    ldr lr, =0x574
    ldr r5, =0x594
    str ip, [r4, #0x554]
    add r6, r4, r7
    swpb r3, r3, [r6]
    add r10, r4, lr
    str ip, [r4, #0x560]
    str ip, [r4, #0x564]
    swpb r7, ip, [r10]
    add r9, r4, r9
    strh ip, [r8, #0x7c]
    swpb r8, ip, [r9]
    add r5, r4, r5
    str ip, [r4, #0x588]
    str r2, [r4, #0x58c]
    str ip, [r4, #0x590]
    swpb r2, ip, [r5]
    ldr r3, =0x78e
    add r2, r4, #0x700
    strh ip, [r2, #0x8a]
    mov r5, #0x4
    strh r5, [r2, #0x8c]
    add r5, r4, r3
    ldr r6, =0x78f
    swpb r3, ip, [r5]
    add r5, r4, r6
    swpb r3, ip, [r5]
    add r5, r4, #0x790
    ldr r7, =0x791
    swpb r3, ip, [r5]
    add r5, r4, r7
    swpb r3, ip, [r5]
    mov r5, r1
    strh ip, [r2, #0x96]
    ldr r3, =data_02150c38
    strh ip, [r2, #0x9a]
    swpb r2, ip, [r3]
    bl func_02088174
    mov r8, #0x120
    ldr r1, =0x1760
    mov r0, #0x1700
    str r8, [r4, #0x618]
    mov r7, #0x240
    str r7, [r4, #0x61c]
    str r8, [r4, #0x620]
    mov r7, #0x280
    str r7, [r4, #0x624]
    str r5, [r4, #0x5ec]
    add r7, r5, #0x1700
    str r7, [r4, #0x5f0]
    add r7, r5, #0x1740
    ldr r2, =0x1820
    str r7, [r4, #0x5f4]
    add r1, r5, r1
    str r1, [r4, #0x5f8]
    add r1, r5, r2
    str r1, [r4, #0x5fc]
    add r1, r5, #0x18c0
    ldr r3, =0x20e0
    str r1, [r4, #0x600]
    add r1, r5, r3
    ldr r6, =0x22e0
    str r1, [r4, #0x604]
    add r1, r5, r6
    str r1, [r4, #0x608]
    ldr r3, [r4, #0x618]
    add r0, r0, #0xbe0
    mov r2, r3, lsr #0x1f
    rsb r1, r2, r3, lsl #0x1b
    adds r1, r2, r1, ror #0x1b
    moveq r1, #0x0
    rsbne r1, r1, #0x20
    add r1, r3, r1
    add r0, r0, r1
    add r1, r5, r0
    str r1, [r4, #0x60c]
    ldr r3, [r4, #0x61c]
    mov r2, r3, lsr #0x1f
    rsb r1, r2, r3, lsl #0x1b
    adds r1, r2, r1, ror #0x1b
    moveq r1, #0x0
    rsbne r1, r1, #0x20
    add r1, r3, r1
    add r0, r0, r1
    add r1, r5, r0
    str r1, [r4, #0x610]
    ldr r3, [r4, #0x620]
    mov r2, r3, lsr #0x1f
    rsb r1, r2, r3, lsl #0x1b
    adds r1, r2, r1, ror #0x1b
    moveq r1, #0x0
    rsbne r1, r1, #0x20
    add r1, r3, r1
    add r0, r0, r1
    add r1, r5, r0
    str r1, [r4, #0x614]
    ldr r3, [r4, #0x624]
    mov r2, r3, lsr #0x1f
    rsb r1, r2, r3, lsl #0x1b
    adds r1, r2, r1, ror #0x1b
    moveq r1, #0x0
    rsbne r1, r1, #0x20
    add r1, r3, r1
    add r0, r0, r1
    add r2, r5, r0
    add r1, r0, #0x20
    add r0, r0, #0x120
    str r2, [r4, #0x628]
    add r1, r5, r1
    str r1, [r4, #0x52c]
    add r0, r5, r0
    str r0, [r4, #0x530]
    mov r3, #0x0
    ldr r0, =0x514
    mov r5, r3
L_0208b99c:
    add r1, r4, r3
    add r2, r1, r0
    swpb r1, r5, [r2]
    add r1, r4, r3, lsl #0x1
    add r1, r1, #0x500
    add r3, r3, #0x1
    strh r5, [r1, #0x1a]
    cmp r3, #0x2
    blt L_0208b99c
    ldr r0, =0x67c
    add r6, r4, r0
L_0208b9c8:
    mov r0, r4
    mov r1, r6
    bl func_020883e8
    add r5, r5, #0x1
    cmp r5, #0x5
    add r6, r6, #0x36
    blt L_0208b9c8
    mov r0, r4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
}
// clang-format on
