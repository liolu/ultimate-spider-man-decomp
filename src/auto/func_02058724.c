#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000e4c();
extern void func_020012d0();
extern void func_02004024();
extern void func_02004524();
extern void func_02027100();
extern void func_0202718c();
extern void func_02064fc8();
extern void func_0208c03c();
extern void r1();
extern void r4();
extern char data_020a7840[];
extern char data_020a7848[];
extern char data_02150c78[];
// clang-format off
asm void func_02058724(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r8, r0
    ldr r0, [r8, #0xa4]
    mov r5, #0x0
    ldr r6, [r0, #0x18]
    ldr r0, [r8, #0x1b8]
    cmp r6, #0x0
    rsblt r6, r6, #0x0
    mov r7, r1
    mov r4, r5
    cmp r0, #0xa
    beq L_020587b4
    ldrb r0, [r8, #0x15e]
    cmp r0, #0x0
    beq L_020587b4
    ldr r0, [r8, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x210]
    cmp r0, #0x0
    bne L_02058798
    ldr r0, [r8, #0x18]
    mov r1, r5
    cmp r0, #0x0
    beq L_02058790
    ldr r0, [r0, #0x210]
    cmp r0, #0x0
    movne r1, r2
L_02058790:
    cmp r1, #0x0
    moveq r2, #0x0
L_02058798:
    cmp r2, #0x0
    bne L_02058820
    ldrh r0, [r8, #0x38]
    ldr r1, [r8, #0x4c]
    sub r0, r1, r0, lsr #0x1
    cmp r0, #0xa
    ble L_02058820
L_020587b4:
    ldrb r0, [r8, #0x15e]
    cmp r0, #0x0
    bne L_02058854
    ldr r0, [r8, #0x14]
    mov r2, #0x1
    ldr r0, [r0, #0x214]
    cmp r0, #0x0
    bne L_020587f8
    ldr r0, [r8, #0x18]
    mov r1, #0x0
    cmp r0, #0x0
    beq L_020587f0
    ldr r0, [r0, #0x214]
    cmp r0, #0x0
    movne r1, r2
L_020587f0:
    cmp r1, #0x0
    moveq r2, #0x0
L_020587f8:
    cmp r2, #0x0
    bne L_02058820
    ldr r0, =data_02150c78
    bl func_0208c03c
    ldrh r1, [r8, #0x38]
    ldr r2, [r8, #0x4c]
    sub r3, r0, #0xa
    add r0, r2, r1, lsr #0x1
    cmp r0, r3
    blt L_02058854
L_02058820:
    mov r0, r8
    bl func_02004524
    ldr r0, [r8, #0x178]
    add r0, r0, #0x4
    bl func_020012d0
    mov r6, r0
    ldr r0, =data_020a7848
    bl func_020012d0
    mov r1, r0
    mov r0, r8
    add r1, r1, r6
    bl func_02004024
    b L_02058910
L_02058854:
    cmp r7, #0x0
    beq L_020588b8
    ldr r0, [r8, #0x6f4]
    ldr r1, [r8, #0x4c]
    ldr r0, [r0, #0x4c]
    cmp r1, r0
    bge L_02058894
    ldr r0, [r8, #0xa4]
    mov r1, r6
    add r0, r0, #0x4
    bl func_02000e4c
    ldrb r0, [r8, #0x15e]
    cmp r0, #0x0
    movne r5, #0x1
    movne r4, #0x0
    b L_02058910
L_02058894:
    ldr r0, [r8, #0xa4]
    rsb r1, r6, #0x0
    add r0, r0, #0x4
    bl func_02000e4c
    ldrb r0, [r8, #0x15e]
    cmp r0, #0x0
    moveq r5, #0x1
    moveq r4, r5
    b L_02058910
L_020588b8:
    ldr r0, [r8, #0x6f4]
    ldr r1, [r8, #0x4c]
    ldr r0, [r0, #0x4c]
    cmp r1, r0
    ble L_020588f0
    ldr r0, [r8, #0xa4]
    mov r1, r6
    add r0, r0, #0x4
    bl func_02000e4c
    ldrb r0, [r8, #0x15e]
    cmp r0, #0x0
    moveq r5, #0x1
    moveq r4, r5
    b L_02058910
L_020588f0:
    ldr r0, [r8, #0xa4]
    rsb r1, r6, #0x0
    add r0, r0, #0x4
    bl func_02000e4c
    ldrb r0, [r8, #0x15e]
    cmp r0, #0x0
    movne r5, #0x1
    movne r4, #0x0
L_02058910:
    cmp r5, #0x0
    ldmeqfd sp!, {r4, r5, r6, r7, r8, lr}
    bxeq lr
    mov r0, r8
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x5d
    bl func_02027100
    cmp r0, #0x0
    bne L_0205895c
    ldr r1, =0x15e
    mov r0, r8
    add r2, r8, r1
    swpb r1, r4, [r2]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x108]
    blx r1
    b L_020589a4
L_0205895c:
    mov r0, #0x4
    bl func_02064fc8
    movs r5, r0
    movne r0, #0x0
    strne r0, [r5, #0x0]
    mov r0, r8
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x148]
    blx r1
    mov r1, #0x5d
    bl func_0202718c
    mov r1, r0
    mov r0, r8
    ldr r4, [r0, #0x0]
    mov r2, r5
    ldr r4, [r4, #0x10c]
    mov r3, #0x1
    blx r4
L_020589a4:
    ldr r0, [r8, #0x178]
    add r0, r0, #0x4
    bl func_020012d0
    mov r4, r0
    ldr r0, =data_020a7840
    bl func_020012d0
    mov r1, r0
    mov r0, r8
    add r1, r1, r4
    bl func_02004024
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
