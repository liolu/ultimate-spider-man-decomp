#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088834();
extern void func_02097e88();
extern void func_020981b4();
extern char data_02150c44[];
extern char data_02150c4c[];
extern char func_020882ac[];
extern char func_0208a270[];
// clang-format off
asm void func_02089ff0(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x20
    ldrh r2, [r1, #0x2]
    mov r4, r0
    cmp r2, #0x0
    bne L_0208a174
    ldrh r2, [r1, #0x8]
    cmp r2, #0x9
    addls pc, pc, r2, lsl #0x2
    b L_0208a14c
L_0208a018:
    b L_0208a14c
    b L_0208a14c
    b L_0208a14c
    b L_0208a14c
    b L_0208a14c
    b L_0208a14c
    b L_0208a250
    b L_0208a040
    b L_0208a104
    b L_0208a128
L_0208a040:
    ldr r2, [r4, #0x4f8]
    mov r0, #0xc0
    mla r0, r2, r0, r4
    ldrh lr, [r0, #0x70]
    ldr ip, =data_02150c4c
    ldr r3, =data_02150c44
    mov r2, #0x1
    swpb r0, r2, [r3]
    strh lr, [ip, #0x0]
    ldrh r3, [r1, #0xa]
    add r0, r4, #0x400
    add r1, r4, #0x500
    strh r3, [r0, #0xfe]
    mov r3, #0x0
    strh r3, [r1, #0x7c]
    str r2, [r4, #0x560]
    ldr r1, [r4, #0x620]
    ldr r0, =func_020882ac
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    str r1, [sp, #0x0]
    str r2, [sp, #0x4]
    str r3, [sp, #0x8]
    str r3, [sp, #0xc]
    str r3, [sp, #0x10]
    str r3, [sp, #0x14]
    str r3, [sp, #0x18]
    ldr r2, [r4, #0x624]
    ldr r1, [r4, #0x614]
    mov r2, r2, lsl #0x10
    ldr r3, [r4, #0x610]
    mov r2, r2, lsr #0x10
    bl func_020981b4
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x2
    addeq sp, sp, #0x20
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r0, r4
    mov r1, #0x5
    str r2, [r4, #0x8]
    bl func_02088834
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a104:
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r1, #0x6
    str r2, [r4, #0x8]
    bl func_02088834
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a128:
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r1, #0x6
    str r2, [r4, #0x8]
    bl func_02088834
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a14c:
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r0, r4
    mov r1, #0x5
    str r2, [r4, #0x8]
    bl func_02088834
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a174:
    cmp r2, #0xb
    bne L_0208a1a0
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r1, #0x5
    str r2, [r4, #0x8]
    bl func_02088834
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a1a0:
    cmp r2, #0xc
    bne L_0208a1cc
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r1, #0x5
    str r2, [r4, #0x8]
    bl func_02088834
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a1cc:
    ldr r1, =0x57c
    add r2, r4, #0x500
    add r3, r4, r1
    ldrh r1, [r3, #0x0]
    add r1, r1, #0x1
    strh r1, [r3, #0x0]
    ldrh r1, [r2, #0x7c]
    cmp r1, #0xf
    bhs L_0208a238
    ldr r0, =func_0208a270
    bl func_02097e88
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x2
    addeq sp, sp, #0x20
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r0, r4
    mov r1, #0x5
    str r2, [r4, #0x8]
    bl func_02088834
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a238:
    mov r1, #0x3
    str r1, [r4, #0x598]
    mov r2, #0x0
    mov r1, #0x5
    str r2, [r4, #0x8]
    bl func_02088834
L_0208a250:
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
