#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ffd554();
extern void func_02004004();
extern void func_02006844();
extern void func_0202f5f0();
extern void func_02056ad0();
extern void func_0207c284();
extern void func_02085700();
extern void func_020857f8();
extern void r1();
extern char data_020a77bc[];
extern char data_0214876c[];
// clang-format off
asm void func_02007128(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x30
    mov r4, r0
    ldrb r1, [r4, #0x1f1]
    cmp r1, #0x0
    beq L_0200715c
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x128]
    blx r1
    ldr r0, =0x1f1
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_0200715c:
    ldr r0, [r4, #0x17c]
    ldrh r0, [r0, #0x0]
    mov r0, r0, lsl #0x19
    movs r0, r0, lsr #0x1f
    beq L_020071c4
    ldr r3, [r4, #0x4c]
    ldr r2, [r4, #0x50]
    add r0, sp, #0x20
    str r3, [sp, #0xc]
    str r2, [sp, #0x10]
    ldrh r1, [r4, #0x3a]
    sub r1, r2, r1, lsr #0x1
    str r3, [sp, #0x4]
    str r3, [sp, #0x18]
    str r1, [sp, #0x10]
    str r1, [sp, #0x8]
    str r1, [sp, #0x1c]
    ldr r1, [r4, #0x184]
    str r1, [sp, #0x14]
    bl func_02056ad0
    add r1, sp, #0x14
    mov r2, #0x2
    add r0, sp, #0x20
    str r2, [sp, #0x24]
    str r1, [sp, #0x28]
    bl func_0202f5f0
L_020071c4:
    mov r0, r4
    bl func_02004004
    cmp r0, #0x0
    beq L_020071fc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x140]
    blx r1
    cmp r0, #0x0
    beq L_020071fc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x124]
    blx r1
L_020071fc:
    ldr r0, [r4, #0x1cc]
    cmp r0, #0x0
    ble L_02007210
    mov r0, r4
    bl func_02006844
L_02007210:
    ldr r0, [r4, #0x1c4]
    cmp r0, #0x0
    addgt r1, r4, #0x1c4
    ldrgt r0, [r1, #0x0]
    subgt r0, r0, #0x1
    strgt r0, [r1, #0x0]
    ldr r0, [r4, #0x1c4]
    cmp r0, #0x0
    bne L_02007294
    ldrb r0, [r4, #0x191]
    cmp r0, #0x0
    bne L_02007294
    ldr r0, [r4, #0xbc]
    bl func_020857f8
    cmp r0, #0x0
    beq L_02007294
    ldr r0, [r4, #0xbc]
    mov r1, #0x3
    bl func_02085700
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02007294
    ldr r1, [r4, #0x1c0]
    cmp r1, #0x0
    beq L_02007294
    mov r2, #0x0
    ldr r0, =data_0214876c
    mov r3, r2
    str r2, [sp, #0x0]
    bl func_0207c284
    ldr r0, =data_020a77bc
    ldr r0, [r0, #0x0]
    str r0, [r4, #0x1c4]
L_02007294:
    add r2, r4, #0x1c
    ldrb r1, [r2, #0x0]
    mov r0, r4
    bic r1, r1, #0x10
    swpb r1, r1, [r2]
    bl func_01ffd554
    add sp, sp, #0x30
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
