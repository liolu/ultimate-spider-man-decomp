#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036e58();
extern void func_0203a848();
extern void func_0203c62c();
extern void func_0203f2e8();
extern void func_0203f7b4();
extern void r1();
// clang-format off
asm void func_0203f834(void) {
    stmfd sp!, {r4, lr}
    ldr r1, [r0, #0x0]
    mov r4, r0
    ldr r1, [r1, #0x164]
    blx r1
    cmp r0, #0x0
    beq L_0203f960
    mov r0, r4
    bl func_02036e58
    cmp r0, #0x0
    beq L_0203f960
    ldr r0, [r4, #0x30]
    cmp r0, #0x2
    bne L_0203f8b0
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x20
    beq L_0203f8b0
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    bne L_0203f8a0
    mov r0, r4
    bl func_0203f2e8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203f8a0:
    mov r0, r4
    bl func_0203f7b4
    ldmfd sp!, {r4, lr}
    bx lr
L_0203f8b0:
    ldr r0, [r4, #0x30]
    cmp r0, #0x1
    bne L_0203f900
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x10
    beq L_0203f900
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    beq L_0203f8f0
    mov r0, r4
    bl func_0203f2e8
    ldmfd sp!, {r4, lr}
    bx lr
L_0203f8f0:
    mov r0, r4
    bl func_0203f7b4
    ldmfd sp!, {r4, lr}
    bx lr
L_0203f900:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    beq L_0203f930
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x15c]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203f930:
    ldr r0, =0x1f9
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    mov r0, r4
    bl func_0203c62c
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xfc]
    blx r1
    ldmfd sp!, {r4, lr}
    bx lr
L_0203f960:
    mov r0, r4
    bl func_0203a848
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
