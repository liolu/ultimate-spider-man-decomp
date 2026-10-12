#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02038468();
extern void func_0203d09c();
extern char data_0214868c[];
// clang-format off
asm void func_02036afc(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r1
    ldr r1, [r4, #0x0]
    mov r5, r0
    str r1, [r5, #0x1d0]
    ldr r1, [r4, #0x4]
    ldr r0, =data_0214868c
    ldrh lr, [r1, #0x6]
    ldrh ip, [r1, #0x4]
    sub ip, lr, ip
    add ip, ip, #0x1
    str ip, [r0, #0x3c]
    ldr r0, [r4, #0x0]
    ldr ip, =data_0214868c
    cmp r0, #0x12
    moveq r6, #0x1
    movne r6, #0x0
    add lr, ip, #0x42
    swpb ip, r6, [lr]
    mov r0, r5
    bl func_0203d09c
    ldr r1, [r4, #0x0]
    mov r0, r5
    bl func_02038468
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
