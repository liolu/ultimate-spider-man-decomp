#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020012d0();
extern void func_02001c58();
extern void func_02001c78();
extern void func_02002d84();
extern void func_02004024();
extern void func_02012c44();
extern void func_02057b80();
extern void func_02058688();
extern void r1();
extern void r2();
extern char data_020a7840[];
// clang-format off
asm void func_0205098c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    mov r5, r0
    ldr r2, [r5, #0x748]
    mov r1, #0xc
    mul r1, r2, r1
    ldr r2, [r5, #0x74c]
    mvn r4, #0x0
    add r3, r2, r1
    ldr r7, [r2, r1]
    ldr r6, [r3, #0x4]
    bl func_02001c58
    cmp r0, #0x0
    beq L_020509f8
    cmp r6, #0x0
    mov r8, #0x0
    ble L_020509f8
L_020509cc:
    mov r0, r5
    ldr r2, [r0, #0x0]
    ldr r1, [r7, r8, lsl #0x2]
    ldr r2, [r2, #0x1b8]
    blx r2
    cmp r0, #0x0
    ldrne r4, [r7, r8, lsl #0x2]
    bne L_020509f8
    add r8, r8, #0x1
    cmp r8, r6
    blt L_020509cc
L_020509f8:
    ldr r0, [r5, #0x6f4]
    cmp r0, #0x0
    beq L_02050a70
    mov r0, r5
    bl func_02058688
    cmp r0, #0x0
    bne L_02050a70
    ldrb r0, [r5, #0x15e]
    cmp r0, #0x0
    ldr r0, =0x15e
    moveq r2, #0x1
    movne r2, #0x0
    add r1, r5, r0
    swpb r0, r2, [r1]
    ldr r0, [r5, #0x178]
    add r0, r0, #0x4
    bl func_020012d0
    mov r4, r0
    ldr r0, =data_020a7840
    bl func_020012d0
    mov r1, r0
    mov r0, r5
    add r1, r1, r4
    bl func_02004024
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0xd0]
    blx r1
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02050a70:
    mvn r0, #0x0
    cmp r4, r0
    beq L_02050aa8
    mov r0, r5
    mov r1, r4
    bl func_02002d84
    ldr r0, [r5, #0x708]
    add r0, r0, #0x20
    bl func_020012d0
    mov r1, r0
    mov r0, r5
    bl func_02001c78
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
L_02050aa8:
    mov r0, r5
    bl func_02057b80
    ldr r1, [r5, #0x178]
    ldr r1, [r1, #0x18]
    ldr r1, [r1, #0xc]
    cmp r0, r1
    ldmlefd sp!, {r4, r5, r6, r7, r8, lr}
    bxle lr
    mov r0, r5
    bl func_02012c44
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
