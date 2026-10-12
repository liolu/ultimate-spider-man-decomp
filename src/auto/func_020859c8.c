#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffe38c();
extern void func_01ffe78c();
extern void func_02082e38();
extern void func_02083528();
extern void func_020855d4();
extern void func_020858b0();
extern void func_02085cb8();
extern char data_02150c1c[];
// clang-format off
asm void func_020859c8(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r6, r0
    ldr r2, [r6, #0x88]
    mov r0, #0x14
    mla r4, r2, r0, r6
    ldr r0, [r6, #0xbc]
    mov r5, r1
    cmp r0, #0x0
    beq L_02085a30
    cmp r0, #0x0
    addgt r1, r6, #0xbc
    ldrgt r0, [r1, #0x0]
    subgt r0, r0, #0x1
    strgt r0, [r1, #0x0]
    add r1, r6, #0xc8
    ldr r0, [r1, #0x0]
    sub r0, r0, #0x1
    str r0, [r1, #0x0]
    ldr r0, [r6, #0xc4]
    ldr r1, [r6, #0xc8]
    rsb r0, r0, #0x0
    cmp r1, r0
    ldrle r0, [r6, #0xc0]
    strle r0, [r6, #0xc8]
    b L_02085a38
L_02085a30:
    mov r0, #0x1
    str r0, [r6, #0xc8]
L_02085a38:
    mov r0, r6
    bl func_020855d4
    cmp r0, #0x0
    beq L_02085a7c
    ldr r7, [r6, #0xdc]
    ldr r0, [r6, #0xe0]
    ldr r1, [r6, #0xe8]
    sub r0, r0, r7
    mul r0, r1, r0
    ldr r1, [r6, #0xec]
    bl func_02082e38
    add r0, r7, r0
    str r0, [r6, #0xe4]
    add r1, r6, #0xe8
    ldr r0, [r1, #0x0]
    add r0, r0, #0x1
    str r0, [r1, #0x0]
L_02085a7c:
    ldr r0, [r4, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    mov r0, r6
    mov r1, r5
    bl func_020858b0
    ldr r1, [r6, #0x88]
    mov r0, #0x14
    mla r0, r1, r0, r6
    ldr r1, [r6, #0xb4]
    ldr r0, [r0, #0x10]
    cmp r1, r0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
    ldrb r0, [r6, #0xf1]
    cmp r0, #0x0
    bne L_02085aec
    ldr r0, =data_02150c1c
    mov r1, r6
    ldr r0, [r0, #0x0]
    bl func_02083528
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r4, r5, r6, r7, lr}
    bxeq lr
L_02085aec:
    ldrb r0, [r6, #0xda]
    cmp r0, #0x0
    beq L_02085b14
    ldr r0, [r6, #0xd4]
    ldr r1, [r6, #0xcc]
    ldr r2, [r6, #0xb4]
    bl func_01ffe38c
    mov r0, r6
    bl func_02085cb8
    b L_02085b24
L_02085b14:
    ldr r0, [r6, #0xd4]
    ldr r1, [r4, #0x0]
    ldr r2, [r6, #0xb4]
    bl func_01ffe78c
L_02085b24:
    ldr r1, [r6, #0x88]
    mov r0, #0x14
    mla r0, r1, r0, r6
    ldr r2, [r6, #0xb4]
    add r1, r6, #0x94
    str r2, [r0, #0x10]
    mov r0, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
