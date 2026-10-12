#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02088c28();
// clang-format off
asm void func_0208913c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldrb r1, [r0, #0x544]
    cmp r1, #0x1
    addne sp, sp, #0x4
    ldmnefd sp!, {lr}
    bxne lr
    ldr ip, [r0, #0x548]
    ldr r3, =0x22b63cbf
    ldr r2, =0x55c
    umull r1, lr, ip, r3
    mov lr, lr, lsr #0x5
    str lr, [r0, #0x54c]
    add r2, r0, r2
    mov r1, #0x1
    swpb r1, r1, [r2]
    ldr ip, =0xec
    ldr lr, [r0, #0x548]
    umull r1, r3, lr, r3
    mov r3, r3, lsr #0x5
    umull r1, r3, ip, r3
    subs r3, lr, r1
    beq L_020891b4
    ldr r1, =0x54c
    mov r3, #0x0
    add ip, r0, r1
    ldr r1, [ip, #0x0]
    add r1, r1, #0x1
    str r1, [ip, #0x0]
    swpb r1, r3, [r2]
L_020891b4:
    ldr r1, =0x545
    mov r2, #0x0
    str r2, [r0, #0x550]
    add r2, r0, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    mov r1, #0x5
    str r1, [r0, #0x564]
    bl func_02088c28
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
