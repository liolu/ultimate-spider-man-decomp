#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_02033fe0();
extern void func_02033ff0();
extern void func_02034000();
extern void func_02042b7c();
extern void func_02046d8c();
extern void func_02082158();
extern void func_02082268();
extern void func_0208253c();
extern void func_02082544();
extern void func_02082640();
extern void func_02085d78();
extern void r2();
extern char data_020af318[];
extern char data_0211c59c[];
extern char data_0211e0a4[];
extern char data_0211e0c4[];
extern char data_0211e704[];
extern char data_02143e44[];
extern char data_02150bb8[];
// clang-format off
asm void func_02081d20(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    ldrb ip, [sp, #0x10]
    mov r4, r0
    str ip, [sp, #0x0]
    bl func_02042b7c
    ldr r0, =data_0211c59c
    ldrh r1, [sp, #0x14]
    str r0, [r4, #0x0]
    add r0, r4, #0x200
    strh r1, [r0, #0x6e]
    mov r0, #0x0
    str r0, [r4, #0x270]
    add r1, r4, #0x274
    swpb r0, r0, [r1]
    ldr r0, =data_02143e44
    bl func_02046d8c
    mov r1, r0
    mov r0, r4
    ldr r2, [r0, #0x0]
    ldr r2, [r2, #0x180]
    blx r2
    add r1, r4, #0xa8
    mov ip, #0x1
    swpb r0, ip, [r1]
    mov r3, #0x0
    ldr r0, [r4, #0xbc]
    add r2, r4, #0x15c
    add r1, r0, #0xda
    swpb r0, r3, [r1]
    mov r0, r4
    swpb r1, ip, [r2]
    ldr r1, [r4, #0xbc]
    add r2, r1, #0xd9
    swpb r1, ip, [r2]
    bl func_02034000
    add r0, r4, #0x200
    ldrh r1, [r0, #0x6e]
    mov r0, r4
    bl func_02033ff0
    ldr r0, =data_02150bb8
    bl func_0208253c
    cmp r0, #0x1
    bne L_02081df8
    add r0, r4, #0x200
    ldrh r0, [r0, #0x6e]
    cmp r0, #0x0
    bne L_02081df8
    ldr r2, [r4, #0x270]
    ldr r1, =data_02143e44
    ldr r0, =data_020af318
    str r2, [r1, #0x14]
    bl func_0202f5f0
    b L_02081e2c
L_02081df8:
    ldr r0, =data_02150bb8
    bl func_0208253c
    cmp r0, #0x0
    bne L_02081e2c
    add r0, r4, #0x200
    ldrh r0, [r0, #0x6e]
    cmp r0, #0x0
    beq L_02081e2c
    ldr r2, [r4, #0x270]
    ldr r1, =data_02143e44
    ldr r0, =data_020af318
    str r2, [r1, #0x14]
    bl func_0202f5f0
L_02081e2c:
    add r0, r4, #0x200
    ldrh r2, [r0, #0x6e]
    ldr r1, [r4, #0x270]
    ldr r0, =data_02150bb8
    bl func_02082158
    ldr r0, =data_02150bb8
    bl func_02082268
    cmp r0, #0x0
    beq L_02081e68
    ldr r0, =data_02150bb8
    bl func_02082544
    add r1, r4, #0x200
    ldrh r1, [r1, #0x6e]
    cmp r1, r0
    beq L_02081e74
L_02081e68:
    mov r0, r4
    mov r1, #0x0
    bl func_02033fe0
L_02081e74:
    add r0, r4, #0x200
    ldrh r1, [r0, #0x6e]
    ldr r0, =data_02150bb8
    bl func_02082640
    ldr r0, [r0, #0x0]
    cmp r0, #0x3
    bne L_02081eec
    add r2, r4, #0x274
    mov r1, #0x1
    swpb r0, r1, [r2]
    add r0, r4, #0x200
    ldrh r0, [r0, #0x6e]
    cmp r0, #0x0
    bne L_02081ecc
    ldr r2, =data_0211e0a4
    ldr r0, [r4, #0xbc]
    ldr r2, [r2, #0x8]
    bl func_02085d78
    ldr r0, [r4, #0xbc]
    mov r1, #0x1
    str r1, [r0, #0xb0]
    b L_02081f1c
L_02081ecc:
    ldr r2, =data_0211e0c4
    ldr r0, [r4, #0xbc]
    ldr r2, [r2, #0x8]
    bl func_02085d78
    ldr r0, [r4, #0xbc]
    mov r1, #0x1
    str r1, [r0, #0xb0]
    b L_02081f1c
L_02081eec:
    add r0, r4, #0x200
    ldrh r0, [r0, #0x6e]
    cmp r0, #0x0
    beq L_02081f1c
    ldr r1, =data_0211e704
    ldr r0, [r4, #0xbc]
    ldr r2, [r1, #0x8]
    mov r1, #0x1
    bl func_02085d78
    ldr r0, [r4, #0xbc]
    mov r1, #0x1
    str r1, [r0, #0xb0]
L_02081f1c:
    mov r0, r4
    add sp, sp, #0x8
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
