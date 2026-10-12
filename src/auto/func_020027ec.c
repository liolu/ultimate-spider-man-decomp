#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02002734();
extern void func_02004830();
extern void func_0202718c();
extern void ip();
extern void r1();
extern void r2();
// clang-format off
asm void func_020027ec(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r5, r2
    bl func_02002734
    cmp r0, #0x0
    bne L_0200282c
    cmp r5, #0x0
    beq L_0200282c
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_0200282c:
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    beq L_02002858
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    ldr r1, =0x1b3
    bl func_0202718c
    mov r1, r0
    b L_02002874
L_02002858:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    ldr r1, =0x1b2
    bl func_0202718c
    mov r1, r0
L_02002874:
    cmp r1, #0x0
    beq L_020028a0
    mov r0, r4
    ldr ip, [r0, #0x0]
    mov r2, #0x0
    ldr ip, [ip, #0xc8]
    mov r3, r2
    blx ip
    mov r0, r4
    mov r1, #0x17
    bl func_02004830
L_020028a0:
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, #0x0
    ldr r2, [r2, #0x8c]
    blx r2
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
