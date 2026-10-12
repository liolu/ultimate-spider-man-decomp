#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_02070344();
extern void func_020801d0();
extern void func_020803e0();
extern void func_02080710();
extern void func_02080754();
extern void func_020808ec();
extern void func_02080a78();
extern void func_02080aac();
extern void func_02080ac0();
extern void func_02080acc();
extern void func_02080c68();
extern void func_02080d1c();
extern void func_020823b4();
extern void func_02087f14();
extern void func_0208bfbc();
extern void func_0208bfcc();
extern void r1();
extern char data_0211c328[];
extern char data_0211c334[];
extern char data_0211c34c[];
extern char data_0211c358[];
extern char data_0211c398[];
extern char data_02143e44[];
extern char data_02150b64[];
extern char data_02150b68[];
extern char data_02150b6c[];
extern char data_02150bb8[];
extern char data_ov000_0215602c[];
// clang-format off
asm void func_02080d5c(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x34
    mov r4, r0
    ldrb r1, [r4, #0x535]
    cmp r1, #0x1
    bne L_02080d88
    bl func_020801d0
    ldr r0, =0x535
    mov r2, #0x0
    add r1, r4, r0
    swpb r0, r2, [r1]
L_02080d88:
    bl func_0208bfcc
    cmp r0, #0x0
    beq L_02080dc4
    ldr r0, =data_02150b64
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02080dc4
    bl func_0208bfbc
    ldr r0, [r0, #0x8]
    cmp r0, #0x8
    beq L_02080dc4
    bl func_0208bfbc
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
L_02080dc4:
    ldrb r0, [r4, #0x52c]
    cmp r0, #0x1
    bne L_02080e18
    ldr r0, [r4, #0x530]
    cmp r0, #0xb4
    addne r1, r4, #0x530
    ldrne r0, [r1, #0x0]
    addne sp, sp, #0x34
    addne r0, r0, #0x1
    strne r0, [r1, #0x0]
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldr r0, =data_0211c334
    add r3, sp, #0x0
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080e18:
    ldr r0, =data_02150b64
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02080fc0
    add r0, r4, #0x10
    bl func_02087f14
    cmp r0, #0x1
    bne L_02080e40
    mov r0, r4
    bl func_020803e0
L_02080e40:
    ldr r0, [r4, #0x4]
    cmp r0, #0xc
    addls pc, pc, r0, lsl #0x2
    b L_02081098
L_02080e50:
    b L_02080e84
    b L_02080e98
    b L_02080eac
    b L_02080ec0
    b L_02081098
    b L_02080ed4
    b L_02080ee8
    b L_02080f04
    b L_02080f70
    b L_02080f84
    b L_02081098
    b L_02080f98
    b L_02080fac
L_02080e84:
    mov r0, r4
    bl func_02080d1c
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080e98:
    mov r0, r4
    bl func_02080c68
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080eac:
    mov r0, r4
    bl func_02080aac
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080ec0:
    mov r0, r4
    bl func_02080a78
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080ed4:
    mov r0, r4
    bl func_02080acc
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080ee8:
    ldr r0, [r4, #0xc]
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x8]
    blx r1
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080f04:
    ldr r0, =data_02150bb8
    bl func_020823b4
    ldr r1, =data_02143e44
    mov r2, #0x0
    str r2, [r1, #0x8]
    str r0, [r1, #0x4]
    ldr r0, [r4, #0xc]
    cmp r0, #0x0
    beq L_02080f34
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x4]
    blx r1
L_02080f34:
    mov r6, #0x0
    ldr r0, =data_0211c328
    str r6, [r4, #0xc]
    ldr r3, =data_02150b68
    add r5, sp, #0xc
    ldmia r0, {r0, r1, r2}
    stmia r5, {r0, r1, r2}
    mov r0, r5
    str r6, [r3, #0x0]
    bl func_0202f5f0
    mov r0, #0x8
    add sp, sp, #0x34
    str r0, [r4, #0x4]
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080f70:
    mov r0, r4
    bl func_020808ec
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080f84:
    mov r0, r4
    bl func_02080ac0
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080f98:
    mov r0, r4
    bl func_02080754
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080fac:
    mov r0, r4
    bl func_02080710
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02080fc0:
    cmp r0, #0x1
    addne sp, sp, #0x34
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    bl func_0208bfcc
    cmp r0, #0x0
    addne sp, sp, #0x34
    ldmnefd sp!, {r4, r5, r6, r7, lr}
    bxne lr
    ldrb r0, [r4, #0x534]
    cmp r0, #0x0
    bne L_02081070
    mov r1, #0x1
    mov r2, r1
    mov r0, #0x2
    bl func_02070344
    ldr r0, =data_0211c34c
    ldr ip, =data_02150b6c
    add r3, sp, #0x18
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    ldr r7, =data_ov000_0215602c
    ldr r5, =data_0211c398
    mov r6, #0x0
    add r2, ip, #0xc
    mov lr, #0x1
    swpb r1, lr, [r2]
    add r3, ip, #0xd
    swpb r1, lr, [r3]
    str r7, [ip, #0x0]
    str r6, [ip, #0x4]
    str r5, [ip, #0x8]
    bl func_0202f5f0
    ldr r0, =0x52c
    mov r2, #0x1
    add r1, r4, r0
    swpb r0, r2, [r1]
    ldr r1, =data_02150b64
    mov r0, r6
    swpb r0, r0, [r1]
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
L_02081070:
    mov r1, #0x1
    mov r2, r1
    mov r0, #0x2
    bl func_02070344
    ldr r0, =data_0211c358
    add r3, sp, #0x24
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r0, r3
    bl func_0202f5f0
L_02081098:
    add sp, sp, #0x34
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
