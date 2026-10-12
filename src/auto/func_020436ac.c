#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02028cfc();
extern void func_0202f5f0();
extern void func_02033810();
extern void func_02033838();
extern void func_02034028();
extern void func_02036868();
extern void func_02036df0();
extern void func_0204414c();
extern void func_02044e04();
extern void func_020611fc();
extern void func_02061950();
extern void r1();
extern void r2();
extern char data_021047bc[];
// clang-format off
asm void func_020436ac(void) {
    stmfd sp!, {r4, r5, r6, lr}
    sub sp, sp, #0x20
    mov r5, r1
    mov r6, r0
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x58]
    blx r1
    ldr r1, [r6, #0x194]
    mov r4, r0
    cmp r1, #0x11
    beq L_020438dc
    cmp r1, #0x15
    beq L_020438dc
    mov r0, r6
    bl func_02044e04
    cmp r0, #0x0
    beq L_02043774
    ldr r0, [r6, #0x30]
    cmp r0, #0x3
    bne L_02043774
    ldrb r0, [r5, #0xa8]
    cmp r0, #0x0
    beq L_02043774
    mov r0, r6
    bl func_02034028
    cmp r0, #0x0
    bne L_02043774
    ldr r0, =0x47c
    add r1, r5, #0x3c
    add r0, r6, r0
    mov r2, #0x0
    bl func_02033838
    cmp r0, #0x0
    beq L_02043774
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r1, =data_021047bc
    ldr r2, [r2, #0x40]
    blx r2
    cmp r0, #0x0
    beq L_02043774
    mov r1, r5
    add r0, r6, #0x1c8
    bl func_02028cfc
    mov r0, r6
    bl func_0204414c
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02043774:
    ldr r0, [r6, #0x450]
    cmp r0, r5
    bne L_02043838
    mov r0, r6
    bl func_02034028
    cmp r0, #0x0
    bne L_02043838
    ldr r0, [r6, #0x30]
    cmp r0, #0x3
    bne L_02043838
    ldr ip, [r5, #0x4c]
    ldr r3, [r5, #0x50]
    ldr r0, =0x47c
    str ip, [sp, #0x8]
    str r3, [sp, #0xc]
    ldrh r2, [r5, #0x3a]
    add r1, sp, #0x0
    add r0, r6, r0
    sub r3, r3, r2, lsr #0x1
    mov r2, #0x0
    str r3, [sp, #0xc]
    str ip, [sp, #0x0]
    str r3, [sp, #0x4]
    bl func_02033810
    cmp r0, #0x0
    beq L_02043838
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r1, =data_021047bc
    ldr r2, [r2, #0x40]
    blx r2
    cmp r0, #0x0
    beq L_02043838
    ldr r1, =0x498
    add r0, r6, #0x250
    add r2, r6, r1
    mov r1, #0x1
    swpb r1, r1, [r2]
    bl func_020611fc
    add r0, r6, #0x250
    bl func_02061950
    mov r1, r5
    add r0, r6, #0x1c8
    bl func_02028cfc
    mov r0, r6
    bl func_0204414c
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_02043838:
    cmp r4, #0x1
    bne L_020438c4
    add r0, r6, #0x1ec
    add r1, r5, #0x3c
    mov r2, #0x0
    bl func_02033838
    cmp r0, #0x0
    beq L_020438c4
    mov r2, #0xa
    mov r1, #0x0
    add r0, sp, #0x10
    str r2, [sp, #0x10]
    str r1, [sp, #0x14]
    str r4, [sp, #0x18]
    bl func_0202f5f0
    mov r0, r6
    bl func_02036df0
    cmp r0, #0x0
    bne L_02043890
    ldrb r0, [r6, #0x48a]
    cmp r0, #0x0
    beq L_02043898
L_02043890:
    mov r1, #0x1
    b L_0204389c
L_02043898:
    mov r1, #0x0
L_0204389c:
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x5c]
    blx r2
    add r1, r6, #0x1f8
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020438c4:
    mov r0, r6
    mov r1, r5
    bl func_02036868
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
L_020438dc:
    mov r0, r6
    mov r1, r5
    bl func_02036868
    add sp, sp, #0x20
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
