#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02009db4();
extern void func_0204eab0();
extern void func_0204eb30();
extern void r1();
extern char data_020d415c[];
extern char data_020d462c[];
extern char data_02118938[];
extern char data_02118964[];
extern char data_0213d440[];
// clang-format off
asm void func_0205ff5c(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, [sp, #0x18]
    ldr r4, =data_02118938
    str ip, [sp, #0x0]
    str r4, [sp, #0x4]
    mov r4, #0x3
    str r4, [sp, #0x8]
    mov ip, #0x1
    mov r4, r0
    str ip, [sp, #0xc]
    bl func_02009db4
    ldr r1, =data_02118964
    ldr r0, =0x776
    ldr r2, =0x777
    ldr r3, =0x778
    str r1, [r4, #0x0]
    add r1, r4, r0
    mov ip, #0x0
    swpb r0, ip, [r1]
    add r1, r4, r2
    swpb r0, ip, [r1]
    add r1, r4, r3
    swpb r0, ip, [r1]
    ldr r3, =data_020d415c
    str ip, [r4, #0x77c]
    ldrsh r1, [r3, #0x0]
    add r2, r4, #0x100
    mov r0, r4
    strh r1, [r2, #0xd0]
    ldrsh ip, [r3, #0x2]
    add r1, r4, #0x1d0
    strh ip, [r2, #0xd2]
    ldrh ip, [r3, #0x4]
    strh ip, [r2, #0xd4]
    ldrh r3, [r3, #0x6]
    strh r3, [r2, #0xd6]
    bl func_01ff9acc
    mov r0, r4
    ldr r1, [r0, #0x0]
    ldr r1, [r1, #0x88]
    blx r1
    ldr r0, =0x1f3
    ldr r2, =data_0213d440
    add r1, r4, r0
    mov r3, #0x1
    swpb r0, r3, [r1]
    add r1, r2, #0x28
    swpb r0, r3, [r1]
    bl func_0204eb30
    ldr r1, =data_020d462c
    bl func_0204eab0
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
