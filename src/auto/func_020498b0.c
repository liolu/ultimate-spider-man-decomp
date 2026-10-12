#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020012d0();
extern void func_02001c58();
extern void func_02002dc0();
extern void func_02004024();
extern void func_0202718c();
extern void func_020335e8();
extern void func_0203368c();
extern void func_020488e4();
extern void func_02058688();
extern void r1();
extern char data_020a7840[];
extern char data_0213b6e0[];
// clang-format off
asm void func_020498b0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02001c58
    cmp r0, #0x0
    moveq r1, #0x0
    beq L_020498d8
    mov r0, r4
    bl func_0203368c
    mov r1, r0
L_020498d8:
    cmp r1, #0x0
    beq L_020498f4
    mov r0, r4
    bl func_02002dc0
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_020498f4:
    mov r0, r4
    bl func_02058688
    cmp r0, #0x0
    bne L_02049984
    ldr r0, =data_0213b6e0
    ldr r1, [r4, #0x780]
    ldr r0, [r0, #0x0]
    cmp r1, r0
    blt L_02049924
    ldrb r0, [r4, #0x784]
    cmp r0, #0x0
    bne L_02049968
L_02049924:
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldr r0, [r4, #0x178]
    add r0, r0, #0x4
    bl func_020012d0
    mov r5, r0
    ldr r0, =data_020a7840
    bl func_020012d0
    mov r1, r0
    mov r0, r4
    add r1, r1, r5
    bl func_02004024
L_02049968:
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02049984:
    mov r0, r4
    bl func_02001c58
    cmp r0, #0x0
    beq L_02049a64
    mov r0, r4
    mov r1, #0x3d
    bl func_020335e8
    mov r5, r0
    mov r0, r4
    mov r1, #0x3e
    bl func_020335e8
    cmp r5, #0x0
    bne L_020499c0
    cmp r0, #0x0
    beq L_02049a34
L_020499c0:
    cmp r0, #0x0
    mov r0, r4
    ldr r1, [r0, #0x0]
    movne r5, #0x3e
    ldr r1, [r1, #0x148]
    moveq r5, #0x3d
    blx r1
    mov r1, r5
    bl func_0202718c
    ldr r2, [r4, #0x558]
    mov r1, r0
    cmp r2, #0x7d0
    ldr r2, [r4, #0x554]
    ble L_02049a20
    ldr r0, =0xdac
    cmp r2, r0
    bge L_02049a20
    ldrb r0, [r4, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r3, #0x1
    movne r3, #0x0
    add r2, r4, r0
    swpb r0, r3, [r2]
L_02049a20:
    mov r0, r4
    bl func_020488e4
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02049a34:
    ldr r0, [r4, #0x1b8]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02049a64:
    ldr r0, [r4, #0x1b8]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, lr}
    bxeq lr
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
