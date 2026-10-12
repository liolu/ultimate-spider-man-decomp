#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000e64();
extern void func_02006428();
extern void func_02009c00();
extern void func_0202f5f0();
extern void func_02046d84();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_02085700();
extern char data_020d4428[];
extern char data_020d444c[];
extern char data_021167ac[];
extern char data_02143e44[];
// clang-format off
asm void func_02051740(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    mov r4, r0
    ldr r0, [r4, #0x180]
    cmp r0, #0x3f
    beq L_02051794
    cmp r0, #0x50
    bne L_020517d0
    ldr r0, [r4, #0xbc]
    mov r1, #0x4
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ble L_020517d0
    ldr r0, =data_021167ac
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    b L_020517d0
L_02051794:
    ldr r1, [r4, #0xbc]
    ldr r0, [r1, #0x9c]
    ldr r2, [r1, #0xb4]
    ldrh r1, [r0, #0x4]
    ldrh r0, [r0, #0x6]
    mov r2, r2, asr #0x2
    sub r2, r2, r1
    sub r0, r0, r1
    cmp r2, r0
    bne L_020517d0
    ldr r0, [r4, #0xa4]
    mov r1, #0x31
    add r0, r0, #0x1c
    mov r2, #0x700
    bl func_02000e64
L_020517d0:
    mov r0, r4
    bl func_02009c00
    ldrb r0, [r4, #0x77e]
    cmp r0, #0x0
    bne L_02051834
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    add r0, r0, r0, lsr #0x1f
    cmp r5, r0, asr #0x1
    addgt sp, sp, #0xc
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d4428
    bl func_0204eab0
    ldr r0, =0x77e
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_02051834:
    ldrb r0, [r4, #0x77f]
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r4, r5, lr}
    bxne lr
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    mov r1, r0, asr #0x1
    add r0, r0, r1, lsr #0x1e
    cmp r5, r0, asr #0x2
    addgt sp, sp, #0xc
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d444c
    bl func_0204eab0
    ldr r0, =0x77f
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
