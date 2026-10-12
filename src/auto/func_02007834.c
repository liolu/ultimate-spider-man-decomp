#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02002c5c();
extern void func_02012f64();
extern void func_0202f5f0();
extern void func_02057b80();
extern void func_02057bc8();
extern void r2();
extern char data_020acdf4[];
extern char data_020ace00[];
extern char data_020b7f3c[];
extern char data_02143e44[];
// clang-format off
asm void func_02007834(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x20
    mov r4, r0
    bl func_02002c5c
    ldr r0, [r4, #0x180]
    cmp r0, #0x46
    addne sp, sp, #0x20
    ldmnefd sp!, {r4, lr}
    bxne lr
    ldr r0, =data_020b7f3c
    bl func_0202f5f0
    ldr r0, [r4, #0x164]
    ldr r1, =data_02143e44
    ldr r2, [r0, #0xbc]
    ldr r0, [r2, #0x9c]
    ldrh r0, [r0, #0x4]
    mov r0, r0, lsl #0x2
    str r0, [r2, #0xb4]
    ldr r0, [r4, #0x164]
    add r2, r0, #0x1e
    ldrb r0, [r2, #0x0]
    orr r0, r0, #0x2
    swpb r0, r0, [r2]
    ldr r0, [r1, #0x4]
    cmp r0, #0x15
    addne sp, sp, #0x20
    ldmnefd sp!, {r4, lr}
    bxne lr
    mov r0, r4
    bl func_02057bc8
    cmp r0, #0xfa0
    bgt L_020078cc
    mov r0, r4
    bl func_02057b80
    cmp r0, #0xfa0
    addle sp, sp, #0x20
    ldmlefd sp!, {r4, lr}
    bxle lr
L_020078cc:
    ldr r0, =data_020acdf4
    add r3, sp, #0x8
    ldmia r0, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    ldr ip, =data_020ace00
    add r3, sp, #0x14
    ldmia ip, {r0, r1, r2}
    stmia r3, {r0, r1, r2}
    mov r1, r4
    ldr r2, [r1, #0x0]
    add r0, sp, #0x0
    ldr r2, [r2, #0x1e4]
    blx r2
    add r1, sp, #0x0
    add r2, sp, #0x8
    mov r0, r4
    add r3, sp, #0x14
    bl func_02012f64
    add sp, sp, #0x20
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
