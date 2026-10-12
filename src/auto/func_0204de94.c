#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffca08();
extern void func_0200a148();
extern void r1();
// clang-format off
asm void func_0204de94(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x380]
    cmp r0, #0x0
    beq L_0204dec0
    ldrb r1, [r0, #0x10]
    cmp r1, #0x0
    beq L_0204dec0
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
L_0204dec0:
    ldr r0, [r4, #0x388]
    cmp r0, #0x0
    beq L_0204dee4
    ldrb r1, [r0, #0x10]
    cmp r1, #0x0
    beq L_0204dee4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
L_0204dee4:
    mov r0, r4
    bl func_01ffca08
    ldr r1, [r4, #0x384]
    cmp r1, #0x0
    beq L_0204df24
    ldrb r0, [r1, #0x10]
    cmp r0, #0x0
    beq L_0204df24
    ldr r0, =0x15e
    ldrb r2, [r4, #0x15e]
    add r1, r1, r0
    swpb r0, r2, [r1]
    ldr r0, [r4, #0x384]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
L_0204df24:
    ldr r0, [r4, #0x3a4]
    cmp r0, #0x0
    beq L_0204df34
    bl func_0200a148
L_0204df34:
    ldrb r0, [r4, #0x398]
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r0, [r4, #0x1f4]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x10]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
