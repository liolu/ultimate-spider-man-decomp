#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff9acc();
extern void func_02004024();
extern void func_02008580();
extern void func_0200868c();
extern void func_02009db4();
extern void func_02062a70();
extern void r1();
extern char data_020acdec[];
extern char data_020eccd4[];
extern char data_020ecce8[];
extern char data_020ecd30[];
extern char data_020ecd84[];
extern char data_0211eba0[];
// clang-format off
asm void func_02008584(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x10
    ldr ip, [sp, #0x18]
    ldr r4, =data_020ecd30
    str ip, [sp, #0x0]
    str r4, [sp, #0x4]
    mov r4, #0x3
    str r4, [sp, #0x8]
    mov ip, #0x1
    mov r4, r0
    str ip, [sp, #0xc]
    bl func_02009db4
    ldr r0, =data_020ecd84
    add r1, r4, #0xa8
    str r0, [r4, #0x0]
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r3, =data_020acdec
    add r2, r4, #0x100
    ldrsh ip, [r3, #0x0]
    mov r0, r4
    add r1, r4, #0x1d0
    strh ip, [r2, #0xd0]
    ldrsh ip, [r3, #0x2]
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
    ldr r1, =data_020eccd4
    ldr r0, =0x778
    ldr r2, [r1, #0x0]
    add r0, r4, r0
    mov r1, #0x0
    bl func_0200868c
    ldr r0, =0x778
    mov r1, #0x1
    add r0, r4, r0
    ldr r2, =data_020ecce8
    ldr r2, [r2, #0x0]
    bl func_0200868c
    mov r0, r4
    ldr r1, =data_0211eba0
    mov r2, #0x0
    bl func_02062a70
    mov r0, r4
    bl func_02008580
    mov r0, r4
    mov r1, #0x41
    bl func_02004024
    mov r0, r4
    add sp, sp, #0x10
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
