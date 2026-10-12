#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006428();
extern void func_02046d84();
extern void func_0204eab0();
extern void func_0204eb30();
extern void func_0205f2f4();
extern char data_020d42c0[];
extern char data_020d4308[];
extern char data_020d432c[];
extern char data_02143e44[];
// clang-format off
asm void func_0205f734(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_0205f2f4
    ldrb r0, [r4, #0x9e8]
    cmp r0, #0x0
    bne L_0205f7ac
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
    addgt sp, sp, #0x4
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d42c0
    bl func_0204eab0
    ldr r0, =0x9e8
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0205f7ac:
    ldrb r0, [r4, #0x9e9]
    cmp r0, #0x0
    bne L_0205f808
    mov r0, r4
    bl func_02006428
    mov r5, r0
    ldr r0, =data_02143e44
    bl func_02046d84
    add r0, r0, r0, lsr #0x1f
    cmp r5, r0, asr #0x1
    addgt sp, sp, #0x4
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d4308
    bl func_0204eab0
    ldr r0, =0x9e9
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0205f808:
    ldrb r0, [r4, #0x9ea]
    cmp r0, #0x0
    addne sp, sp, #0x4
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
    addgt sp, sp, #0x4
    ldmgtfd sp!, {r4, r5, lr}
    bxgt lr
    bl func_0204eb30
    ldr r1, =data_020d432c
    bl func_0204eab0
    ldr r0, =0x9ea
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
