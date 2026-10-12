#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006428();
extern void func_02009c00();
extern void func_02046d84();
extern void func_02046f7c();
extern void func_02046fcc();
extern void func_0204eab0();
extern void func_0204eb30();
extern char data_020d4278[];
extern char data_020d429c[];
extern char data_020d42e4[];
extern char data_020d4350[];
extern char data_020d4374[];
extern char data_020d43e0[];
extern char data_02143e44[];
// clang-format off
asm void func_0204a46c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    mov r4, r0
    bl func_02009c00
    ldrb r0, [r4, #0x77c]
    cmp r0, #0x0
    bne L_0204a514
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
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    bne L_0204a4dc
    ldr r0, =data_02143e44
    bl func_02046f7c
    cmp r0, #0x0
    beq L_0204a4ec
L_0204a4dc:
    bl func_0204eb30
    ldr r1, =data_020d4278
    bl func_0204eab0
    b L_0204a4f8
L_0204a4ec:
    bl func_0204eb30
    ldr r1, =data_020d4350
    bl func_0204eab0
L_0204a4f8:
    ldr r0, =0x77c
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204a514:
    ldrb r0, [r4, #0x77d]
    cmp r0, #0x0
    bne L_0204a5a0
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
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    bne L_0204a568
    ldr r0, =data_02143e44
    bl func_02046f7c
    cmp r0, #0x0
    beq L_0204a578
L_0204a568:
    bl func_0204eb30
    ldr r1, =data_020d429c
    bl func_0204eab0
    b L_0204a584
L_0204a578:
    bl func_0204eb30
    ldr r1, =data_020d4374
    bl func_0204eab0
L_0204a584:
    ldr r0, =0x77d
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
L_0204a5a0:
    ldrb r0, [r4, #0x77e]
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
    ldr r0, =data_02143e44
    bl func_02046fcc
    cmp r0, #0x0
    bne L_0204a600
    ldr r0, =data_02143e44
    bl func_02046f7c
    cmp r0, #0x0
    beq L_0204a610
L_0204a600:
    bl func_0204eb30
    ldr r1, =data_020d42e4
    bl func_0204eab0
    b L_0204a61c
L_0204a610:
    bl func_0204eb30
    ldr r1, =data_020d43e0
    bl func_0204eab0
L_0204a61c:
    ldr r0, =0x77e
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
