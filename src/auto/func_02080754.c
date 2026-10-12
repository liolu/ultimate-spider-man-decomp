#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202f5f0();
extern void func_0207036c();
extern void func_020873dc();
extern void func_020883c0();
extern void func_0208b6e4();
extern char data_020b42c4[];
extern char data_0213d588[];
// clang-format off
asm void func_02080754(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4
    mov r4, r0
    mov r0, #0x2
    mov r1, #0x0
    mov r2, #0x1
    bl func_0207036c
    ldr r3, =data_0213d588
    mov r5, #0x0
    ldr r0, [r3, #0x140]
    add r1, r3, #0x34
    str r5, [r3, #0x4]
    cmp r0, #0x0
    swpb r0, r5, [r1]
    ble L_020807b0
    mov r2, r5
    mov r0, r3
L_02080798:
    str r2, [r3, #0x40]
    ldr r1, [r0, #0x140]
    add r5, r5, #0x1
    cmp r5, r1
    add r3, r3, #0xc
    blt L_02080798
L_020807b0:
    ldr r3, =data_0213d588
    mov r5, #0x0
    ldr r0, [r3, #0x140]
    str r5, [r3, #0x8]
    cmp r0, #0x0
    ble L_020807e8
    mov r2, r5
    mov r0, r3
L_020807d0:
    str r2, [r3, #0x44]
    ldr r1, [r0, #0x140]
    add r5, r5, #0x1
    cmp r5, r1
    add r3, r3, #0xc
    blt L_020807d0
L_020807e8:
    ldr r3, =data_0213d588
    mov r5, #0x0
    ldr r0, [r3, #0x140]
    str r5, [r3, #0xc]
    cmp r0, #0x0
    ble L_02080820
    mov r2, r5
    mov r0, r3
L_02080808:
    str r2, [r3, #0x48]
    ldr r1, [r0, #0x140]
    add r5, r5, #0x1
    cmp r5, r1
    add r3, r3, #0xc
    blt L_02080808
L_02080820:
    bl func_020873dc
    add r1, r0, #0x30
    mov r0, #0x0
    swpb r0, r0, [r1]
    bl func_020873dc
    mov ip, #0x0
    str ip, [r0, #0x1c]
    ldr r1, [r0, #0x1c]
    add r2, r0, #0x21
    str r1, [r0, #0x18]
    swpb r1, ip, [r2]
    add r2, r0, #0x20
    ldrb r1, [r0, #0x21]
    add r5, r0, #0x23
    add r6, r0, #0x22
    swpb r1, r1, [r2]
    mov r3, #0x1
    swpb r1, ip, [r5]
    ldrb r1, [r0, #0x23]
    swpb r1, r1, [r6]
    str r3, [r0, #0x24]
    mov r2, ip
L_02080878:
    add r1, r0, ip, lsl #0x4
    str r2, [r1, #0xb8]
    ldr r5, [r1, #0xb8]
    add ip, ip, #0x1
    str r5, [r1, #0xb4]
    add r5, r1, #0xbd
    swpb lr, r2, [r5]
    add lr, r1, #0xbc
    ldrb r5, [r1, #0xbd]
    add r6, r1, #0xbf
    add r7, r1, #0xbe
    swpb r5, r5, [lr]
    cmp ip, #0x10
    swpb r5, r2, [r6]
    ldrb r5, [r1, #0xbf]
    swpb r5, r5, [r7]
    str r3, [r1, #0xc0]
    blt L_02080878
    ldr r0, =data_020b42c4
    bl func_0202f5f0
    bl func_0208b6e4
    bl func_020883c0
    mov r0, #0xc
    str r0, [r4, #0x4]
    add sp, sp, #0x4
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
