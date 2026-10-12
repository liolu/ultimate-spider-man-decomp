#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_0202f64c();
extern void func_020339f8();
extern void func_0203cde8();
extern void func_0206054c();
extern void func_02061cc4();
extern void func_02064fc8();
extern void r1();
extern char data_020b5734[];
extern char data_020b5748[];
extern char data_020b82f4[];
extern char data_020b82fc[];
extern char data_02104844[];
extern char data_02121900[];
// clang-format off
asm void func_02045e3c(void) {
    stmfd sp!, {r4, r5, lr}
    sub sp, sp, #0x4
    ldrb ip, [sp, #0x10]
    mov r5, r0
    mov r4, r2
    str ip, [sp, #0x0]
    bl func_0203cde8
    ldr r0, =data_02104844
    ldr r1, =data_02121900
    mov r2, r4
    str r0, [r5, #0x0]
    mov r3, #0x0
    add r0, r5, #0x250
    str r3, [r5, #0x244]
    bl func_02061cc4
    ldr r1, =data_020b5734
    ldr r0, =0x47c
    ldr r2, [r1, #0x0]
    ldr r1, =data_020b5748
    add r0, r5, r0
    bl func_020339f8
    ldr r0, =0x488
    ldr r1, =0x489
    ldr ip, =0x48a
    ldr lr, =0x498
    add r2, r5, r0
    add r3, r5, r1
    add ip, r5, ip
    add lr, r5, lr
    mov r0, #0x0
    swpb r1, r0, [r2]
    ldr r2, =0x499
    swpb r1, r0, [r3]
    add r2, r5, r2
    swpb r1, r0, [ip]
    ldr r3, =0x49a
    str r0, [r5, #0x48c]
    swpb r1, r0, [lr]
    add r3, r5, r3
    swpb r1, r0, [r2]
    add r2, r5, #0xa8
    swpb r1, r0, [r3]
    ldr ip, =data_020b82f4
    str r0, [r5, #0x49c]
    swpb r0, r0, [r2]
    add r2, r5, #0x100
    ldrsh r1, [ip, #0x0]
    ldr r3, =data_020b82fc
    mov r0, r5
    strh r1, [r2, #0xb4]
    ldrsh lr, [ip, #0x2]
    add r1, r5, #0x1b4
    strh lr, [r2, #0xb6]
    ldrh lr, [ip, #0x4]
    strh lr, [r2, #0xb8]
    ldrh ip, [ip, #0x6]
    strh ip, [r2, #0xba]
    ldrsh ip, [r3, #0x0]
    strh ip, [r2, #0xbc]
    ldrsh ip, [r3, #0x2]
    strh ip, [r2, #0xbe]
    ldrh ip, [r3, #0x4]
    strh ip, [r2, #0xc0]
    ldrh r3, [r3, #0x6]
    strh r3, [r2, #0xc2]
    bl func_01ff9acc
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    mov r0, r5
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x1a4]
    blx r1
    mov r0, #0xd8
    bl func_02064fc8
    cmp r0, #0x0
    beq L_02045f7c
    mov r1, r4
    bl func_0206054c
L_02045f7c:
    str r0, [r5, #0x490]
    mov r0, r5
    bl func_0202f64c
    mov r0, r5
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
