#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffbcb8();
extern void func_0202718c();
extern void func_0202f5f0();
extern void func_02036010();
extern void func_02036450();
extern void func_02036a9c();
extern void func_02036b68();
extern void func_02036cb0();
extern void func_02065678();
extern void r1();
extern void r2();
extern char data_021029d4[];
extern char data_02102c08[];
extern char data_02143c44[];
extern char data_ov000_02156014[];
// clang-format off
asm void func_02039dac(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r2, [r4, #0xbc]
    add r0, r4, #0x190
    mov r1, #0x28
    ldr r5, [r2, #0x9c]
    bl func_0202718c
    ldr r0, [r0, #0x4]
    cmp r5, r0
    bne L_02039e3c
    ldr r0, [r4, #0xbc]
    ldrb r0, [r0, #0x97]
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    ldr r0, =data_02143c44
    ldr r1, =data_02102c08
    mov r2, #0x14
    bl func_02065678
    ldr r0, =data_021029d4
    ldr r3, =data_02143c44
    ldr ip, =data_ov000_02156014
    add r4, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r4, {r0, r1, r2}
    add r2, r3, #0x13
    mov r1, #0x0
    swpb r1, r1, [r2]
    mov r0, r4
    str ip, [r3, #0x14]
    bl func_0202f5f0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02039e3c:
    ldr r2, [r4, #0xbc]
    add r0, r4, #0x190
    mov r1, #0x23
    ldr r5, [r2, #0x9c]
    bl func_0202718c
    ldr r0, [r0, #0x4]
    cmp r5, r0
    bne L_02039f00
    ldr r0, [r4, #0xbc]
    ldrb r0, [r0, #0x97]
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, #0x1
    ldr r2, [r2, #0x8c]
    blx r2
    ldrb r0, [r4, #0x1e0]
    cmp r0, #0x0
    bne L_02039ebc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xc8]
    blx r1
    ands r0, r0, #0x80
    bne L_02039ebc
    mov r0, r4
    bl func_02036cb0
    cmp r0, #0x0
    bne L_02039ec8
L_02039ebc:
    mov r0, r4
    bl func_02036010
    b L_02039ee0
L_02039ec8:
    mov r3, #0x1
    mov r0, r4
    mov r1, #0x9
    mov r2, #0x0
    str r3, [r4, #0x194]
    bl func_02036b68
L_02039ee0:
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, #0x28
    ldr r2, [r2, #0xbc]
    blx r2
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02039f00:
    ldr r0, [r4, #0xbc]
    ldrb r0, [r0, #0x97]
    cmp r0, #0x0
    beq L_02039fd8
    ldr r0, [r4, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    bne L_02039f48
    ldr r0, [r4, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_02039f40
    ldr r0, [r0, #0x20c]
    cmp r0, #0x0
    movne r1, r2
L_02039f40:
    cmp r1, #0x0
    moveq r2, #0x0
L_02039f48:
    cmp r2, #0x0
    beq L_02039fd8
    mov r0, r4
    bl func_02036450
    cmp r0, #0x0
    bgt L_02039f78
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x28
    bl func_02036b68
    b L_02039fb4
L_02039f78:
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x23
    bl func_02036b68
    ldr r1, [r4, #0xbc]
    mov r0, r4
    ldr r1, [r1, #0x9c]
    ldr r2, [r0, #0x0]
    ldrh r3, [r1, #0x6]
    ldrh r1, [r1, #0x4]
    ldr r2, [r2, #0xbc]
    sub r1, r3, r1
    add r1, r1, #0x1
    blx r2
L_02039fb4:
    mov r0, r4
    mov r1, #0x8
    mov r2, #0x0
    bl func_02036a9c
    mov r0, #0x3
    add sp, sp, #0xc
    str r0, [r4, #0x30]
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02039fd8:
    mov r0, r4
    bl func_01ffbcb8
    ldr r1, [r4, #0x1e4]
    cmp r0, r1
    addlt sp, sp, #0xc
    ldmltfd sp!, {r4, r5, lr}
    bxlt lr
    mov r0, r4
    bl func_02036450
    cmp r0, #0x0
    bgt L_0203a024
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x28
    bl func_02036b68
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0203a024:
    mov r0, r4
    ldr r2, [r0, #0x0]
    mov r1, #0x1
    ldr r2, [r2, #0x8c]
    blx r2
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x100]
    blx r1
    mov r2, #0x0
    mov r0, r4
    mov r3, r2
    mov r1, #0x24
    bl func_02036b68
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
