#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02077db8();
extern void func_02077dbc();
extern void func_020780a0();
extern void func_020781f0();
extern void func_02078258();
extern void func_020782c0();
extern void func_020782ec();
extern void func_02079708();
extern void func_0207af9c();
extern char data_0214868c[];
// clang-format off
asm void func_02079558(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x30
    add r7, sp, #0x18
    mov r8, #0x1
    swpb r4, r8, [r7]
    add r5, sp, #0x19
    mov r4, r1
    mov r1, r3
    swpb r3, r8, [r5]
    add r6, sp, #0x1a
    swpb r3, r8, [r6]
    mvn lr, #0x80000000
    mov ip, #0x80000000
    str lr, [sp, #0x1c]
    str ip, [sp, #0x20]
    str r2, [sp, #0x0]
    add r3, sp, #0x1c
    str r3, [sp, #0x4]
    add r2, sp, #0x20
    str r2, [sp, #0x8]
    str r7, [sp, #0xc]
    str r5, [sp, #0x10]
    ldr r2, [sp, #0x48]
    mov r3, r4
    mov r5, r0
    str r6, [sp, #0x14]
    bl func_02079708
    ldr r0, =data_0214868c
    mov r4, #0x0
    ldr r1, [r0, #0x14]
    cmp r1, #0x19
    bne L_020795e8
    ldr r1, [r0, #0x28]
    ldr r0, [r0, #0x4]
    cmp r1, r0
    movne r4, r8
L_020795e8:
    ldr r0, =data_0214868c
    ldr r1, [r5, #0x480]
    ldr r0, [r0, #0x4]
    subs r1, r1, r0
    ldr r0, [r5, #0x470]
    rsbmi r1, r1, #0x0
    ldr r0, [r0, #0x128]
    cmp r1, r0
    bgt L_02079634
    mov r0, r5
    bl func_0207af9c
    cmp r0, #0x0
    addne sp, sp, #0x30
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
    cmp r4, #0x0
    addne sp, sp, #0x30
    ldmnefd sp!, {r4, r5, r6, r7, r8, lr}
    bxne lr
L_02079634:
    ldrb r1, [sp, #0x1a]
    add r0, sp, #0x24
    str r1, [sp, #0x0]
    ldrb r1, [sp, #0x18]
    str r1, [sp, #0x4]
    ldrb r3, [sp, #0x19]
    ldr r1, [sp, #0x20]
    ldr r2, [sp, #0x1c]
    bl func_020780a0
    mov r0, r5
    bl func_0207af9c
    cmp r0, #0x0
    bne L_02079678
    ldr r0, =data_0214868c
    ldr r0, [r0, #0x14]
    cmp r0, #0x19
    bne L_020796ec
L_02079678:
    add r0, r5, #0x4c0
    bl func_02077db8
    ldr r1, =data_0214868c
    ldr r2, [r5, #0x480]
    ldr r1, [r1, #0x4]
    mov r4, r0
    cmp r1, r2
    ble L_020796c0
    add r1, sp, #0x24
    mov r2, #0x0
    bl func_02078258
    cmp r0, #0x0
    beq L_020796ec
    add r0, sp, #0x24
    mov r1, r4
    mov r2, #0x0
    bl func_020782ec
    b L_020796ec
L_020796c0:
    cmp r1, r2
    bge L_020796ec
    add r1, sp, #0x24
    mov r2, #0x0
    bl func_020781f0
    cmp r0, #0x0
    beq L_020796ec
    add r0, sp, #0x24
    mov r1, r4
    mov r2, #0x0
    bl func_020782c0
L_020796ec:
    add r1, sp, #0x24
    add r0, r5, #0x4c0
    bl func_02077dbc
    add sp, sp, #0x30
    ldmfd sp!, {r4, r5, r6, r7, r8, lr}
    bx lr
}
// clang-format on
