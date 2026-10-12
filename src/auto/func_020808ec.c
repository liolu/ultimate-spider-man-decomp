#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020873dc();
extern void func_02089cfc();
extern void func_0208b6e4();
extern char data_0213d588[];
// clang-format off
asm void func_020808ec(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    bl func_0208b6e4
    bl func_02089cfc
    bl func_0208b6e4
    ldr r0, [r0, #0xc]
    cmp r0, #0xa
    ldmnefd sp!, {r4, r5, r6, lr}
    bxne lr
    mov r0, #0x9
    ldr r3, =data_0213d588
    str r0, [r4, #0x4]
    ldr r0, [r3, #0x140]
    mov r4, #0x0
    add r1, r3, #0x34
    mov r2, #0x1
    str r4, [r3, #0x4]
    cmp r0, #0x0
    swpb r0, r2, [r1]
    ble L_0208095c
    mov r2, r4
    mov r0, r3
L_02080944:
    str r2, [r3, #0x40]
    ldr r1, [r0, #0x140]
    add r4, r4, #0x1
    cmp r4, r1
    add r3, r3, #0xc
    blt L_02080944
L_0208095c:
    ldr r3, =data_0213d588
    mov r4, #0x0
    ldr r0, [r3, #0x140]
    str r4, [r3, #0x8]
    cmp r0, #0x0
    ble L_02080994
    mov r2, r4
    mov r0, r3
L_0208097c:
    str r2, [r3, #0x44]
    ldr r1, [r0, #0x140]
    add r4, r4, #0x1
    cmp r4, r1
    add r3, r3, #0xc
    blt L_0208097c
L_02080994:
    ldr r3, =data_0213d588
    mov r4, #0x0
    ldr r0, [r3, #0x140]
    str r4, [r3, #0xc]
    cmp r0, #0x0
    ble L_020809cc
    mov r2, r4
    mov r0, r3
L_020809b4:
    str r2, [r3, #0x48]
    ldr r1, [r0, #0x140]
    add r4, r4, #0x1
    cmp r4, r1
    add r3, r3, #0xc
    blt L_020809b4
L_020809cc:
    bl func_020873dc
    add r1, r0, #0x30
    mov r0, #0x1
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
    add r4, r0, #0x23
    add r5, r0, #0x22
    swpb r1, r1, [r2]
    mov r3, #0x1
    swpb r1, ip, [r4]
    ldrb r1, [r0, #0x23]
    swpb r1, r1, [r5]
    str r3, [r0, #0x24]
    mov r2, ip
L_02080a24:
    add r1, r0, ip, lsl #0x4
    str r2, [r1, #0xb8]
    ldr r4, [r1, #0xb8]
    add ip, ip, #0x1
    str r4, [r1, #0xb4]
    add r4, r1, #0xbd
    swpb lr, r2, [r4]
    add lr, r1, #0xbc
    ldrb r4, [r1, #0xbd]
    add r5, r1, #0xbf
    add r6, r1, #0xbe
    swpb r4, r4, [lr]
    cmp ip, #0x10
    swpb r4, r2, [r5]
    ldrb r4, [r1, #0xbf]
    swpb r4, r4, [r6]
    str r3, [r1, #0xc0]
    blt L_02080a24
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}
// clang-format on
