#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02003cd8();
extern void func_02003fec();
extern void func_02006428();
extern void func_0202718c();
extern void ip();
extern void r1();
extern void r2();
// clang-format off
asm void func_02005518(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r1, #0x0
    bl func_02003fec
    add r2, r4, #0x1e8
    mov r1, #0x0
    swpb r0, r1, [r2]
    add r3, r4, #0x1e
    ldrb r2, [r3, #0x0]
    mov r0, r4
    bic r2, r2, #0x1
    orr r2, r2, #0x1
    swpb r2, r2, [r3]
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x8c]
    blx r2
    ldr r0, =0x191
    mov r2, #0x0
    str r2, [r4, #0x194]
    add r1, r4, r0
    swpb r0, r2, [r1]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r5, r0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x150]
    blx r1
    mov r1, r0
    mov r0, r5
    bl func_0202718c
    mov r5, r0
    mov r0, r4
    mov r1, r5
    mov r2, #0x0
    bl func_02003cd8
    mov r1, r5
    mov r0, r4
    mov r2, #0x0
    mov r3, r2
    ldr ip, [r0, #0x0]
    ldr ip, [ip, #0xc8]
    blx ip
    mov r0, r4
    bl func_02006428
    cmp r0, #0x0
    bne L_02005614
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x28
    bl func_0202718c
    cmp r0, #0x0
    ldrne r0, [r0, #0x10]
    strne r0, [r4, #0x1c0]
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x120]
    blx r1
L_02005614:
    mov r0, #0x3
    str r0, [r4, #0x1b8]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
