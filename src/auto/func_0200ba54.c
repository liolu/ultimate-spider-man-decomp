#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8114();
extern void func_01ff9b20();
extern void func_02000e8c();
extern void func_02024c20();
extern void func_0202eabc();
extern void func_02062fc0();
extern void func_02064fc8();
extern void func_0206fb3c();
extern char data_020b532c[];
extern char data_020efa38[];
// clang-format off
asm void func_0200ba54(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0xc
    ldrb r3, [sp, #0x34]
    mov r2, #0x0
    mov r4, r1
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    ldrb r3, [sp, #0x30]
    ldr r1, [r4, #0x0]
    add r2, sp, #0x28
    mov r5, r0
    bl func_02062fc0
    ldr r1, =data_020efa38
    mov r0, #0x0
    str r1, [r5, #0x0]
    str r4, [r5, #0x178]
    str r0, [r5, #0x17c]
    str r0, [r5, #0x180]
    mov r0, #0x1e
    str r0, [r5, #0x184]
    ldr r0, [r5, #0xbc]
    mov r3, #0x1
    add r1, r0, #0xda
    swpb r0, r3, [r1]
    ldr r1, [r4, #0x20]
    add r0, r4, #0x28
    str r1, [r5, #0x74]
    ldr r1, [r4, #0x24]
    add ip, r5, #0x7c
    str r1, [r5, #0x78]
    ldmia r0, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    add lr, r4, #0x34
    add ip, r5, #0x88
    ldmia lr, {r0, r1, r2}
    stmia ip, {r0, r1, r2}
    ldrb r0, [r4, #0x1e]
    cmp r0, #0x0
    beq L_0200bb30
    mov r0, r5
    mov r1, r3
    bl func_01ff8114
    mov r0, #0x34
    bl func_02064fc8
    movs r1, r0
    beq L_0200bb18
    bl func_0202eabc
    mov r1, r0
L_0200bb18:
    mov r0, r5
    bl func_01ff9b20
    ldr r0, [r5, #0xa4]
    ldr r1, =data_020b532c
    add r0, r0, #0x1c
    bl func_02000e8c
L_0200bb30:
    ldr r0, [r5, #0x178]
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    beq L_0200bb9c
    mov r0, #0xc8
    bl func_02064fc8
    movs r7, r0
    beq L_0200bb98
    mov r0, #0x40
    add r6, r5, #0x4c
    bl func_02064fc8
    movs r1, r0
    beq L_0200bb78
    ldr r1, [r5, #0x178]
    mov r2, #0x0
    ldr r1, [r1, #0x8]
    bl func_02024c20
    mov r1, r0
L_0200bb78:
    mov ip, #0x0
    str ip, [sp, #0x0]
    mov r0, r7
    mov r2, r6
    mov r3, #0x1
    str ip, [sp, #0x4]
    bl func_0206fb3c
    mov r7, r0
L_0200bb98:
    str r7, [r5, #0x17c]
L_0200bb9c:
    add r2, r5, #0x1e
    ldrb r1, [r2, #0x0]
    add r3, r5, #0x1c
    mov r0, r5
    bic r1, r1, #0x2
    swpb r1, r1, [r2]
    ldrb r2, [r3, #0x0]
    ldrb r1, [r4, #0x1d]
    bic r2, r2, #0x80
    and r1, r1, #0x1
    orr r1, r2, r1, lsl #0x7
    swpb r1, r1, [r3]
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
