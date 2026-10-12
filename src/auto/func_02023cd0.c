#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffb0b8();
extern void func_01ffbcc4();
extern void func_02006428();
extern void func_02009c00();
extern void func_02023c50();
extern void func_0202f5f0();
extern void func_02046d84();
extern void func_02047d94();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_02064fc8();
extern void func_02085700();
extern char data_020b8740[];
extern char data_020d41e8[];
extern char data_020d453c[];
extern char data_020d4578[];
extern char data_020d45b4[];
extern char data_020f8bac[];
extern char data_02143e44[];
// clang-format off
asm void func_02023cd0(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x2c
    mov r4, r0
    ldr r1, [r4, #0x748]
    cmp r1, #0x1
    bne L_02023cec
    bl func_02023c50
L_02023cec:
    ldr r1, [r4, #0x180]
    ldr r0, =0x1a1
    cmp r1, r0
    bne L_02023da4
    ldr r0, [r4, #0xbc]
    mov r1, #0x4
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ble L_02023da4
    ldr r0, =data_020f8bac
    add r3, sp, #0x1c
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    add r0, sp, #0x14
    mov r1, r4
    mov r2, #0x4
    mov r3, #0x0
    bl func_01ffbcc4
    ldr r2, [sp, #0x14]
    ldr r1, [sp, #0x18]
    mov r0, #0x18c
    str r2, [sp, #0xc]
    str r1, [sp, #0x10]
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02023d88
    ldrb r2, [r4, #0x15e]
    ldr r1, =data_020b8740
    mov r3, #0x1
    str r2, [sp, #0x0]
    ldrb r5, [r4, #0x15f]
    add r2, sp, #0xc
    str r5, [sp, #0x4]
    str r3, [sp, #0x8]
    ldmia r2, {r2, r3}
    bl func_02047d94
L_02023d88:
    mov r1, #0x4
    str r1, [r0, #0x184]
    add r3, r0, #0x174
    mov r2, #0x0
    mov r1, #0x2
    swpb r2, r2, [r3]
    bl func_01ffb0b8
L_02023da4:
    mov r0, r4
    bl func_02009c00
    ldrb r0, [r4, #0x784]
    cmp r0, #0x0
    bne L_02023e14
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    mov r1, #0x3
    mul r1, r0, r1
    mov r0, r1, asr #0x1
    add r0, r1, r0, lsr #0x1e
    cmp r5, r0, asr #0x2
    addgt sp, sp, #0x2c
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d41e8
    bl func_0204eab0
    ldr r0, =0x784
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02023e14:
    ldrb r0, [r4, #0x785]
    cmp r0, #0x0
    bne L_02023e70
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    add r0, r0, r0, lsr #0x1f
    cmp r5, r0, asr #0x1
    addgt sp, sp, #0x2c
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d453c
    bl func_0204eab0
    ldr r0, =0x785
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02023e70:
    ldrb r0, [r4, #0x786]
    cmp r0, #0x0
    bne L_02023ed0
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    mov r1, r0, asr #0x1
    add r0, r0, r1, lsr #0x1e
    cmp r5, r0, asr #0x2
    addgt sp, sp, #0x2c
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d4578
    bl func_0204eab0
    ldr r0, =0x786
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02023ed0:
    ldrb r0, [r4, #0x787]
    cmp r0, #0x0
    addne sp, sp, #0x2c
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    ldr r2, =0x66666667
    mov r1, r0, lsr #0x1f
    smull r0, r3, r2, r0
    mov r3, r3, asr #0x2
    add r3, r1, r3
    cmp r5, r3
    addgt sp, sp, #0x2c
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d45b4
    bl func_0204eab0
    ldr r0, =0x787
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x2c
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
