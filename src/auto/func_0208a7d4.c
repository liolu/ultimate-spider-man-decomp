#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088850();
extern void func_0209769c();
extern void func_0209788c();
extern void func_02097b9c();
extern char func_0208a79c[];
// clang-format off
asm void func_0208a7d4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_0209788c
    add r2, r4, #0x500
    strh r0, [r2, #0x6]
    ldrh r3, [r2, #0x6]
    cmp r3, #0x8000
    bne L_0208a818
    mov r1, #0x3
    mov r0, r4
    str r1, [r4, #0x598]
    mov r2, #0x0
    str r2, [r4, #0x8]
    bl func_02088850
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a818:
    cmp r3, #0x0
    bne L_0208a844
    mov r1, #0x3
    mov r0, r4
    str r1, [r4, #0x598]
    mov r2, #0x0
    str r2, [r4, #0x8]
    bl func_02088850
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a844:
    ldrh r1, [r2, #0x8]
    mov r0, #0x1
    sub r1, r1, #0x1
    mov r1, r0, lsl r1
    ands r1, r1, r3
    bne L_0208a8b4
    ldr r1, =0x508
    add ip, r4, r1
L_0208a864:
    ldrh r1, [ip, #0x0]
    add r1, r1, #0x1
    strh r1, [ip, #0x0]
    ldrh r1, [r2, #0x8]
    cmp r1, #0x10
    bls L_0208a8a0
    mov r1, #0x3
    mov r0, r4
    str r1, [r4, #0x598]
    mov r2, #0x0
    str r2, [r4, #0x8]
    bl func_02088850
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
L_0208a8a0:
    sub r3, r1, #0x1
    ldrh r1, [r2, #0x6]
    mov r3, r0, lsl r3
    ands r1, r3, r1
    beq L_0208a864
L_0208a8b4:
    ldr r2, [r4, #0x5f8]
    ldr r1, [r4, #0x5f4]
    add r0, r4, #0x500
    str r2, [r1, #0x0]
    ldrh r1, [r0, #0x8]
    ldr r0, [r4, #0x5f4]
    strh r1, [r0, #0x4]
    bl func_0209769c
    ldr r1, [r4, #0x5f4]
    mov r3, #0xff
    strh r0, [r1, #0x6]
    ldr r0, [r4, #0x5f4]
    ldr r2, =0x4fc
    add r1, r0, #0x8
    swpb r0, r3, [r1]
    add r1, r4, r2
    ldr r0, [r4, #0x5f4]
    mov r2, #0x0
    add ip, r0, #0x9
    swpb r0, r3, [ip]
    ldr ip, [r4, #0x5f4]
    ldr r0, =func_0208a79c
    add lr, ip, #0xa
    swpb ip, r3, [lr]
    ldr ip, [r4, #0x5f4]
    add lr, ip, #0xb
    swpb ip, r3, [lr]
    ldr ip, [r4, #0x5f4]
    add lr, ip, #0xc
    swpb ip, r3, [lr]
    ldr ip, [r4, #0x5f4]
    add ip, ip, #0xd
    swpb r3, r3, [ip]
    swpb r2, r2, [r1]
    ldr r1, [r4, #0x5f4]
    bl func_02097b9c
    str r0, [r4, #0x10]
    ldr r0, [r4, #0x10]
    cmp r0, #0x2
    moveq r0, #0x8
    streq r0, [r4, #0x8]
    moveq r0, #0x1
    streq r0, [r4, #0x4]
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r1, #0x3
    mov r0, r4
    str r1, [r4, #0x598]
    mov r2, #0x0
    str r2, [r4, #0x8]
    bl func_02088850
    mov r0, #0x0
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
